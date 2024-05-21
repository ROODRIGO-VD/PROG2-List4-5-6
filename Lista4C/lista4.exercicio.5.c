#include <stdio.h>
#define TARIFA 4.95
/*  Tarifa Inicial -> R$ 4.95
    Cada Km sera cobrado mais R$ 2.50 na BANDEIRA 1
    Cada Km sera cobrado mais R$ 3.00 na BANDEIRA 2
    Fazer uma função que calcule os valores da corrida de táxi.
    A função recebe o VALOR REAL DIST(DISTÂNCIA PERCORRIDA PELA TAXI EM KM)
    Recebe os ponteiros B1  E  B2( QUE INDICAM OS VALORES CALCULADOS PARA A CORRIDA NA BANDEIRA 1
                                  E NA BANDEIRA 2.)/
    void calcula_corrida(float dist, float *b1, float *b2)

 */

 void calcula_corrida(float dist, float *b1, float *b2){
    float bandeira1 = 2.50;
    float bandeira2 = 3.00;

    *b1 = TARIFA + (dist * bandeira1);
    *b2 = TARIFA + (dist * bandeira2);
 }

 int main(){
    float dist, v_ban1, v_ban2;

    printf("Distancia percorrida em KM: ");
    scanf("%f", &dist);

    calcula_corrida(dist, &v_ban1, &v_ban2);

    printf("Valor da corrida na Bandeira 1: R$%.2f \n", v_ban1 );
    printf("Valor da corrida na Bandeira 2: R$%.2f \n", v_ban2 );
 }
