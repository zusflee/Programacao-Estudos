//ALUNO: LEONARDO ANTUNES DE SOUZA - 26004615

#include <stdio.h>
#include <math.h>

//1

// int main(){
//    int matriz[4][6];
//    int quantidade = 0;

//    printf("Digite um valor na matriz 4x6: \n");
//    for(int i = 0; i < 4; i++){
//     for(int j = 0; j < 6; j++){
//         printf("Informe o valor do elemento [%d]x[%d]: ", i, j);
//         scanf("%d", &matriz[i][j]);

//         if(matriz[i][j] <= 30 && matriz[i][j] >= 18){
//             quantidade++;
//         }
//     }
//    }
//    printf("Quantidade de numeros cujos valores pertencem ao intervalo de 18 a 30: %d\n", quantidade);
// }


//2

// int main() {
//     float A[2][3], R[2][3], fator;
//     scanf("%f", &fator);
//     for (int i = 0; i <= 2; i++) {
//         for (int j = 0; j <= 3; j++) {
//             scanf("%f", &A[i][j]);
//             R[i][j] = A[i][j] * fator;
//         }
//     }
//     return 0;
// }

// Responda:

// a) Identifique os erros nos limites dos dois lacos for.
         // i <= 2, j <= 3 .
// b) Explique quais sao os maiores indices validos para as linhas e colunas dessa matriz.
         // i < 2 (0, 1), j < 3 (0, 1, 2).
// c) Reescreva os dois lacos de forma correta.
     // for (int i = 0; i < 2; i++)
    // for (int j = 0; j < 3; j++) 


//3

// int main(){
//     int matriz[12][4];
//     int maior = 0;
//     int produto_maior = 0;  // Criar variaveis para indicar o produto com maior valor junto com seu forncedor.
//     int forn_maior = 0;

//     for(int i = 0; i < 12; i ++){
//         for(int j = 0; j < 4; j ++){
//             printf("Informe o preco do produto: \n");
//             scanf("%d", &matriz[i][j]);
            
//             if(i == 0 && j == 0){
//                 maior = matriz[i][j];
//                 produto_maior = i;
//                 forn_maior = j;
//             }
//             else if(matriz[i][j] > maior){
//                 maior = matriz[i][j];
//                 produto_maior = i;
//                 forn_maior = j;
//             }
//         }
//     }
//     printf("\n--- RESULTADO ---\n");
//     printf("Maior preco encontrado: R$ %d\n", maior);
//     printf("Produto correspondente: Produto %d\n", produto_maior + 1);
//     printf("Fornecedor: Fornecedor %d\n", forn_maior + 1);
// }

//4 

// int main(){
//     int matriz[5][4];
//     int maior = 0;
//     int menor = 0;
//     int lin_maior = 0, col_maior = 0;  // Guardar linha (i) e coluna (j) em variaveis fora do for.
//     int lin_menor = 0, col_menor = 0;

//     for(int i = 0; i < 5; i++){
//         for(int j = 0; j < 4; j ++){
//             printf("Informe um valor para a posicao [%d]x[%d]: \n", i, j);
//             scanf("%d", &matriz[i][j]);

//             if(i == 0 && j == 0){
//                 maior = matriz[i][j];
//                 menor = matriz[i][j];
//                 lin_maior = i; col_maior = j;
//                 lin_menor = i; col_menor = j;
//             }
//             else if(matriz[i][j] > maior){
//                 maior = matriz[i][j];
//                 lin_maior = i;
//                 col_maior = j;
//             }
//             else if(matriz[i][j] < menor){
//                 menor = matriz[i][j];
//                 lin_menor = i;
//                 col_menor = j;
//             }
//         }
//     }
//     printf("Maior valor esta na posicao [%d]x[%d]\n", lin_maior, col_maior);
//     printf("Menorr valor esta na posicao [%d]x[%d]\n", lin_menor, col_menor);
// }


// 5

// int main(){
//     int matriz[3][5];
//     int qtd_elementos = 0;
//     int qtd_pares = 0;
//     int soma = 0;
//     int media = 0;

//     for(int i = 0; i < 3; i++){
//         int qtd_linha = 0; // Reseta a contagem para cada nova linha
//         for(int j = 0; j < 5; j++){
//             printf("Informe um valor para a posicao [%d]x[%d] da matriz: ", i, j);
//             scanf("%d", &matriz[i][j]);

//             if(matriz[i][j] >= 10 && matriz[i][j] <= 25){
//                 qtd_elementos++;
//             }

//             if(matriz[i][j] % 2 == 0){
//                 soma+= matriz[i][j];
//                 qtd_pares ++;
//             }
//             printf("Quantidade de elementos entre 10 e 25 na linha %d: %d\n\n", i, qtd_linha);
//         }
//     }

//     if(qtd_pares > 0){
//         float media = (float)soma / qtd_pares;
//         printf("Media dos elementos pares: %.2f\n", media);
//     }
//     else {
//         printf("Nenhum numero par foi digitado.\n");
//     }
// }

// int main(){
//     int A[3][4] = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12}
//     };
//     int T[4][3];
//     for(int i = 0; i < 3; i++){
//         for (int j = 0; j < 4; j++) {
//             T[i][j] = A[j][i];
//         }
//     }
// }

// Responda:
// a) Qual deve ser a ordem da matriz transposta de uma matriz de ordem 3 × 4?
//     // 4 x 3.
// b) Explique por que os acessos T[i][j] e A[j][i] podem atingir posicoes invalidas no trecho
// apresentado.
//     //
// c) Qual deve ser a atribuicao correta, em funcao de i e j, para construir a transposta?
//     //
// d) Escreva a matriz T que deve ser obtida ao final.
//     // T = {1, 5, 9},
//             {2, 6 }


// 6. Faca um programa que preencha uma matriz quadrada de numeros inteiros de ordem 6 × 6.
// Em seguida, calcule e mostre separadamente a soma:
//     • dos elementos da linha 3;
//     • dos elementos da coluna 5;
//     • dos elementos da diagonal principal os que estao na posicao M[i][i]);
//     • dos elementos da diagonal secundaria (os que estao na posicao M[i][5-i]);
//     • de todos os elementos da matriz.
// Considere linha 3 e coluna 5 usando a numeracao usual da matriz. Em C, esses indices correspondem a
// 2 e 4.            

int main(){
    int matriz[6][6];
    int soma_linha3 = 0;
    int soma_coluna5 = 0;
    int soma_diagonal_principal = 0;
    int soma_diagonal_secundaria = 0;

    for(int j = 0; j < 6; j++){
        soma_linha3 += matriz[2][j];
    }
}