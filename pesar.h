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

#ifndef PESAR_H
    #define PESAR_H
    
    #include "project.h"

    /*** MACROS ***/
    #define DT_HIGH HX711_DT_Read() == 1
    #define SCK_HIGH HX711_SCK_Write(1)
    #define SCK_LOW HX711_SCK_Write(0)
    
    /*** PROTOTIPO DE VARIABLES GLOBALES ***/
    extern uint32 peso;
    
    /*** PROTOTIPO DE FUNCIONES ***/
    void medir_peso(void);
    
    /*** PROTOTIPO DE INTERRUPCIONES ***/
    
#endif

/* [] END OF FILE */
