//ALUNO: LEONARDO ANTUNES DE SOUZA - 26004615

#include <stdio.h>
#include <math.h>

//1. Leia duas notas e calcule a media ponderada, considerando peso 2 para a primeira e peso 3 para a segunda.

// int main(){
//     float nota;
//     float peso;
//     float soma_peso;
//     float soma_nota;
//     float media = 0.0;

//     for(int i = 0; i < 2; i++){
//         printf("Informe a %d nota: ", i + 1);
//         scanf("%f",&nota);

//         printf("Informe o peso da %d prova: ", i + 1);
//         scanf("%f", &peso);

//         soma_peso += peso;

//         if(i == 0){
//             nota = nota * 2;
//         }

//         if(i == 1){
//             nota = nota * 3;
//         }

//         soma_nota += nota;
//     }

//     media = soma_nota / soma_peso;

//     printf("A media ponderada das notas e: %.2f\n", media);
//     return 0;

// }

//2. Um funcionario recebe salario fixo mais 4% de comissao sobre as vendas. Leia salario fixo e vendas e mostre comissao e salario final.

// int main(){
//     int contador = -1;
//     float salario, salario_final, comissao;
//     int vendas = 0;

//     while(contador != 0){
//         printf("Informe o valor do seu salario, digite 0 para encerrar: ");
//         scanf("%f", &salario);

//         if(salario <= 0){
//             break;
//             return 0;
//         }

//         printf("Informe o numero total de vendas: ");
//         scanf("%d", &vendas);

//         comissao = vendas * 1.04;
        
//         salario_final = salario + comissao;

//         printf("Salario Final: %.2f\n",salario_final);
//         printf("Comissao Total: %.2f\n",comissao);
//     }
//     return 0; 
// }

//3. Leia o peso de uma pessoa e mostre: (a) novo peso se engordar 15%; (b) novo peso se emagrecer 20%.

// int main(){
//     float peso;

//     printf("Informe seu peso: ");
//     scanf("%f", &peso);

//     printf("Seu peso apos engordar 15%%: %.2f\n", peso * 1.15);
//     printf("Seu peso apos emagrecer 20%%: %.2f\n", peso * 0.80);

//     return 0;
// }

//4. Leia base maior, base menor e altura e calcule a area de um trapezio. A = (B+b)·h / 2 .

//5. Leia ano de nascimento e ano atual e calcule a idade em anos, meses, dias e semanas(aproximacoes simples sao aceitas).

//6. Uma pizzaria corta a pizza em 8 fatias. Leia quantas fatias foram consumidas e informe: (a) quantas pizzas completas foram consumidas; (b) quantas fatias sobraram para completar a proxima pizza. Use divisao inteira e %.

//7. Leia a temperatura em Fahrenheit e converta para Celsius. C = (F − 32)/1.8.

//8. Calcule a area e o comprimento de uma circunferencia dado o raio r. Area = π · r2 e Comprimento = 2 · π · r. Use π = 3.14159.

//9. Leia tensao (V ) e resistencia (R) e calcule a corrente eletrica em um resistor. I = V/R.

//10. Leia os catetos de um triangulo retangulo e calcule a hipotenusa. h = √a2 + b2.

//11. Leia duas dimensoes de um comodo (em metros), calcule sua area (m2) e a potencia de iluminacao necessaria, considerando sao necessarios 18W de potencia para cada m2.

//12. Leia dois angulos de um triangulo e calcule o terceiro angulo. Soma = 180◦.

//13. Leia o numero de lados N de um polıgono convexo e calcule o numero de diagonais. ND = N(N - 3)/2.

//14. Leia um valor de raio e calcule o volume de uma lata cilindrica usando V = πr2h (leia tambem a altura).

//15. Leia uma hora (hora e minutos) e calcule: (a) a hora convertida em minutos; (b) total de minutos; (c) total em segundos.

// 16. Leia tres inteiros (alfa, beta, gama) e faca a troca: alfa → beta, beta → gama, gama → alfa. Imprima antes e depois.

//17. Leia quatro notas e calcule a m´edia ponderada usando pesos 1, 2, 3 e 4. Mostre a m´edia final.

//18. Leia tempo e velocidade m´edia de uma viagem. Calcule a dist ˆancia e a quantidade de litros usados, considerando consumo de 12 km/L. Dist ˆancia = tempo × velocidade.

//19. Joao recebeu seu salario e precisa pagar duas contas atrasadas. Por causa do atraso, paga
//multa de 2% em cada conta. Leia salario e valores das contas e calcule quanto restara.

//20. Leia as resistencias (ohms) de dois resistores e calcule: (a) resistencia em serie; (b) resistencia
//em paralelo. Rs = R1 + R2 e Rp = R1 * R2 / R1 + R2.