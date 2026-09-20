//ALUNO: LEONARDO ANTUNES DE SOUZA - 26004615

#include <stdio.h>
#include <math.h>

//1) Leia duas variaveis do tipo float. Calcule e imprima, considerando 2 casas decimais:
// • a soma;
// • o produto entre os valores.

//2) Leia duas variaveis do tipo float:
// • uma representando a distancia percorrida (em km);
// • outra representando o tempo gasto (em horas).
// Calcule e imprima considerando 1 casa decimal a velocidade m´edia do percurso em (km/h) e
// em (m/s).
// Dica: v=d/t e 1 m/s = 3,6 km/h.

//3)Leia tres variaveis do tipo float representando notas de um aluno, considerando peso 1, 2 e
// 3, respectivamente. Calcule a media ponderada e imprima o resultado considerando 2 casas decimais.
// media = (n1 * 1 + n2 * 2 + n3 * 3) / 6 

//4)Leia uma temperatura em celsius. Calcule a temperatura correspondente em Fahrenheit
// utilizando a formula:
// F = 9/5 * C + 32
// Imprima o resultado na tela, considerando 2 casas decimais.
// Dica: utilize valores decimais na divisao para garantir o calculo correto.

//5) Leia a base e a altura de um retangulo. Calcule e imprima, considerando 2 casas decimais:
// area = base × altura
// perımetro = 2 × (base + altura)

//6) Leia o dividendo e divisor de uma fracao. Calcule e imprima:
// • o quociente da divisao inteira;
// • o resto da divisao.

//7) Leia uma variavel inteira representando um tempo total em segundos. Calcule e imprima,
// considerando 2 casas decimais:
// • a quantidade de minutos;
// • os segundos restantes.

//8) Leia duas variaveis inteiras:
// • valor pago pelo cliente;
// • valor do produto.
// Calcule o troco e determine a quantidade de:
// • notas de 50;
// • notas de 20;
// • notas de 10;
// • notas de 5;
// • notas de 2;
// • moedas de 1.
// Restricao: utilize apenas operacoes aritmeticas (/ e %), sem estruturas condicionais(if, else).
// Dica: apos calcular cada quantidade de notas, atualize o valor restante do troco.

void exercicio01() 
{
    float a, b, soma, produto;
    printf("Digite um numero: ");
    scanf("%f", &a);
    printf("Digite outro numero: ");
    scanf("%f", &b);
    soma = a + b;
    produto = a * b;
    printf("Soma (%.2f)\nProduto (%.2f)", soma, produto);
    return;
}

void exercicio02() 
{
    float distancia, tempo, velocidade_media;

    printf("Informe a distancia percorrida (em km): ");
    scanf("%f", &distancia);
    printf("Informe o tempo gasto (em horas): ");
    scanf("%f", &tempo);

    velocidade_media = distancia / tempo;

    printf("A velocidade media do percurso em (km/h) %.1f e em (m/s) %.1f.", velocidade_media, velocidade_media / 3.6);
    return;
}

void exercicio03() 
{
    float n1, n2, n3, media;
    
    printf("Digite sua primeira nota: ");
    scanf("%f", &n1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &n2);
    printf("Digite sua terceira nota: ");
    scanf("%f", &n3);

    media = (n1 * 1 + n2 * 2 + n3 * 3) / 6;

    printf("A media ponderada da suas notas e: %.2f \n", media);
    return;
}
void exercicio04() 
{
    int celsius, fahrenheit;

    printf("Digite a temperatura em celsius: ");
    scanf("%d", &celsius);

    fahrenheit = 9/5 * celsius + 32;

    printf("Convertendo-se a temperatura em Celsius para Fahrenheit %d ",fahrenheit);
    return;
    
}
void exercicio05() 
{
    float base, altura, area, perimetro;
    
    printf("Digite a base do retangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);

    area = base * altura;
    perimetro = 2 * (base + altura);

    printf("A area do triangulo e %.2f e o perimetro do retangulo e %.2f", area, perimetro);
}
void exercicio06() 
{
    int dividendo, divisor, quociente, resto;

    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);
    printf("Digite o divisor: ");
    scanf("%d", &divisor);

    quociente = dividendo / divisor;
    resto = dividendo % divisor;

    printf("O quociente da divisao inteira e %d e o resto da divisao e %d",quociente, resto);
    return;
}
void exercicio07() 
{
    int total,minutos, resto;
    
    printf("Digite o tempo total em segundos: ");
    scanf("%d", &total);

    minutos = total / 60;
    resto = total % 60;

    printf("A quantidade de minutos (%d) e os segundos restantes (%d) ", minutos, resto);
    return;
}
void exercicio08() 
{
    int cliente, produto, troco, resto;

    printf("Digite o valor do produto: ");
    scanf("%d", &produto);

    printf("Informe a quantia que ira pagar: ");
    scanf("%d", &cliente);

    troco = cliente - produto;

    //Notas de 50
    resto = troco / 50;
    troco = troco % 50;
    printf("Seu troco possui %d notas de 50 \n", troco);
    //Notas de 20
    resto = troco / 20;
    troco = troco % 20;
    printf("Seu troco possui %d notas de 20 \n", troco);
    //Notas de 10
    resto = troco / 10;
    troco = troco % 10;
    printf("Seu troco possui %d notas de 10 \n", troco);
    //Notas de 5
    resto = troco / 5;
    troco = troco % 5;
    printf("Seu troco possui %d notas de 5 \n", troco);
    //Notas de 2
    resto = troco / 2;
    troco = troco % 2;
    printf("Seu troco possui %d notas de 2 \n", troco);
    //Moedas de 1
    resto = troco / 1;
    troco = troco / 1;
    
    printf("Seu troco possui %d moedas de 1 \n", troco);

    return 0;

}

int main() {

    int op;

    do {
        printf("\nLista 01 - Operadores Logicos.\n");
        printf("\nEscolha o numero do exercicio: ");
        scanf("%d", &op);

        switch (op) {
            case 1: exercicio01(); break;
            case 2: exercicio02(); break;
            case 3: exercicio03(); break;
            case 4: exercicio04(); break;
            case 5: exercicio05(); break;
            case 6: exercicio06(); break;
            case 7: exercicio07(); break;
            case 8: exercicio08(); break;

            default: printf("\nOpção inválida!\n"); break;
        }
    } while (op != 0);

    return 0;
}