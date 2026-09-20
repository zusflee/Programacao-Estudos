// ALUNO: LEONARDO ANTUNES DE SOUZA - 26004615

#include <stdio.h>
#include <math.h>

// 1. Uma empresa concede um bonus anual aos funcionarios de acordo com o valor do salario:
// • salario de ate R$ 2000, 00: bonus de 20%;
// • salario maior que R$ 2000, 00 e ate R$ 5000, 00: bonus de 10%;
// • salario acima de R$ 5000, 00: bonus de 5%.
// Faca um programa que leia o salario de um funcionario e calcule o valor do bonus.
// Ao final, imprima:
// • o valor do bonus recebido;
// • o salario final, considerando o bonus.

// 2. Faca um programa que leia tres valores, A, B e C, representando os lados de um possıvel triangulo.
// Para que os tres valores formem um triangulo, as seguintes condicoes devem ser satisfeitas:
// A < B + C, B < A + C, C < A + B

// Verifique se os valores formam um triangulo. Caso formem, classifique-o como:
// • Equilatero: os tres lados sao iguais;
// • Isosceles: apenas dois lados sao iguais;
// • Escaleno: os tres lados sao diferentes.
// Caso os valores nao formem um triangulo, imprima NAO FORMA TRIANGULO.

// 3. Faca um programa que leia o codigo de um produto, representado por um numero inteiro de 1 a 12 e classifique quanto a sua categoria:
// • codigos de 1 a 4: ALIMENTICIO;
// • codigos de 5 a 8: LIMPEZA;
// • codigos de 9 a 12: ELETRONICO.

// 4. Faca um programa que leia a idade de uma pessoa e classifique-a em uma das categorias abaixo:
// • ate 12 anos: CRIANCA;
// • de 13 a 17 anos: ADOLESCENTE;
// • de 18 a 59 anos: ADULTO;
// • 60 anos ou mais: IDOSO.
// Ao final, imprima a classificacao correspondente.

// 5. Em uma loja, os produtos sao classificados em tres categorias:
// • 1 – Basico;
// • 2 – Premium;
// • 3 – Luxo.
// Faca um programa que leia o preco e a categoria de um produto. Se o preco for menor ou
// igual a 100.00, aplique o seguinte aumento:
// • categoria 1: aumento de 5
// • categoria 2: aumento de 8
// • categoria 3: aumento de 10
// Se o preco for maior que 100.00, aplique:
// • categoria 1: aumento de 12
// • categoria 2: aumento de 15
// • categoria 3: aumento de 20
// Calcule e imprima o novo preco do produto. Caso a categoria informada seja diferente de 1, 2 ou 3, imprima CATEGORIA INVALIDA.

// 6. Faca um programa que leia um ano verifique se ele e bissexto.
// Um ano e bissexto quando:
// • e divisivel por 400; ou
// • e divisivel por 4 e nao e divisivel por 100.
// Ao final, imprima:
// • ANO BISSEXTO, caso a condicao seja satisfeita;
// • ANO NAO BISSEXTO, caso contrario.

// 7. Faca um programa que leia um numero inteiro e informe:
// • se o numero e PAR ou IMPAR;
// • se o numero e POSITIVO, NEGATIVO ou ZERO.
// Ao final, imprima as duas classificacoes do numero.

// 8. Considere o trecho:
// switch (x) {
// case 1: printf("A");            //Não possui o break, então imprime AB.
// case 2: printf("B"); break;
// default: printf("C");
// }
// Se x = 1, o que sera impresso?
// A) A  
// B) AB // Corrta
// C) B
// D) C

// 9. Em uma lanchonete, o cliente escolhe um tipo de lanche:
// • 1 – Hamburguer
// • 2 – Pizza
// • 3 – Salada
// Faca um programa que leia a opcao escolhida e a idade do cliente. Utilize switch case para
// identificar o lanche escolhido. Se o cliente tiver menos de 12 anos ou mais de 60 anos, ele
// recebe desconto. Utilize o operador ternario (?:) para imprimir:
// • COM DESCONTO, caso tenha direito;
// • SEM DESCONTO, caso contrario.
// Caso a opcao escolhida nao seja 1, 2 ou 3, imprima OPCAO INVALIDA.

// 10. Em uma sessao de cinema, um sistema verifica se um filme esta disponivel para exibicao.
// Faca um programa que leia a duracao do filme e a quantidade de ingressos vendidos.
// O filme sera exibido se tiver duracao menor ou igual a 180 minutos e pelo menos 10 ingressos vendidos.
// Utilize if/else para imprimir:
// • SESSAO CONFIRMADA, se as duas condicoes forem satisfeitas;
// • SESSAO CANCELADA, caso contrario.
// Depois, utilize o operador ternario (?:) para imprimir:
// • SESSAO CHEIA, se forem vendidos 100 ingressos ou mais;
// • AINDA HA VAGAS, caso contrario.

// 11. Em Hogwarts, um aluno precisa preparar uma pocao corretamente.
// Faca um programa que leia a quantidade de ingredientes utilizados e o valor da temperatura da pocao.
// A pocao funciona se forem utilizados entre 3 e 6 ingredientes e a temperatura estiver abaixo de 100 graus.
// Utilize if/else para imprimir:

// • POCAO PREPARADA, se as condicoes forem satisfeitas;
// • POCAO FALHOU, caso contrario.
// Depois, utilize o operador ternario (?:) para imprimir:
// • TEMPERATURA SEGURA, se a temperatura for menor que 80;
// • CUIDADO COM A TEMPERATURA, caso contrario.

// 12. Em Hogwarts, o Chapeu Seletor deve indicar a casa de um novo aluno.
// Faca um programa que leia um numero inteiro de 1 a 4 e utilize switch case para mostrar a
// casa correspondente:
// • 1 – GRIFINORIA
// • 2 – SONSERINA
// • 3 – CORVINAL
// • 4 – LUFA-LUFA
// Depois, leia a quantidade de pontos do aluno e verifique:
// • se os pontos forem maiores ou iguais a 50, imprima DESTAQUE DA CASA;
// • caso contrario, imprima ALUNO REGULAR.

// 13. Quando uma carga muito grande e aplicada a um pilar de um edificio, ele pode perder a
// estabilidade. Para estimar o limite que ele suporta, pode-se calcular a carga critica (Pcr):
// Pcr =π^2 * E * I/ L^2 (1)
// Para uma coluna circular, o valor de (I) e dado por:
// I = π * d^4 / 64 (2)
// Faca um programa que leia:
// • o valor de E (Módulo de elasticidade longitudinal do material);
// • o diametro d;
// • o comprimento L;
// • a carga aplicada P.
// Calcule (I) e (Pcr). Depois, imprima:
// • COLUNA SEGURA, se (P < Pcr);
// • RISCO DE INSTABILIDADE, caso contrario.
// Ao final, imprima tambem o valor calculado de (Pcr). Caso necessario, utilize a biblioteca math.h.
// Considere π = 3.14159.

void exercicio01(){
    float salario, bonus, novo_salario;

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    if(salario <= 2000){
        bonus = salario * 0.2;
        novo_salario = salario + bonus;
        printf("De acordo com o seu salario o bonus que voce ira receber e (%.2f) e o seu salario com esse bonus sera: %.2f",bonus, novo_salario);
    }
    else if(salario > 2000 && salario <= 5000){
        bonus = salario * 0.1;
        novo_salario = salario + bonus;
        printf("De acordo com o seu salario o bonus que voce ira receber e (%.2f) e o seu salario com esse bonus sera: %.2f",bonus, novo_salario);
    }
    else{
        bonus = salario * 0.05;
        novo_salario = salario + bonus;
        printf("De acordo com o seu salario o bonus que voce ira receber e (%.2f) e o seu salario com esse bonus sera: %.2f",bonus, novo_salario);
    }
}

void exercicio02(){
    int A, B, C;

    printf("Digite o valor do lado A: ");
    scanf("%d", &A);
    printf("Digite o valor do lado B: ");
    scanf("%d", &B);
    printf("Digite o valor do lado C: ");
    scanf("%d", &C);

    if(A < B + C && B < A + C && C < A + B){
        if (A == B && A == C && B == C){
            printf("Triangulo Equilatero");
        }
        else if(A == B && A == C || B == C || B == A){
            printf("Triangulo Isosceles");
        }
        else{
            printf("Triangulo Escaleno");
        }
    }
    else{
        printf("NAO FORMA TRIANGULO");
    }
}

void exercicio03(){
    int codigo;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    if(codigo > 0 && codigo <= 4){
        printf("Seu codigo pertence a categoria de produtos alimenticios.");
    }
    else if(codigo > 4 && codigo <= 8){
        printf("Seu codigo pertence a categoria de produtos de limpeza.");
    }
    else if(codigo > 8 && codigo <= 12){
        printf("Seu codigo pertence a categoria de produtos eletronicos.");
    }
    else{
        printf("Erro.");
    }
}

void exercicio04(){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade > 0 && idade <= 12){
        printf("CRIANCA");
    }
    else if(idade > 12 && idade <= 17){
        printf("ADOLESCENTE");
    }
    else if(idade > 17 && idade <= 59){
        printf("ADULTO");
    }
    else if(idade > 59){
        printf("IDOSO");
    }
    else{
        printf("Erro");
    }
}

void exercicio05(){
    int categoria;
    float preco, novo_preco;

    printf("Informe a categoria do produto \n1.Basico:\n2.Premium:\n3.Luxo:\n");
    scanf("%d", &categoria);

    printf("Informe o preco do produto: ");
    scanf("%f", &preco);

    if(preco <= 100){
        if (categoria == 1){
            novo_preco = preco + 5;
            printf("O novo preco do produto e: %.2f", novo_preco);
        }
        else if(categoria == 2){
            novo_preco = preco + 8;
            printf("O novo preco do produto e: %.2f", novo_preco);
        }
        else if(categoria == 3){
            novo_preco = preco + 10;
            printf("O novo preco do produto e: %.2f", novo_preco);
        }
        else{
            printf("Categoria invalida");
        }
    }
    if(preco > 100){
        if (categoria == 1){
            novo_preco = preco + 12;
            printf("O novo preco do produto e: %.2f", novo_preco);
        }
        else if(categoria == 2){
            novo_preco = preco + 15;
            printf("O novo preco do produto e: %.2f", novo_preco);
        }
        else if(categoria == 3){
            novo_preco = preco + 20;
            printf("O novo preco do produto e: %.2f", novo_preco);
        }
        else{
            printf("Categoria invalida");
        }
    }
}

void exercicio06(){
    int ano;

    printf("Verifique se um ano e bissexto: ");
    scanf("%d", &ano);

    if(ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0){
        printf("O ano %d e BISESXTO", ano);
    }
    else{
        printf("O ano %d nao e BISESXTO", ano);
    }
}

void exercicio07(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    if(numero % 2 == 0){
        printf("\n O numero %d e par.", numero);
    }
    else{
        printf("\n O numero %d e impar.", numero);
    }
    
    if(numero > 0){
        printf("\n O numero %d e positivo.",numero);
    }
    else if(numero < 0){
        printf("\n O numero %d e negativo.", numero);
    }
    else{
        printf("\n O numero %d e zero .", numero);
    }
}

void exercicio08(){
    printf("Questao de teste de mesa.");
}

void exercicio09(){
    int idade, opcoes;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    printf("Escolha o lanche (1- Hamburguer, 2- Pizza, 3- Salada): ");
    scanf("%d", &opcoes);

    switch (opcoes)
    {
    case 1:
        printf("1- Hamburguer\n");
        break;
    case 2:
        printf("2- Pizza\n");
        break;
    case 3:
        printf("3- Salada\n");
        break;
    default:
        printf("Opcao invalida");
        break;
    }

    printf("%s\n",(idade < 12 || idade > 60) ? "Com desconto" : "Sem desconto");
}

void exercicio10(){
    int tempo, quantidade;

    printf("Informe a duracao do filme em minutos: ");
    scanf("%d", &tempo);

    printf("Informe o numero de ingressos vendidos: ");
    scanf("%d", &quantidade);

    if(tempo <= 180 && quantidade >= 10){
        printf("SESSAO CONFIRMADA\n");
    }
    else{
        printf("SESSAO CANCELADA\n");
    }

    printf("%s\n",(quantidade >= 100) ? "SESSAO CHEIA" : "AINDA HA VAGAS");
}

void exercicio11(){
    int quantidade, temperatura;

    printf("Informe a quantidade de ingredientes presentes na pocao: ");
    scanf("%d", &quantidade);
    printf("Informe a temperatura da pocao: ");
    scanf("%d", &temperatura);

    if(quantidade > 2 && quantidade <= 6 && temperatura < 100){
        printf("POCAO PREPARADA\n");
    }
    else{
        printf("POCAO FALHOU");
    }

    printf("%s\n",(temperatura < 80) ? "TEMPERATURA SEGURA" : "CUIDADO COM A TEMPERATURA");
}

void exercicio12(){
    int pontos, opcoes;

    printf("Digite a opcao correspondente a sua casa 1- GRIFINORIA, 2- SONSERINA, 3- CORVINAL, 4- LUFA-LUFA: ");
    scanf("%d", &opcoes);

    switch(opcoes)
    {
        case 1:
            printf("1- GRIFINORIA\n");
            break;
        case 2:
            printf("2- SONSERINA\n");
            break;
        case 3:
            printf("3- CORVINAL\n");
            break;
        case 4:
            printf("4- LUFA-LUFA\n");
            break;
        default:
            printf("Opcao invalida\n");
    }

    printf("Informe a sua quantidade de pontos: ");
    scanf("%d", &pontos);

    if(pontos >= 50){
        printf("DESTAQUE DA CASA\n");
    }
    else{
        printf("ALUNO REGULAR");
    }
}

void exercicio13(){
    float E, d, L, P, I, Pcr;
    float pi = 3.14159;

    printf("Informe o modulo de elasticidade do material (E): ");
    scanf("%f", &E);

    printf("Informe o diametro do material (d): ");
    scanf("%f", &d);

    printf("Informe o comprimento do material (L): ");
    scanf("%f", &L);

    printf("Informe a carga aplicada no material (P): ");
    scanf("%f", &P);

    I = (pi * pow(d, 4)) / 64;
    printf("O Menor momento de inercia da secao transversal da peca e: %.2f\n", I);

    Pcr = (pow(pi, 2) * E * I) / pow(L, 2);
    printf("Carga critica de Euler e: %.2f\n", Pcr);

    if(P < Pcr){
        printf("Coluna Segura.\n");
    }
    else{
        printf("Risco de instabilidade.\n");
    }
}

int main() {

    int op;

    do {
        printf("\nLista 03 - Operadores Condicionais e Switch Case.\n");
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