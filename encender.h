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

#ifndef ENCENDER_H
    #define ENCENDER_H
    
    #include "project.h"

    /*** MACROS ***/
    #define bascula_apagada estado_de_la_bascula == 0
    #define bascula_encendida estado_de_la_bascula == 1
    #define mostrar_parametros_calibracion estado_de_la_bascula == 2
    
    /*** PROTOTIPO DE VARIABLES GLOBALES ***/
    uint8 estado_de_la_bascula;
    
    /*** PROTOTIPO DE FUNCIONES ***/
    
    /*** PROTOTIPO DE INTERRUPCIONES ***/
    CY_ISR_PROTO(encender_bascula);
    
#endif

/* [] END OF FILE */
