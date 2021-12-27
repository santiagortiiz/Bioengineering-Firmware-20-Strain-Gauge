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

#ifndef TATAR_H
    #define TATAR_H
    
    #include "project.h"

    /*** MACROS ***/
    
    /*** PROTOTIPO DE VARIABLES GLOBALES ***/
    extern uint8 tarar;
    
    /*** PROTOTIPO DE FUNCIONES ***/
    void tarar_peso(void);
    
    /*** PROTOTIPO DE INTERRUPCIONES ***/
    CY_ISR_PROTO(tarar_bascula);
    
#endif

/* [] END OF FILE */
