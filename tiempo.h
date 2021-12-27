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

#ifndef TIEMPO_H
    #define TIEMPO_H
    
    #include "project.h"

    /*** MACROS ***/
    #define limite_de_milisegundos milisegundos == 1000
    #define reiniciar_milisegundos milisegundos = 0
    
    /*** PROTOTIPO DE VARIABLES GLOBALES ***/
    extern uint16 milisegundos;
    
    /*** PROTOTIPO DE FUNCIONES ***/
    
    /*** PROTOTIPO DE INTERRUPCIONES ***/
    CY_ISR_PROTO(cronometro);
    
#endif

/* [] END OF FILE */