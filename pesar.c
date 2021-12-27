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
#include "pesar.h"
#include "pantalla_lcd.h"

/*** VARIABLES ***/
uint32 peso = 0;

/*** FUNCIONES ***/
void medir_peso(void){
    volatile uint8 estado = 0;          // Esta variable permite validar en Debugg
    peso = 0;                           // Se inicializa el peso en cada ciclo de medicion
           
    while (DT_HIGH){                    // Este "while" es un Delay hasta que "DT_LOW"
        estado = HX711_DT_Read();       // e indique que el dato esta disponible
    }       
    
    for (uint8 i = 0; i < 24; i++){     // Esta rutina permite recibir
        SCK_HIGH;                       // y almacenar bits como si 
        CyDelayUs(1);                   // fuera un "Shift Register"
        peso = peso << 1;
        SCK_LOW;
        CyDelayUs(1); 
        if (DT_HIGH) peso++;
    }
    
    SCK_HIGH;
    CyDelayUs(1);
    //peso = peso ^ 0x800000;           // Este caracter ^ indica XOR y sirve de 
    SCK_LOW;                            // mascara para evitar valores negativos
    CyDelayUs(1);                       // 1000 0000 0000 0000 0000 0000 = 8.388.608 = 0x80000
}


/*** INTERRUPCIONES ***/

/* [] END OF FILE */
