//ALUNO: LEONARDO ANTUNES DE SOUZA - 26004615

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// 1. Considere:
//  bool aprovado(float media, int faltas) {
//      return media >= 7 && faltas <= 10;  
//  }
// Para media = 8.0 e faltas = 12, o retorno sera:
// A) true
// B) false  // Correta
// C) 8
// D) 12

// 2. Uma locadora de bicicletas cobra um valor de acordo com a quantidade de horas de uso.
// Implemente a funcao:
//     float calcularValor(float precoHora, int horas);
// A funcao deve receber o preco por hora e a quantidade de horas utilizadas e retornar o valor total do aluguel, que e calculado como precoHora * horas. No programa principal, leia os dois valores, chame a funcao e mostre o valor calculado.


// float calcularValor(float precoHora, int horas){
//     float total_aluguel;

//     total_aluguel = (float)precoHora * horas;

//     return total_aluguel;
// }

// int main(){
//     int horas_;
//     float precoHora_;

//     printf("Informe as horas totais: ");
//     scanf("%d", &horas_);

//     printf("Informe o preco por hora: ");
//     scanf("%f", &precoHora_);

//     float aluguel;

//     aluguel = calcularValor(precoHora_, horas_);

//     printf("Valor final: %.2f\n", aluguel);

//     return 0;
// }


// 3. Considere o programa:
//     void aumentarNivel(int nivel) {
//         nivel += 2;
//     }
//     int main() {
//         int nivel = 5;
//         aumentarNivel(nivel);
//         printf("%d\n", nivel);
//         return 0;
//     }

// Responda:
// • Qual valor sera mostrado na tela?  // 5 
// • Por que a variavel nivel declarada em main nao e alterada pela funcao? // Ao chamar aumentarNivel(nivel), o valor 5 e copiado para o parametro local nivel da
//      funcao. A alteracao feita dentro da funcao ocorre somente nessa copia.
// Faca um teste de mesa acompanhando o valor de nivel no programa principal e dentro da
// funcao.

// 4. Escreva apenas o trecho faltante:
// int contarMaioresQue(float v[5], float limite) {
//     int cont = 0;
//     for (int i = 0; i < 5; i++) {
//         if(v[i] > 5){
//             cont ++;
//         }
//     }
//     return cont;
// }
// A funcao deve contar quantos valores do vetor v[5] sao estritamente maiores que limite.
// Faca um teste de mesa para informar o retorno da funcao considerando como entrada:  // cont = 2
// float v[5] = {3.5, 8.0, 2.0, 9.5, 5.0};
// float limite = 5.0;

// 5. Uma empresa de entregas atribui um codigo ao tipo de envio:
//     • codigo 1: entrega comum, taxa de R$ 8,00;
//     • codigo 2: entrega rapida, taxa de R$ 15,00;
//     • codigo 3: entrega expressa, taxa de R$ 25,00.
// Implemente a funcao:
// float taxaEntrega(int codigo);
// Para qualquer codigo diferente de 1, 2 ou 3, a funcao deve retornar -1.

// float taxaEntrega(int codigo){
//     if(codigo == 1){
//         return 8.0;
//     }
//     else if(codigo == 2){
//         return 15.0;
//     }
//     else if(codigo == 3){
//         return 25.0;
//     }
//     else{
//         printf("Codigo invalido\n");
//         return -1;
//     }
// }

// int main(){
//     int codigo;
//     float taxa;

//     printf("Informe o codigo do pedido: ");
//     scanf("%d", &codigo);

//     taxa = taxaEntrega(codigo);

//     printf("O valor da taxa e: %.2f\n", taxa);

//     return 0;
// }

// 6. Um sistema de estacionamento utiliza a seguinte funcao para verificar se um veiculo pode sair:
//     void podeSair(int pagamento, int ticketValidado){
//         if (pagamento == 1 && ticketValidado == 1){
//             return 1;
//         }  
//         else{
//             return 0;
//         }
        
//     }
// O programador deseja que a funcao retorne 1 quando o estacionamento estiver pago e o ticket
// estiver validado, e 0 caso contrario.
// Entretanto, existe um erro.

// • Identifique o erro. // A função não deveria ser declarada como void.
// • Explique por que o tipo de retorno utilizado e inadequado. // Não se utiliza return em funções void, pois elas nao retornam valores.
// • Reescreva corretamente o cabecalho da funcao. 
//     void podeSair(int pagamento, int ticketValidado){
//         if (pagamento == 1 && ticketValidado == 1){
//             return 1;
//         }  
//         else{
//             return 0;
//     }

// 7. Um aplicativo de trilhas informa se o usuario atingiu sua meta diaria de passos. Implemente a funcao:
//     int atingiuMeta(int passos, int meta);
// Utilize o operador ternario para retornar:
//     • 1, se passos for maior ou igual a meta;
//     • 0, caso contrario.

// int atingiuMeta(int passos, int meta){
//     int verificar = (passos >= meta) ? 1 : 0;
// }

// int main(){
//     int meta,passos;
//     int verificar;

//     printf("Informe sua meta de passos diaria: ");
//     scanf("%d", &meta);
//     printf("Informe sua quantidade de passos no dia: ");
//     scanf("%d", &passos);

//     verificar = atingiuMeta(passos, meta);

//     printf("Passos maior ou igual a meta ?: %d\n",verificar);

//     return 0;
// }

// 8. Em um laboratorio de Biologia, as populaçoes de bacterias observadas durante 3 dias em 4 amostras foram armazenadas em uma matriz int pop[4][3]. 
// Cada linha representa uma amostra, e cada coluna representa um dia de observacao.
// Implemente a funcao:
//     int somaAmostra(int pop[4][3], int linha);
// A funcao deve receber a matriz e o indice de uma linha e retornar a soma dos 3 valores daquela amostra (linha). Faca um teste de mesa para mostrar o retorno da funcao considerando a
// amostra da linha 2 (terceira linha) da matriz:

// int pop[4][3] = {
// {10, 12, 15},
// {8, 9, 11},
// {20, 25, 30},
// {7, 10, 13}
// };

// int somaAmostra(int pop[4][3], int linha){
//     int somar_linha = 0;

//     for(int j = 0; j < 3; j++){
//         somar_linha += pop[linha][j];
//     }
//     return somar_linha;
// }

// int main(){
//     int pop[4][3] = {
//         {10, 12, 15},
//         {8, 9, 11},
//         {20, 25, 30},
//         {7, 10, 13}
//     };

//     int linha, soma_linha;

//     printf("Informe a linha que deseja somar. (0), (1), (2), (3): ");
//     scanf("%d", &linha);

//     soma_linha = somaAmostra(pop, linha);


//     printf("A soma dos elementos da linha %d e: %d\n", linha, soma_linha);
//     return 0;

// }

// linha = 2 >> somar_linha = 20 + 25 + 30 >> 75

// 9. Uma estacao meteorologica armazenou as temperaturas registradas durante 7 dias em um vetor.
// Implemente a funcao:
// float mediaTemperaturas(float temperaturas[7]);
// A funcao deve calcular e retornar a media das sete temperaturas.
// Em seguida, implemente:
// int diasAcimaDaMedia(float temperaturas[7], float media);
// A segunda funcao deve retornar quantos dias tiveram temperatura estritamente maior que a media calculada.
// Faca um teste de mesa para mostrar o retorno da funcao diasAcimaDaMedia considerando a
// media calculada para o vetor:

// float temperaturas[7] = {
// 22.0, 25.0, 24.0, 28.0, 21.0, 26.0, 29.0
// };

// float mediaTemperaturas(float temperaturas[7]){
//     float soma_temps = 0.0;
//     float media = 0.0;

//     for(int i = 0; i < 7; i++){
//         soma_temps += temperaturas[i];
//     }
//     media = soma_temps / 7;
//     return media;
// }

// int diasAcimaDaMedia(float temperaturas[7], float media){
//     int dias_acima = 0;
//     float media_temp;

//     for(int i = 0; i < 7; i++){
//         if(temperaturas[i] > media){
//             dias_acima++;
//         }
//     }
//     return dias_acima;
// }

// int main(){
//     float temperaturas[7] = {22.0, 25.0, 24.0, 28.0, 21.0, 26.0, 29.0};
//     float media_temp;
//     int dias_acima;

//     media_temp = mediaTemperaturas(temperaturas);
//     dias_acima = diasAcimaDaMedia(temperaturas, media_temp);

//     printf("A media de temperaturas nos 7 dias foi: %.2f\n", media_temp);
//     printf("A quantidade de dias com temperatura registrada superior a media dos 7 dias foi: %d\n",dias_acima);

//     return 0;
// }

// 10. Uma plataforma registra avaliacoes de um jogo em um vetor. Algumas posicoes podem possuir
// o valor -1, indicando que aquela avaliacao foi cancelada.
// Implemente a funcao:
// float mediaAvaliacoes(float notas[6]);
// A funcao deve calcular e retornar a media considerando apenas as avaliacoes validas. Valores
// iguais a -1 nao devem participar nem da soma nem da quantidade utilizada no calculo da media.
// Considere que havera pelo menos uma avaliacao valida.

// float mediaAvaliacoes(float notas[6]){
//     float soma_notas = 0.0;
//     float qtd_valida = 0.0;
//     float media = 0.0;

//     for(int i = 0; i < 6; i++){
//         if(notas[i] < 0 ){
//             continue;
//         }
//         else{
//             soma_notas += notas[i];
//             qtd_valida ++;
//         }
//     }

//     media = soma_notas / qtd_valida;
//     return media;
// }

// int main(){
//     float notas[6];
//     float media = 0.0;

//     for(int i = 0; i < 6; i++){
//         printf("Informe as notas das provas: ");
//         scanf("%f", &notas[i]);
//     }

//     media = mediaAvaliacoes(notas);

//     printf("A media das provas validas foi: %.2f\n", media);

//     return 0;
// }

// 11. Uma central de atendimento deseja analisar uma mensagem curta digitada pelo usuario.
// Implemente a funcao:
// int contarVogais(char texto[100]);
// A funcao deve percorrer a string e retornar a quantidade de vogais encontradas. Considere
// tanto letras maiusculas quanto minusculas


// int contarVogais(char texto[100]){
//     int contador = 0;
//     int tamanho = strlen(texto);

//     for(int i = 0; i < tamanho; i++){
//         if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u' ||
//             texto[i] == 'A' || texto[i] == 'E' || texto[i] == 'I' || texto[i] == 'O' || texto[i] == 'U'){
//             contador++;
//         }
//     }
//     return contador;
// }

// int main(){
//     int contador = 0;
//     char texto[100];

//     printf("Digite uma palavra: ");
//     fgets(texto, sizeof(texto), stdin);

//     contador = contarVogais(texto);

//     printf("O numero de vogais presente na palavra '%s' e: %d",texto, contador);

//     return 0;

// }

// 12. Considere a funcao:
// int maiorValor(int v[5]) {
//     int maior = 0;
//     for (int i = 0; i < 5; i++) {
//         if (v[i] > maior)                  
//              maior = v[i];
//     }
//     return maior;
// }
// Um programador afirma que a funcao encontra corretamente o maior valor de qualquer vetor
// de 5 numeros inteiros. Explique o motivo da afirmacao nao estar corrreta e reescreva a funcao
// para que funcione corretamente. Faca um teste de mesa com o vetor:
// int v[5] = {-8, -3, -12, -5, -10};
// Compare o resultado obtido antes e depois da correcao.

// for(int i = 0; i < 5; i++){
//     if(i == 0){
//         maior = v[i];               //Corrigido
//     }
//     else if(v[i] > maior){
//         maior = v[i];
//     }
// }

// 13. Um treinador quer simular a pontuacao de um atleta em 5 tentativas de arremesso. Cada
// tentativa deve receber uma pontuacao aleatoria entre 0 e 10.
// Implemente as funcoes:
// void gerarPontuacoes(int pontuacoes[5]);
// int maiorPontuacao(int pontuacoes[5]);
// Cada funcao deve fazer o seguinte:

// • gerarPontuacoes: recebe o vetor de 5 posicoes e preenche cada posicao com um numero
// aleatorio entre 0 e 10 usando rand().
// • maiorPontuacao: recebe o vetor preenchido e retorna a maior pontuacao encontrada.
// No programa principal, considere que a semente ja foi inicializada com:
// srand(time(NULL));
// Depois de gerar as pontuacoes, mostre todas elas e a maior pontuacao obtida.

// void gerarPontuacoes(int pontuacoes[5]){
//     for(int i = 0; i < 5; i++){
//         pontuacoes[i] = rand()%11;
//     }
// }
// int maiorPontuacao(int pontuacoes[5]){
//     int maior = 0;
//     for(int i = 0; i < 5; i++){
//         if(i == 0){
//             maior = pontuacoes[i];
//         }
//         else if(pontuacoes[i] > maior){
//             maior = pontuacoes[i];
//         }
//     }
//     return maior;
// }
// int main(){
//     int pontuacoes[5];
//     int maior = 0;

//     gerarPontuacoes(pontuacoes);
//     maior = maiorPontuacao(pontuacoes);

//     printf("Listando todas as pontuacoes: ");
//     for(int i = 0; i < 5; i++){
//         printf("%d ", pontuacoes[i]);
//     }
//     printf("\n");
//     printf("A maior pontuacao foi: %d\n", maior);
    
//     return 0;
// }

// 14. Um parque de diversoes utiliza a funcao abaixo para calcular o preco de um ingresso, considerando a idade do visitante e se ele e estudante (1 para sim, 0 para nao).
// float calcularIngresso(int idade, int estudante) {
//     float preco = 50.0;
//     if (idade < 12)
//      preco = 25.0;
//     if (estudante)
//      preco = preco * 0.8;
// }
// A funcao deveria retornar o preco final do ingresso.
// • Identifique o erro presente na funcao.
// • Corrija a funcao.
// • Para uma pessoa de 10 anos que tambem seja estudante, qual valor sera retornado apos a correcao?

// float calcularIngresso(int idade, int estudante){
//     float preco = 50.0;
//     if(idade < 12 && estudante){
//         preco = 25 * 0.8;
//     }
//     else if(idade < 12){
//         preco = 25;
//     }
//     else if(estudante){
//         preco = preco * 0.8;
//     }

//     return preco;
// }   

// 15. Uma empresa registra o consumo de energia de cinco maquinas durante um turno. Considere:
// float consumo[5] = {12.5, 18.0, 9.5, 21.0, 14.0};
// Implemente as funcoes:
// float consumoTotal(float consumo[5]);
// int indiceMaiorConsumo(float consumo[5]);
// A primeira funcao deve retornar o consumo total das maquinas. A segunda deve retornar o
// indice da maquina que apresentou o maior consumo.
// No programa principal, mostre o consumo total e o numero da maquina de maior consumo,
// considerando que as maquinas sao numeradas de 1 a 5

// float consumoTotal(float consumo[5]){
//     float consumo_total = 0.0;
    
//     for(int i = 0; i < 5; i++){
//         consumo_total += consumo[i];
//     }

//     return consumo_total;
// }

// int indiceMaiorConsumo(float consumo[5]){
//     float maior_consumo;

//     for(int i = 0; i < 5; i++){
//         if(i == 0){
//             maior_consumo = consumo[i];
//         }
//         else if(consumo[i] > maior_consumo){
//             maior_consumo = i;
//         }
//     }

//     return maior_consumo;
// }

// int main(){
//     float consumo[5] = {12.5, 18.0, 9.5, 21.0, 14.0};
//     float consumo_total;
//     float maior_consumo;

//     consumo_total = consumoTotal(consumo);
//     maior_consumo = indiceMaiorConsumo(consumo);

//     printf("Consumo total: %.2f\n",consumo_total);
//     printf("Indice da maquina com o maior consumo: %.2f\n",maior_consumo);

//     return 0;
// }

// 16. Um jogo possui 6 fases. A pontuacao obtida em cada fase e armazenada em um vetor pontos[6],
// enquanto um segundo vetor informa o nivel de dificuldade dificuldade[6] da fase:
// • 1: facil;
// • 2: media;
// • 3: dificil.
// Implemente a funcao:
// int calcularPontuacaoFinal(int pontos[6], int dificuldade[6]);
// Para cada fase:
// • dificuldade 1: utilize a pontuacao original;
// • dificuldade 2: acrescente 20% a pontuacao;
// • dificuldade 3: acrescente 50% a pontuacao.
// A funcao deve retornar a soma das pontuacoes das seis fases com o acrescimo de acordo com
// a dificuldade.
// Faca um teste de mesa mostrando o retorno da funcao considerando os vetores:
// int pontos[6] = {10, 20, 30, 15, 25, 40};
// int dificuldade[6] = {1, 2, 3, 1, 2, 3};

// int calcularPontuacaoFinal(int pontos[6], int dificuldade[6]){
//     int soma_pontos = 0;
//     for(int i = 0; i < 6; i++){
//         int ponto_fase = pontos[i];

//         if(dificuldade[i] == 2){
//             ponto_fase = pontos[i] * 1.20;
//         }
//         else if(dificuldade[i] == 3){
//             ponto_fase = pontos[i] * 1.50;
//         }

//         soma_pontos += ponto_fase;
//     }

//     return soma_pontos;
// }

// int main(){
//     int pontuacao_final;
//     int pontos[6] = {10, 20, 30, 15, 25, 40};
//     int dificuldade[6] = {1, 2, 3, 1, 2, 3};

//     pontuacao_final = calcularPontuacaoFinal(pontos, dificuldade);

//     printf("Soma das pontuacoes incluindo aumento por fase: %d\n",pontuacao_final);

//     return 0;
// }

// 17. Uma empresa possui uma matriz int vendas[3][4], na qual cada linha representa uma filial
// e cada coluna representa uma semana do mes.
// Implemente as funcoes:
// int totalFilial(int vendas[3][4], int filial);
// int totalSemana(int vendas[3][4], int semana);
// A funcao totalFilial deve retornar o total vendido por uma determinada filial durante as
// quatro semanas. A funcao totalSemana deve retornar o total vendido pelas tres filiais em uma
// determinada semana.
// No programa principal, utilize essas funcoes para mostrar:
// • o total de cada filial;
// • o total de cada semana;
// • qual filial apresentou o maior total no mes.

// int totalFilial(int vendas[3][4], int filial){
//     int total_filial = 0;
//     int maior_total = 0;

//     for(int j = 0; j < 4; j++){
//         total_filial += vendas[filial][j];
//     }
//     return total_filial;
// }

// int totalSemana(int vendas[3][4], int semana){
//     int total_semana = 0;

//     for(int i = 0; i < 3; i++){
//         total_semana += vendas[i][semana];
//     }

//     return total_semana;
// }

// int main(){
//     int vendas[3][4];
//     int total_semana;
//     int maior_total = -1;
//     int filial_vencedora = 0;

//     for(int i = 0; i < 3; i++){
//         printf("--- Filial %d --- \n", i);
//         for(int j = 0; j < 4; j++){
//             printf("Informe as vendas da %d semana da filial: ", j + 1);
//             scanf("%d", &vendas[i][j]);
//         }
//     }

//     printf("--- Total por Filial ---\n");
//     for(int i = 0; i < 3; i++){
//         int total_filial = totalFilial(vendas, i);
//         printf("Filial %d: %d\n", i, total_filial);

//         if(total_filial > maior_total){
//             maior_total = total_filial;
//             filial_vencedora = i;
//         }
//     }

//     printf("\n--- Total por Semana ---\n");
//     for (int j = 0; j < 4; j++) {
//         printf("Semana %d: %d\n", j + 1, totalSemana(vendas, j));
//     }

//     printf("\n--- Filial com Maior Total no Mes ---\n");
//     printf("A filial %d apresentou o maior total: %d\n", filial_vencedora, maior_total);

//     return 0;

// }

// 18. Um sistema recebe um codigo de acesso armazenado em uma string.
// Implemente a funcao:
// int senhaValida(char senha[20]);
// Uma senha sera considerada valida somente quando possuir:
//     • pelo menos 6 caracteres;
//     • pelo menos uma letra maiuscula;
//     • pelo menos um numero.
// A funcao deve percorrer a string e retornar 1 se todas as condicoes forem satisfeitas ou 0 caso
// contrario. Nao e necessario verificar caracteres especiais.

// int senhaValida(char senha[20]){
//     int tamanho = strlen(senha);

//     if(tamanho < 6){
//         return 0;
//     }
//     int tem_maiuscula = 0;
//     int tem_numero = 0;

//    for (int i = 0; i < tamanho; i++) {
//         if (isupper(senha[i])) { // Define como maiuscula cada letra do vetor.
//             tem_maiuscula = 1;
//         }
//         if (isdigit(senha[i])) { // Verifica cada digito do vetor de 0 a 9.
//             tem_numero = 1;
//         }
//     }
//     if (tem_maiuscula && tem_numero) {
//         return 1;
//     } else {
//         return 0;
//     }
// }

// 19. Uma competicao de drones possui 8 etapas. Para cada etapa sao armazenados:
//     • a pontuacao obtida pelo drone;
//     • um codigo indicando a condicao da etapa.
// Os codigos sao:
//     • 1: condicao normal;
//     • 2: vento forte;
//     • 3: chuva.
// Implemente:
// int pontuacaoEtapa(int pontos, int condicao);
// int calcularTotal(int pontos[8], int condicoes[8]);
// int etapasCriticas(int pontos[8], int condicoes[8]);
// A funcao pontuacaoEtapa deve devolver:
//     • a pontuacao original, se a condicao for normal;
//     • a pontuacao acrescida de 5 pontos, se houver vento forte;
//     • a pontuacao acrescida de 10 pontos, se houver chuva.
// A funcao calcularTotal deve utilizar pontuacaoEtapa para calcular e retornar a pontuacao
// total das 8 etapas.
// A funcao etapasCriticas deve retornar quantas etapas tiveram simultaneamente:
//     • condicao diferente de normal; e
//     • pontuacao original menor que 20.
// No programa principal, mostre a pontuacao total e a quantidade de etapas criticas

// int pontuacaoEtapa(int pontos, int condicao){
//     if (condicao == 2) {
//         return pontos + 5;  
//     } else if (condicao == 3) {
//         return pontos + 10; 
//     }
//     return pontos;
// }

// int calcularTotal(int pontos[8], int condicoes[8]){
//     int total = 0;
//     for(int i = 0; i < 8; i++){
//         total += pontuacaoEtapa(pontos[i], condicoes[i]);
//     }

//     return total;
// }

// int etapasCriticas(int pontos[8], int condicoes[8]){
//     int qtd_crititicas = 0;
//     for(int i = 0; i < 8; i++){
//         if(condicoes[i] != 1 && pontos[i] < 20){
//         qtd_crititicas ++;
//         }
//     }
//     return qtd_crititicas;
// }

// int main(){
//     int pontos[8];
//     int condicoes[8];

//     for (int i = 0; i < 8; i++) {
//         printf("--- Etapa %d ---\n", i + 1);
//         printf("Pontuacao original: ");
//         scanf("%d", &pontos[i]);
//         printf("Condicao (1-Normal, 2-Vento forte, 3-Chuva): ");
//         scanf("%d", &condicoes[i]);
//     }

//     int total_pontos = calcularTotal(pontos, condicoes);
//     int total_criticas = etapasCriticas(pontos, condicoes);

//     printf("Pontuacao total: %d\n", total_pontos);
//     printf("Quantidade de etapas criticas: %d\n", total_criticas);

//     return 0;
// }