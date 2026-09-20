//ALUNO: LEONARDO ANTUNES DE SOUZA - 26004615

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// 1. Faca uma funcao que receba dois numeros inteiros, a e b. A funcao deve incrementar a e
// decrementar b. Utilize o prototipo:
// void inc_dec(int *a, int *b);
// Faca tambem um programa principal (main) que leia os dois valores, chame a funcao e mostre
// os valores antes e depois da chamada.

// void inc_dec(int *a, int *b){
//     (*a) ++;
//     (*b) --;
// }
// int main(){
//     int a, b;

//     printf("Informe a: ");
//     scanf("%d", &a);
//     printf("Informe b: ");
//     scanf("%d", &b);

//     printf("\n--- Antes --- \n");
//     printf("a = %d | b = %d\n", a, b);

//     inc_dec(&a, &b);

//     printf("\n--- Depois --- \n");
//     printf("a = %d | b = %d\n", a, b);
//     return 0;
// }

// 2. Escreva uma funcao que troque os valores de duas variaveis do tipo float. Utilize o prototipo:
// void troca_valor(float *x, float *y);
// Faca um programa (main) que leia dois valores, mostre-os na tela, faca a troca usando a funcao
// e mostre os valores novamente.

// void troca_valor(float *x, float *y){
//     float subs;
//     subs = *x;
//     *x = *y;
//     *y = subs;
// }

// int main(){
//     float x, y;
    
//     printf("Informe x: ");
//     scanf("%f", &x);
//     printf("Informe y: ");
//     scanf("%f", &y);

//     printf("\n--- Antes --- \n");
//     printf("x = %f | y = %f\n", x, y);

//     troca_valor(&x, &y);

//     printf("\n--- Depois --- \n");
//     printf("x = %f | y = %f \n", x, y);

//     return 0;
// }

// 3. Faca uma funcao que calcule o perimetro e a area de um circulo a partir do raio. Utilize oprototipo:
// void calcula_circulo(float raio, float *pPerimetro, float *pArea);
// Considere:
// perimetro = 2πr
// area = πr2
// Use 3.14159 para o valor de π.


// void calcula_circulo(float raio, float *pPerimetro, float *pArea){
//     float pi = 3.14159;

//     *pPerimetro = 2 * pi * raio;
//     *pArea = pi * (raio * raio);
// }

