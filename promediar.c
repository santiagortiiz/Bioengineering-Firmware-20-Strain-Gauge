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
#include "promediar.h"
#include "pesar.h"

/*** VARIABLES ***/
uint8 contador = 0;
uint8 promedio_listo = 0;
uint32 peso_acumulado = 0;
uint32 peso_promedio = 0;


/*** FUNCIONES ***/
void calcular_promedio(void){
    contador++;                         // El peso medido se acumula 5 veces
    peso_acumulado += peso;             // luego se promedia y se le aplica
                                        // la mascara 0x800000
    if (contador == 5){
        peso_promedio = peso_acumulado/5;
        peso_promedio = peso_promedio ^ 0x800000;
        
        contador = 0;
        peso_acumulado = 0;             // Luego de promediar el peso, se 
        promedio_listo = 1;             // activa una bandera para indicar 
    }                                   // que esta listo para usarse
}

/*** INTERRUPCIONES ***/

/* [] END OF FILE */
