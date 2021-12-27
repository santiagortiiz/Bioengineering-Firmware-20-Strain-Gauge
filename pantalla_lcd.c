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
#include "pantalla_lcd.h"
#include "promediar.h"
#include "calibrar.h"
#include "e2prom.h"

/*** VARIABLES ***/

/*** FUNCIONES ***/
void menu(uint8 indice){                            // Rutinas de impresion en el LCD
    switch(indice){ 
        case 0:                                     // Bascula Apagada - Menu Principal
            LCD_ClearDisplay();
            LCD_Position(0,2);
            LCD_PrintString("Bascula Digital");
            LCD_Position(1,1);
            LCD_PrintString("Rango de medicion");
            LCD_Position(2,5);
            LCD_PrintString("0g - 1kg");
            LCD_Position(3,0);
            LCD_PrintString("ON-BTN1   Tarar-BTN2");
            break;
            
        case 1:                                     // Bascula Encendida - Menu de medicion
            LCD_ClearDisplay();
            LCD_Position(0,3);
            LCD_PrintString("Bascula Digital");
            LCD_Position(1,0);
            LCD_PrintString("ADC: ");
            LCD_PrintU32Number(peso_promedio);
            LCD_PrintString(" g");
            LCD_Position(2,0);                      
            if (signo_peso_calibrado == 0) LCD_PrintString("Peso: ");
            else LCD_PrintString("Peso: -");
            LCD_PrintNumber(peso_calibrado);
            LCD_PrintString(" g");
            break;
            
        case 2:                                     // Estado adicional - Menu de Ecuacion de calibracion
            LCD_ClearDisplay();
            LCD_Position(0,0);
            LCD_PrintString("Memoria EEPROM");
            LCD_Position(1,0);
            LCD_PrintString("Delta X: ");
            LCD_PrintNumber(delta_x);
            LCD_Position(2,0);
            LCD_PrintString("Delta Y: ");
            LCD_PrintU32Number(delta_y);
            LCD_Position(3,0);
            LCD_PrintString("Offsset: ");
            LCD_PrintU32Number(offset);
    }
}

/*** INTERRUPCIONES ***/

/* [] END OF FILE */
