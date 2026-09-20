//ALUNO: LEONARDO ANTUNES DE SOUZA - 26004615

#include <stdio.h>
#include <math.h>

// 1. Uma loja registra 20 vendas. Para cada venda, informe:
// • o valor total das vendas;
// • o maior valor vendido;
// • quantas vendas foram superiores a R$ 500.

// 2. Leia a idade de 25 pessoas e mostre:
// • quantas tem mais de 50 anos;
// • a media das idades;
// • a quantidade de pessoas entre 18 e 30 anos.

// 3. Leia o peso de 15 pessoas e calcule:
// • a quantidade de pessoas com peso superior a 90 kg;
// • o menor peso;
// • o maior peso.

// 4. Leia 12 temperaturas mensais e informe:
// • a media anual;
// • a menor temperatura registrada.

// 5. Leia numeros ate que seja digitado zero. Mostre:
// • a soma dos numeros;
// • a media dos numeros digitados.

// 6. Leia 10 numeros e calcule:
// • a soma dos numeros pares;
// • a soma dos numeros ımpares;
// • quantos numeros estao entre 30 e 90.

// 7. Leia 8 idades e alturas e informe:
//   • a media das alturas;
//   • a quantidade de pessoas com altura inferior a 1,60;
//   • a media das idades das pessoas com altura superior a 1,70.

//8. Uma pessoa deseja investir mensalmente ate acumular pelo menos R$ 10.000.
//Faca um programa que:
//  • leia continuamente o valor investido a cada mes;
//  • pare quando atingir o valor desejado;
//  • mostre em quantos meses isso ocorreu.

// 9. Um servico de streaming deseja analisar as avaliacoes dadas por um usurio a uma serie.
// Faca um programa que leia a nota de 10 episodios, variando de 0 a 10.
// Caso seja digitada uma nota fora desse intervalo, ela deve ser ignorada utilizando continue.
// Ao final, mostre:
//  • a media das notas validas;
//  • quantos episodios receberam nota maior ou igual a 8.

// 10. Faca um programa que verifique e mostre os numeros entre 500 e 1500 (inclusive) que, quando
// divididos por 9, produzem resto igual a 4.

// 11. Faca um programa que leia um valor n, inteiro e positivo, calcule e mostre a seguinte soma:
// S = 1 + 1/2 + 1/3 + 1/4 ... + 1/n

// 12. Um objeto e lancado verticalmente e sua altura, em metros, e calculada a cada segundo pela
// expressao:
// h = 40t − 5t2
// Faca um programa que calcule e mostre a altura do objeto para valores inteiros de tempo a partir de t = 0.
// Quando a altura calculada for menor ou igual a zero para um valor de t maior que zero, encerre o programa.

// 13. Um cinema deseja analisar a duracao, em minutos, de 15 filmes, utilizando uma tabela de faixas de duracao.
//     Faixa Duracao
//     A Ate 90 min
//     B De 91 a 120 min
//     C De 121 a 150 min
//     D Acima de 150 min
// Faca um programa que receba essas duracoes e calcule e mostre:
//     • a quantidade de filmes em cada faixa;
//     • a porcentagem de filmes da primeira e da ultima faixa, em relacao ao total.

void exercicio01(){
    int i;
    float vendas;
    int qtd_acima = 0;
    float total = 0;
    float maior = 0;

    for(i = 0; i < 20; i++){
        printf("%d. Informe o valor da venda: ", i + 1);
        scanf("%f", &vendas);

        total += vendas;

        if(vendas > maior){
            maior = vendas;
        }

        if(vendas > 500){
            qtd_acima += 1;
        }
    }
    printf("O valor total das vendas e: %.2f\n", total);
    printf("O maior valor vendido e: %.2f\n", maior);
    printf("Quantidade de vendas acima de 500 reais: %d\n",qtd_acima);

    return 0;
}

void exercicio02(){
    int i;
    int qtd_acima = 0;
    float media ;
    int idade;
    int soma_idades = 0;
    int intervalo = 0;

    for(i = 0; i < 25; i++){
        printf("%d. Informe sua idade: ", i + 1);
        scanf("%d", &idade);

        if(idade > 50){
            qtd_acima += 1;
        }

        if(idade > 17 && idade <= 30){
            intervalo += 1;
        }

        soma_idades += idade;
    }

    media = soma_idades / 25;

    printf("A quantidade de pessoas com mais de 50 anos e: %d", qtd_acima);
    printf("\nA media das idades e: %d",media);
    printf("\nA quantidade de pessoas com idade entre 18 e 30 anos e: %d", intervalo);

    return 0;
}

void exercicio03(){
    int i;
    int qtd_acima = 0;
    float peso;
    float maior = 0;
    float menor = 0;

    for(i = 0 ; i < 15; i++){
        printf("%d. Informe seu peso: ", i + 1);
        scanf("%f", &peso);

        if(peso > 90){
            qtd_acima ++;
        }

        if(peso > maior){
            maior = peso;
        }

        if(i == 0){     // Igualar os pesos para que no segundo passo do i seja possivel comparar os pesos
            maior = peso;
            menor = peso;
        } else if(peso > maior){
            maior = peso;
        } else if(peso < menor){
            menor = peso;
        }
    }
    printf("A quantidade de pessoas com peso superior a 90 kg e: %d",qtd_acima);
    printf("\nO maior peso: %.2f", maior);
    printf("\nO menor peso: %.2f", menor);

    return 0;
}

void exercicio04(){
    int i;
    float temperaturas, soma_temp;
    float media = 0;
    float menor_temp = 0;

    for(i = 0; i < 12; i++){
        printf("%d. Informe as temperatura mensais: ", i + 1);
        scanf("%f", &temperaturas);

        if(i == 0){
            menor_temp = temperaturas;
        }else if (temperaturas < menor_temp){
            menor_temp = temperaturas;
        }

        soma_temp += temperaturas;
    }

    media = (float)soma_temp / 12;

    printf("\nA media anual e: %.2f", media);
    printf("\nA menor temperatura registrada no ano foi: %.2f", menor_temp);

    return 0;
}

void exercicio05(){
    int i;
    int contador = 0;
    int soma = 0;
    int media = 0;
    while(i != 0){
        printf("Digite numeros, se deseja parar digite 0. :");
        scanf("%d", &i);
        if(i == 0){
            printf("Encerrando...");
            break;
            return 0;
        }
        soma += i;
        contador += 1;
    }
    media = soma / contador;
    printf("\nA soma dos numeros digitados e: %d", soma);
    printf("\nA media dos numeros digitados e: %d", media);
    return 0;
}

void exercicio06(){
    int i;
    int numero;
    int soma_par = 0;
    int soma_impar = 0;
    int intervalo = 0;

    for(i = 0; i < 10; i++){
        printf("%d Digite um numero: ", i + 1);
        scanf("%d", &numero);

        if(numero % 2 == 0){
            soma_par += numero;
        }
        else{
            soma_impar += numero;
        }

        if(numero > 29 && numero <= 90){
            intervalo ++;
        }
    }

    printf("\nA soma dos numeros pares e: %d", soma_par);
    printf("\nA soma dos numeros impares e: %d",soma_impar);
    printf("\nA quantidade de numeros entre 30 e 90 e: %d", intervalo);
    return 0;
}

void exercicio07(){
    int idade;
    float altura, soma_idade, soma_altura;
    float media_alturas = 0;
    int qtd_inferior = 0;
    float media_idades = 0;
    int qtd_superior = 0;

    for(int i = 0; i < 8; i++){
        printf("%d. Informe sua idade: ", i + 1);
        scanf("%d", &idade);

        printf("%d. Informe sua altura em metros: ", i + 1);
        scanf("%f", &altura);

        soma_altura += altura;

        if(altura < 1.6){
            qtd_inferior ++;
        }
        
       if(altura > 1.7){
        qtd_superior ++;
        soma_idade += idade;
       }
    }
    media_idades = soma_idade / qtd_superior ;
    
    media_alturas = soma_altura / 8;

    printf("A media das alturas: %.2f\n", media_alturas);
    printf("A quantidade de pessoas com altura inferior a 1,60: %d\n", qtd_inferior);
    printf("A media das idades das pessoas com altura superior a 1,70: %.2f\n", media_idades);
    
    return 0;
}

void exercicio08(){
    int meta = 0;
    int total_investido = 0;
    int total_meses = 0;


    while(meta < 10000){
        printf("Meta (10.000) - Informe o valor investido no mes: ");
        scanf("%d", &total_investido);

        if(meta >= 10000){
            printf("Voce atingiu a meta.\n");
            break;
            return 0;
        }
        else{
            meta += total_investido;
            total_meses ++;
        }
    }

    printf("Voce atingiu sua meta em %d meses.\n",total_meses);
    return 0;
}

void exercicio09(){
    int notas;
    int notas_validas = 0; 
    int soma_notas = 0;
    float media = 0;
    int melhores_eps = 0;

    for(int i = 0; i < 10; i ++){
        printf("%d. Avalie com uma nota de 0 a 10 o episodio assistido: ", i + 1);
        scanf("%d", &notas);

        if(notas < 0 || notas > 10){
            continue;
        }
        else{
            notas_validas ++;
        }
        
        soma_notas += notas;

        if(notas >= 8){
            melhores_eps ++; 
        }
    }

    media = (float)soma_notas / notas_validas;

    printf("A media das avaliacoes foi: %.2f\n", media);
    printf("O numero de exercicios que receberam nota maior ou igual a 8 foi: %d\n",melhores_eps);

    return 0;
}

void exercicio10(){
    for(int i = 500; i <= 1500; i++){
        if(i % 9 == 4){
            printf("%d\n", i);
        }
    }

    // for(int i = 508; i <= 1500; i += 9){       // Acha o primeiro numero e soma + 9.
    //     if(i % 9 == 4){
    //         printf("%d\n", i);
    //     }
    // }
}

void exercicio11(){
    int n = 0;
    float soma = 0.0;

    printf("1. Informe o valor de n (denominador) da fracao: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i ++){
        soma += 1.0 / i;
    }
    printf("O resultado da soma e: %.2f\n",soma);

    return 0;
}

void exercicio12(){
    int tempo = 0;
    int altura = 0;

    altura = 40 * tempo - 5 * (tempo * tempo);
    printf("Tempo: %ds | Altura: %dm\n", tempo, altura);

    tempo++;
    altura = 40 * tempo - 5 * (tempo * tempo);

    while (altura > 0) {
        printf("Tempo: %ds | Altura: %dm\n", tempo, altura);
        tempo++;
        altura = 40 * tempo - 5 * (tempo * tempo);
    }

    printf("Tempo: %ds | Altura: %dm\n", tempo, altura);
    printf("Encerrando programa.\n");

    return 0;
}

void exercicio13(){
    int minutos;
    int qtd_A = 0;
    int qtd_B = 0;
    int qtd_C = 0;
    int qtd_D = 0;
    int total = 15;
    float porcentagem = 0.0;

    for(int i = 0; i < 15; i++){
        printf("%d. Informe a duracao total do filme (%d): ", i + 1, i + 1);
        scanf("%d", &minutos);

        if(minutos <= 90){
            qtd_A ++;
        }
        else if(minutos <= 120){
            qtd_B ++;
        }
        else if(minutos <= 150){
            qtd_C ++;
        }
        else{
            qtd_D ++;
        }
    }
    
    porcentagem =  ((float)(qtd_A + qtd_D) / total) * 100;

    printf("Quantidade de filmes em cada faixa A(%d), B(%d), C(%d), D(%d).\n", qtd_A, qtd_B,qtd_C,qtd_D);
    printf("Porcentagem de filmes da primeira e da ultima faixa, em relacao ao total (%.2f%%)\n", porcentagem);

    return 0;
}

int main() {

    int op;

    do {
        printf("\nLista 02 - Operadores Condicionais.\n");
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
            case 9: exercicio09(); break;
            case 10: exercicio10(); break;
            case 11: exercicio11(); break;
            case 12: exercicio12(); break;
            case 13: exercicio13(); break;

            default: printf("\nOpcao invalida!\n"); break;
        }
    } while (op != 0);

    return 0;
}