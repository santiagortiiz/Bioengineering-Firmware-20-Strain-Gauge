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
#include "e2prom.h"
#include <math.h>

/*** VARIABLES ***/
uint16 delta_x;
uint32 delta_y;
uint32 offset;

/*** FUNCIONES ***/                         // Esta funcion solo debe ejecutarse la primera vez
void guardar_ecuacion_por_defecto(void){    // que se programe el uC, o al cambiar la ecuacion
                                            // de calibracion. De esta forma se alarga la vida
    /* Delta de X = 800 */                  // util de la memoria EEPROM
    // LSB                                  
    EEPROM_WriteByte(32, fila_0_byte_0);    // 32 = 0b00100000
    EEPROM_WriteByte(3, fila_0_byte_1);     // 3  = 0b00000011
    // MSB
    
    /* Delta de Y = 1601432 */
    // LSB
    EEPROM_WriteByte(152, fila_0_byte_2);   // 232  = 0b11101000
    EEPROM_WriteByte(111, fila_0_byte_3);    // 50 = 0b00110010
    EEPROM_WriteByte(24, fila_0_byte_4);    // 25  = 0b00110011
    // MSB
    
    /* Offset = 8596704*/
    // LSB
    EEPROM_WriteByte(224, fila_0_byte_5);   // 224 = 0b11100000
    EEPROM_WriteByte(44, fila_0_byte_6);    // 44  = 0b00101100
    EEPROM_WriteByte(131, fila_0_byte_7);   // 131 = 0b00110011
    // MSB
}

void leer_ecuacion_por_defecto(void){
              // LSB
    delta_x = EEPROM_ReadByte(fila_0_byte_0)*pow(256,0) + 
              EEPROM_ReadByte(fila_0_byte_1)*pow(256,1);
              // MSB
                
              // LSB
    delta_y = EEPROM_ReadByte(fila_0_byte_2)*pow(256,0) + 
              EEPROM_ReadByte(fila_0_byte_3)*pow(256,1) + 
              EEPROM_ReadByte(fila_0_byte_4)*pow(256,2);
              // MSB
            
             // LSB
    offset = EEPROM_ReadByte(fila_0_byte_5)*pow(256,0) + 
             EEPROM_ReadByte(fila_0_byte_6)*pow(256,1) + 
             EEPROM_ReadByte(fila_0_byte_7)*pow(256,2);
             // MSB
}

/*** INTERRUPCIONES ***/

/* [] END OF FILE */
