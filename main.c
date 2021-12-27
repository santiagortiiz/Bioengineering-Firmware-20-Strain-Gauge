/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

#include "project.h"

#include "encender.h"
#include "e2prom.h"
#include "tiempo.h"
#include "pantalla_lcd.h"

#include "pesar.h"
#include "promediar.h"
#include "calibrar.h"
#include "tarar.h"

#define and &&

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    isr_boton_encender_StartEx(encender_bascula);
    isr_contador_StartEx(cronometro);
    isr_boton_tarar_StartEx(tarar_bascula);

    /* Inicializacion de Componentes */
    EEPROM_Start();
    Contador_Start();
    LCD_Start();
    
    /* Inicializacion de la Bascula Digital */
    
    //guardar_ecuacion_por_defecto(); // Ejecutar sólo la primera vez o al cambiar la Ecuacion de Calibracion
    leer_ecuacion_por_defecto();
    menu(0);
    
    for(;;)
    {
        /* Bascula Encendida */
        if ((bascula_encendida) and (milisegundos%200 == 0)) {  // Rutina para tomar 5 muestras por segundo
            medir_peso();
            calcular_promedio();
        }
        
        if (promedio_listo) {                                   // Cuando se promedian las muestras tomadas
            promedio_listo = 0;                                 // se calcula el peso en la funcion calibrar_peso()
                                                                // y se imprime en el menu_1 del LCD
            if (tarar){                                    
                tarar = 0;                                      // En caso de presionar el boton de tarado
                tarar_peso();                                   // se ejecuta la funcion tarar_peso() para ajustar
            }                                                   // el nuevo cero
            
            calibrar_peso();
            menu(1);
        }
    }                                                           
}

/* [] END OF FILE */
