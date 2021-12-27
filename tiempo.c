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
#include "tiempo.h"

/*** VARIABLES ***/
uint16 milisegundos = 0;

/*** FUNCIONES ***/

/*** INTERRUPCIONES ***/
CY_ISR(cronometro){
    milisegundos++;
    if (limite_de_milisegundos) reiniciar_milisegundos;
}

/* [] END OF FILE */
