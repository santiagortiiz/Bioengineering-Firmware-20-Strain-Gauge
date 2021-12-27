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

#ifndef E2PROM_H
    #define E2PROM_H
    
    #include "project.h"

    /*** MACROS ***/
                       // 0x000000FilaColumna - La columna corresponde al Byte numero "i", donde i = 0x0 : 0xF 
    #define fila_0_byte_0 0x00000000
    #define fila_0_byte_1 0x00000001
    #define fila_0_byte_2 0x00000002
    
    #define fila_0_byte_3 0x00000003
    #define fila_0_byte_4 0x00000004
    #define fila_0_byte_5 0x00000005
    
    #define fila_0_byte_6 0x00000006
    #define fila_0_byte_7 0x00000007
    #define fila_0_byte_8 0x00000008
    
    #define fila_1_byte_0 0x00000010
    #define fila_2_byte_0 0x00000020
    
    /*** PROTOTIPO DE VARIABLES GLOBALES ***/
    extern uint32 offset;
    extern uint16 delta_x;
    extern uint32 delta_y;
    
    /*** PROTOTIPO DE FUNCIONES ***/
    void guardar_ecuacion_por_defecto(void);
    void leer_ecuacion_por_defecto(void);
    
    /*** PROTOTIPO DE INTERRUPCIONES ***/
    
#endif

/* [] END OF FILE */
