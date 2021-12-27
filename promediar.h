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

#ifndef PROMEDIAR_H
    #define PROMEDIAR_H
    
    #include "project.h"

    /*** MACROS ***/
    
    /*** PROTOTIPO DE VARIABLES GLOBALES ***/
    extern uint8 contador;
    extern uint8 promedio_listo;
    extern uint32 peso_acumulado;
    extern uint32 peso_promedio;
    
    /*** PROTOTIPO DE FUNCIONES ***/
    void calcular_promedio(void);
    
    /*** PROTOTIPO DE INTERRUPCIONES ***/
    
#endif

/* [] END OF FILE */
