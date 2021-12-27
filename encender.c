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

/*** COMPONENTES INCLUIDOS ***/
#include "encender.h"
#include "pantalla_lcd.h"

/*** VARIABLES ***/
uint8 estado_de_la_bascula = 0;

/*** FUNCIONES ***/

/*** INTERRUPCIONES ***/
CY_ISR(encender_bascula){                                       // estado_de_la_bascula      
    estado_de_la_bascula++;                                     // 0 - Apagada
    if (estado_de_la_bascula == 3) estado_de_la_bascula = 0;    // 1 - Encendida
                                                                // 2 - Parametros de calibracion
    
    /* Bascula Apagada */
    if (bascula_apagada) menu(0);
    
    /* Mostrar Parametros de Calibracion */
    if (mostrar_parametros_calibracion) menu(2);                // Permite visualizar los parametros de calibracion
}                                                               // almacenados en la EEPROM

/* [] END OF FILE */
