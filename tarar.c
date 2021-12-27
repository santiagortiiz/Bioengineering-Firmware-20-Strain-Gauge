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
#include "tarar.h"
#include "e2prom.h"
#include "promediar.h"

/*** VARIABLES ***/
uint8 tarar;

/*** FUNCIONES ***/
void tarar_peso(void){              // El valor del peso promediado por 5 muestras
    offset = peso_promedio;         // se asigna al offset de la ecuacion de calibracion
}                                   

/*** INTERRUPCIONES ***/
CY_ISR(tarar_bascula){
    tarar = 1;                      // Se activa una bandera para tarar el peso
}

/* [] END OF FILE */
