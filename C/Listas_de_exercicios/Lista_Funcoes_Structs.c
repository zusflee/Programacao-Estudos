//ALUNO: LEONARDO ANTUNES DE SOUZA - 26004615

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// 1. Considere a struct:
//     typedef struct {
//         char nome[30];
//         int idade;
//     } Pessoa;
//     Pessoa p = {"Marina", 21};
// Responda:
// (a) Qual expressao deve ser utilizada para acessar o campo idade de p?
// (b) Escreva um printf que imprima o nome de p.

// 2. Considere a struct:
// typedef struct {
//     char nome[30];
//     char pais[20];
//     float preco;
// } Destino;
// Complete a funcao de impressao:
// void imprimirDestino(Destino d) {
//     printf("Destino: %s\n", ____________);
//     printf("Pais: %s\n", ____________);
//     printf("Preco: %.2f\n", ____________);
// }

// 3. Considere a struct e a variavel ja preenchida:
// typedef struct Aluno{
//     char nome[30];
//     float notas[3];
// } Aluno;
// Aluno a = {"Carlos", {7.5, 8.0, 9.0}};

// Implemente a funcao:
// void imprimirNotas(struct Aluno a);
// A funcao deve imprimir o nome do aluno e as tres notas armazenadas no vetor notas

// 4. Em um sistema medico, cada paciente armazena nome, temperatura e saturacao. Considere a
// struct abaixo e complete a funcao que indica se o paciente esta em risco.
// typedef struct {
//     char nome[30];
//     float temperatura;
//     float saturacao;
// } Paciente;
// Complete:
// bool emRisco(Paciente p) {
// /* COMPLETE AQUI */
// }
// A funcao deve retornar true se a temperatura for maior ou igual a 39 ou se a saturacao for
// menor que 92. Caso contrario, deve retornar false.

// 5. Considere o vetor de livros ja preenchido:
// typedef struct {
//     char titulo[40];
//     int paginas;
//     float preco;
// } Livro;
// Livro livros[4] = {
//     {"O Hobbit", 310, 45.90},
//     {"Dom Casmurro", 256, 29.90},
//     {"1984", 328, 39.50},
//     {"O Cortico", 240, 24.90}
// };
// Implemente:
// void imprimirLivros(Livro livros[4]);
// A funcao deve percorrer o vetor e imprimir o titulo, a quantidade de paginas e o preco de todos
// os livros.

// 6. Considere o estoque ja preenchido:

// typedef struct {
//     char nome[30];
//     float preco;
//     int quantidade;
// } Produto;
// Produto estoque[5] = {
//     {"Teclado", 120.00, 4},
//     {"Mouse", 75.50, 0},
//     {"Monitor", 899.90, 2},
//     {"Webcam", 210.00, 5},
//     {"Headset", 180.00, 0}
// };
// Implemente as funcoes:
// int contarDisponiveis(Produto estoque[5]);
// void imprimirDisponiveis(Produto estoque[5]);
// • contarDisponiveis: deve retornar quantos produtos possuem quantidade > 0.
// • imprimirDisponiveis: deve imprimir somente os produtos que possuem quantidade > 0.

// 7. Um atleta possui nome e tres tempos obtidos em provas. Considere:
// typedef struct {
//     char nome[30];
//     float tempos[3];
// } Atleta;
// Atleta a = {"Bianca", {12.4, 11.9, 12.1}};
// Implemente:
// float mediaTempos(Atleta a);
// void imprimirAtleta(Atleta a);
// • mediaTempos: deve retornar a media dos tres tempos.
// • imprimirAtleta: deve imprimir o nome do atleta, os tres tempos e a media calculada

// 8. Considere uma struct utilizada para representar datas e outra utilizada para representar
// eventos:
// typedef struct Data{
//     int dia;
//     int mes;
//     int ano;
// } Data;

// typedef struct {
//     char nome[40];
//     char local[40];
//     Data data;
// } Evento;
// Evento e = {"Semana da Tecnologia", "Auditorio Central", {15, 9, 2026}};
// Implemente:
// void imprimirEvento(Evento e);
// A funcao deve imprimir o nome, o local e a data do evento no formato:
// 15/09/2026

// 9. Considere as estruturas:
// typedef struct {
//     char cidade[30];
//     char estado[3];
// } Endereco;
//     typedef struct {
//     char nome[30];
//     int idade;
// Endereco endereco;
// } Aluno;
// E o vetor ja preenchido:
// Aluno alunos[4] = {
//     {"Ana", 19, {"Campinas", "SP"}},
//     {"Bruno", 21, {"JoaoPessoa", "PB"}},
//     {"Carla", 20, {"Campinas", "SP"}},
//     {"Diego", 22, {"Natal", "RN"}}
// };
// Implemente:
// int contarCidade(Aluno alunos[4], char cidade[30]);
// void imprimirAlunosCidade(Aluno alunos[4], char cidade[30]);
// • contarCidade: deve retornar quantos alunos moram na cidade informada.
// • imprimirAlunosCidade: deve imprimir os dados dos alunos que moram na cidade infor-
// mada.

// 10. Uma agencia de turismo mantem um cadastro de 5 roteiros de viagem. Cada roteiro possui
// destino, pais, preco total, duracao em dias, quantidade de vagas e uma informacao logica
// indicando se o roteiro esta ativo.
// Crie uma struct para representar um roteiro e implemente:

// float custo_por_dia(Roteiro r);
// void classificar_roteiro(Roteiro r);
// int buscar_destino(Roteiro roteiros[5], char destino[30]);
// Cada funcao deve realizar o seguinte:
// • custo por dia: retornar o preco dividido pela duracao em dias.
// • classificar roteiro: imprimir:
// – “economico”, se o custo por dia for menor que 300;
// – “intermediario”, se for maior ou igual a 300 e menor que 700;
// – “premium”, caso contrario.
// • buscar destino: receber o vetor com os 5 roteiros e um destino; retornar 1 se o destino
// existir e 0 caso contrario.