//ALUNO: LEONARDO ANTUNES DE SOUZA - 26004615

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// 1. Um jogo salva a quantidade de moedas de uma personagem, que inicialmente e igual a 18.
// Faca um programa que:
// • Armazene a quantidade de moedas em ma variavel moedas = 18;
// • declare um ponteiro e associe-o a variavel moedas;
// • associe o ponteiro a moedas;
// • imprima:
// – o valor de moedas;
// – o endereco de moedas;
// – o valor armazenado no ponteiro;
// – o conteudo acessado pelo ponteiro.
// • em seguida, altere a quantidade de moedas para 30 usando o ponteiro e mostre o novo
// valor da variavel.


// 2. Um laboratorio registrou a temperatura de uma amostra em uma variavel que inicialmente e
// igual a 36.8.
// Faca um programa que:
// • Armazene a temperatura em uma variavel temperatura = 36.8;
// • declare um ponteiro e associe-o a variavel temperatura;
// • mostre a temperatura original;
// • some 2.0 a temperatura usando o ponteiro e mostre a temperatura atualizada.


// 3. Um sistema salva a letra ’C’ que representa a categoria de um produto.
// Faca um programa que:
// • declare uma variavel categoria = ’C’;
// • declare e associe um ponteiro a variavel categoria;
// • imprima:
// – a letra armazenada na variavel;
// – o endereco da variavel;
// – o conteudo acessado pelo ponteiro.
// • depois altere a categoria para ’A’ usando o ponteiro e mostre o novo valor da variavel.

// 4. Em um jogo de aventura, uma personagem possui 3 vidas, 9.5 moedas magicas e nivel ’B’.
// Faca um programa que:
// • declare as variaveis vidas, moedas e nivel com os valores iniciais;
// • crie um ponteiro para cada uma delas;
// • imprima os valores originais;
// • altere, usando os ponteiros:
// – vidas para 5;
// – moedas para 15.0;
// – nivel para ’A’.
// • imprima os valores finais.


// 5. Um sensor pode ser conectado a leituras diferentes ao longo do programa.
// Faca um programa que:
// • declare duas variaveis leitura1 = 10 e leitura2 = 25, representando leituras de um
// sensor.
// • declare um ponteiro, associe-o a variavel leitura1 e imprima o conteudo acessado por ele;
// • depois faca o ponteiro apontar para leitura2 e imprima novamente o conteudo acessado
// por ele;
// • por fim, altere leitura2 para 40 usando o ponteiro e mostre o novo valor da variavel.


// 6. Analise o codigo abaixo:
// #include <stdio.h>
// int main() {
//     int numero = 7;
//     int *p;
//     *p = &numero;
//     printf("%d\n", *p);
//     return 0;
// }
// Responda:
// (a) Qual linha esta incorreta?
// (b) Explique por que ela esta errada.
// (c) Reescreva essa linha corretamente.


7. Analise o codigo abaixo:
#include <stdio.h>
int main() {
float nota = 8.0;
float *ptr = &nota;
printf("Nota: %.1f\n", &nota);
printf("Conteudo: %.1f\n", ptr);
return 0;
}
Responda:
(a) O que h ´a de errado no primeiro printf?
(b) O que h ´a de errado no segundo printf?
(c) Escreva as duas linhas de impress ˜ao corretamente, uma para mostrar o valor de nota e
outra para mostrar o conte ´udo acessado pelo ponteiro.
8. Em um jogo, a vari ´avel energia guarda a energia atual de uma personagem. Um ponteiro
ptr energia deve apontar para essa vari ´avel para permitir acesso indireto ao valor. No entanto,
o programa abaixo foi escrito com um erro:
#include <stdio.h>
int main() {
int energia;
int *ptr_energia;
energia = 13;
*ptr_energia = energia;
printf("%d\n", energia);
return 0;
}
Responda:
(a) Qual linha contem o erro?
(b) Explique por que esse comando esta incorreto.
(c) Reescreva o trecho de forma correta para que o ponteiro seja inicializado adequadamente.
(d) Apos a correcao, o que o programa imprime na tela?
3
9. Considere o codigo abaixo:
int a, b, c;
int *p1, *p2, *p3;
a = 15;
b = 25;
p1 = &a;
p2 = &b;
c = *p1 + *p2;
p3 = &c;
*p1 = *p1 + 5;
*p3 = *p3 - 10;
c = *p1 + *p2 + *p3;
Faca o teste de mesa do codigo, acompanhando os valores das variaveis a, b e c, alem dos
conteudos acessados pelos ponteiros p1, p2 e p3.
Ao final, informe o valor de c.