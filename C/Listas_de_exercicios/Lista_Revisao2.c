//ALUNO: LEONARDO ANTUNES DE SOUZA - 26004615

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>


// 1. Em um projeto simples de saneamento, deseja-se calcular propriedades do fluxo de agua em um reservatorio cilindrico. Faca um programa em C que leia:
    // • o raio do reservatorio  r, em metros;
    // • a altura da coluna de agua  h, em metros.
// Implemente uma unica funcao que calcule e atualize, por meio de parametros de saida
// (passagem por referencia), os seguintes valores:  // Passagem por referencia quer dizer ponteiros.
    // • a area lateral do reservatorio  Alateral;
    // • a pressao no fundo do reservatorio  P.
// Utilize as formulas: 
    // Alateral = 2πrh
    // P = ρgh
// Considere:
    // • π = 3.14159;
    // • ρ = 1000 kg/m3 (densidade da agua); 
    // • g = 9.81 m/s2

// Ao final, mostre a area lateral e a pressao calculada.

// void calcularProjeto(float r, float h, float *area_lateral, float *pressao){
//     float pi = 3.14159;
//     float roh = 1000;
//     float g = 9.81;

//     *area_lateral = 2 * pi * h * r;
//     *pressao = roh * g * h;
// }

// int main(){
//     float r,h;
//     float area_lateral;  // Precisamos declarar as variaveis que definimos como ponteiro na funcao na main e chamar pelo endereco(&) delas pelo parametro.
//     float pressao;
//     printf("Digite o raio: ");
//     scanf("%f", &r);

//     printf("Digite a altura: ");
//     scanf("%f", &h);

//     calcularProjeto(r, h, &area_lateral, &pressao);

//     printf("Area lateral: %.2f  | Pressao: %.2f\n",area_lateral, pressao);
    
//     return 0;
    
// }

// 2. Cadastro de investimentos
// Considere o cadastro de 4 investimentos, em que cada investimento possui:
//     • nome do investimento;
//     • valor aplicado;
//     • taxa de rendimento anual;
//     • instituicao → nome e tipo;
//     • vetor com os valores de rendimento obtidos, em reais, nos ultimos 3 meses.
// Considere as structs e o vetor ja preenchido abaixo: 
// struct tipo_instituicao {
//     char nome[30];
//     char tipo[20];
// };
// struct tipo_investimento {
//     char nome[30];
//     float valor_aplicado;
//     float taxa_rendimento;
//     struct tipo_instituicao instituicao;
//     float rendimentos[3];
// } Investimentos[4] =
//     {
//     {"Tesouro Selic", 1500.00, 13.25, {"Banco Federal", "Banco"},
//     {14.50, 15.20, 14.80}},
//     {"CDB Premium", 3200.50, 12.10, {"InvestMais", "Corretora"},
//     {30.10, 31.50, 29.90}},
//     {"LCI Azul", 2800.75, 10.80, {"Banco Azul", "Banco"},
//     {22.40, 21.80, 23.10}},
//     {"Fundo Alpha", 5000.00, 14.50, {"Alpha Invest", "Gestora"},
//     {48.00, 50.25, 47.90}}
// };
// Implemente as funcoes:
// a) media aplicacoes() Retorna a media  dos valores aplicados nos investimentos.
// b) num tipo instituicao(char tipo[20]) Retorna quantos investimentos pertencem ao tipo de instituicao informado. 
// c) conta investimentos letra(char letra) Retorna quantos investimentos possuem o nome iniciado pela letra informada.
// d) soma rendimentos(char nome[30]) Recebe o nome de um investimento e retorna a soma dos rendimentos dos ultimos 3
// meses desse investimento.
// Caso o investimento nao seja encontrado, retorne  -1.
// Considere: strcmp(str1, str2) para comparar strings. Nao e necessario ler dados pelo teclado.
// Utilize o vetor ja preenchido.

// struct tipo_instituicao {
//     char nome[30];
//     char tipo[20];
// };
// struct tipo_investimento {
//     char nome[30];
//     float valor_aplicado;
//     float taxa_rendimento;
//     struct tipo_instituicao instituicao;
//     float rendimentos[3];
// } Investimentos[4] =
//     {
//     {"Tesouro Selic", 1500.00, 13.25, {"Banco Federal", "Banco"},
//     {14.50, 15.20, 14.80}},
//     {"CDB Premium", 3200.50, 12.10, {"InvestMais", "Corretora"},
//     {30.10, 31.50, 29.90}},
//     {"LCI Azul", 2800.75, 10.80, {"Banco Azul", "Banco"},
//     {22.40, 21.80, 23.10}},
//     {"Fundo Alpha", 5000.00, 14.50, {"Alpha Invest", "Gestora"},
//     {48.00, 50.25, 47.90}}
// };


// float mediaAplicacoes(){
//     float soma = 0.0;
//     float media = 0.0;

//     for(int i = 0; i < 4; i++){
//         soma += Investimentos[i].valor_aplicado;
//     }

//     return media = soma / 4;
// }

// int num_tipo_instituicao(char tipo[20]){
//     int contador = 0;

//     for(int i = 0; i < 4; i++){
//         if(strcmp(tipo, Investimentos[i].instituicao.tipo) == 0){
//             contador++;
//         }
//     }
//     return contador;
// }

// int conta_investimentos_letra(char letra){
//     int contador = 0;
//     for(int i = 0; i < 4; i++){
//         if(Investimentos[i].nome[0] == letra){
//             contador++;
//         }
//     }
//     return contador;
// }

// float soma_rendimentos(char nome[30]){
//     float soma = 0.0;

//     for(int i = 0; i < 4; i++){
//         if(strcmp(nome, Investimentos[i].nome) == 0){
//             for(int k = 0; k < 4; k++){
//                 soma += Investimentos[i].rendimentos[k];
                
//             }
//             return soma;
//         }
//     }
//     return -1;
// }

// 3. Um drone de entrega inicia o trajeto com 100% de bateria. Considere o programa principal
// abaixo:
// // codigo da funcao aqui
// int main() {
//     int bateria = 100;
//     int consumo;
//     printf("Bateria inicial: %d%%\n", bateria);
//     srand(time(NULL));
//     while (bateria > 0) {
//         atualizarBateria(&bateria, &consumo);
//         printf("Consumo no trecho: %d%%\n", consumo);
//         printf("Bateria: %d%%\n", bateria);
//     }
// return 0;
// }
// Implemente a funcao atualizarBateria(...) chamada no main() para simular o consumo
// de bateria durante um trecho do voo. Nesta funcao: 
// • o consumo deve ser gerado aleatoriamente entre 10 e 35;
// • O valor da bateria do drone deve ser atualizado;
// • caso a bateria fique negativa, ela deve ser ajustada para 0

// void atualizarBateria(int *bateria, int *consumo){
//     *consumo = (rand()% 26) + 10;
//     *bateria = *bateria - *consumo;

//     if(*bateria < 0){
//         *bateria = 0;
//     }
// }

// int main(){
//     int bateria = 100;
//     int consumo;
//     printf("Bateria inicial: %d%%\n", bateria);
//     srand(time(NULL));
//     while (bateria > 0) {
//         atualizarBateria(&bateria, &consumo);
//         printf("Consumo no trecho: %d%%\n", consumo);
//         printf("Bateria: %d%%\n", bateria);
//     }
// return 0;
// }

// 4. Considere o programa abaixo:
// int main() {
//     int energia = 40;
//     int bonus = 10;
//     int *p = &energia;  // p = endereço de energia , *p = conteudo de energia(40)
//     int *q = &bonus;    // q = endereço de bonus , *q = conteudo de bonus(10)
//     *p = *p + *q;   //*p = 40 + 10 = 50
//     q = p;  // q = endereço de energia (p) ---> q = *p(50)
//     *q = *q - 15;   // q* = 50 - 15 = 35
//     bonus = bonus + 5; // bonus = 10 + 5 = 15
//     printf("energia = %d\n", energia);
//     printf("bonus = %d\n", bonus);
//     return 0;
// }

// 5. Considere o codigo: ´
// void alterar(int *x) {
//     *x = *x + 10;
// }
// int main() {
//     int a = 5;
//     alterar(a);  // ERRO: funcao deveria ser chamada por alterar(&a) para puxar o endereço da variavel.
//     printf("%d\n", a);
//     return 0;
// }
// O valor impresso sera:
// A) o programa executa normalmente, mas o valor de a permanece igual a 5.
// B) o valor de 15
// C) endereco de a
// D) erro de compilacao // Correta
// E) o valor apontado pelo ponteiro x deslocado em 10*4 bytes.

// 6. Considere o codigo: 
// int main() {
//     int x = 10;
//     int *p = &x;
//     *p = *p + 5;
//     printf("%p\n", &x); // Imprime o endereço da variavel x;
//     return 0;
// }
// O valor impresso sera:
// A) endereco de p
// B) erro de compilacao
// C) 15 
// D) endereco armazenado em p // Correta
// E) o valor apontado pelo ponteiro p deslocado em 5*4 bytes.

// 7. Sobre ponteiros em C, e incorreto afirmar que: 
// A) Uma funcao pode alterar o valor de uma variavel externa a ela se receber o endereco dessa
// variavel. 
// B) Ponteiros podem ser usados com variaveis de qualquer tipo. 
// C) Um ponteiro armazena um endereco de memoria, que pode ser obtido com o operador  &.
// D) Ponteiros podem ser modificados para apontar para diferentes enderecos.
// E) Ao utilizar um vetor como parametro de uma funcao,  e disponibilizada  a funcao uma copia do seu primeiro elemento.

//E) Incorreta. Ao passar um vetor como parâmetro para uma função em C, ele decai para um ponteiro (pointer decay) que aponta para o seu primeiro elemento, permitindo alterar o vetor original em vez de receber apenas uma cópia isolada do valor.