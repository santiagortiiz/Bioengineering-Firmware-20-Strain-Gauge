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
#include "calibrar.h"
#include "promediar.h"
#include "e2prom.h"

/*** VARIABLES ***/
uint16 peso_calibrado = 0;
uint8 signo_peso_calibrado = 0;

/*** FUNCIONES ***/
void calibrar_peso(void){
    /* Ecuacion Calibrada */
    if (peso_promedio > offset){            // Calculo del peso calibrado para valores POSITIVOS
        signo_peso_calibrado = 0;                
        peso_calibrado = (peso_promedio - offset)*delta_x/delta_y;
    }
    else if (peso_promedio <= offset){      // Calculo del peso calibrado para valores NEGATIVOS
        signo_peso_calibrado = 1;
        peso_calibrado = (offset - peso_promedio)*delta_x/delta_y;
    }
    
    if (peso_calibrado == 0) signo_peso_calibrado = 0; // Ajuste del signo si el peso es cero
    
    /* Ecuacion para calibrar */
    //peso_calibrado = (peso_promedio - offset)*789/1566867;
    //signo_peso_calibrado = 0;
    //peso_calibrado = (peso_promedio - offset)*1/2010;
    //signo_peso_calibrado = 0;
}

/*** INTERRUPCIONES ***/

/* [] END OF FILE */
