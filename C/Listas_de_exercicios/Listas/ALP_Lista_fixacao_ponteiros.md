# Exercícios de Fixação — Ponteiros

Lista introdutória sobre ponteiros em C: declaração, associação a variáveis, leitura/alteração de valores por endereço e depuração de erros clássicos.

## Exercícios

1. Ponteiro para uma variável `moedas` (int): imprimir valor, endereço, conteúdo apontado e alterar o valor pelo ponteiro.
2. Ponteiro para uma variável `temperatura` (float): mostrar valor original e somar um valor usando o ponteiro.
3. Ponteiro para uma variável `char` (`categoria`): imprimir valor, endereço e conteúdo, depois alterar via ponteiro.
4. Três ponteiros para variáveis de tipos diferentes (int, float, char) representando vidas, moedas e nível de uma personagem — imprimir antes/depois de alterar via ponteiro.
5. Um mesmo ponteiro reatribuído para apontar para duas variáveis diferentes (`leitura1` e `leitura2`), com alteração de valor pelo ponteiro.
6. Código com erro (`*p = &numero;`) — identificar a linha incorreta, explicar o erro conceitual e corrigir.
7. Código com uso incorreto de `printf` ao imprimir ponteiro/valor apontado sem o operador `*` — identificar e corrigir as duas linhas.
8. Ponteiro usado sem ser inicializado (`*ptr_energia = energia;` sem `ptr_energia = &energia;`) — identificar, corrigir e prever a saída.
9. Teste de mesa com três ponteiros (`p1`, `p2`, `p3`) manipulando três variáveis inteiras — acompanhar os valores passo a passo e informar o resultado final.

---
*Resumo elaborado a partir do material da disciplina — PUC-Campinas, Algoritmos e Linguagem de Programação, Profª Darcy H. Moreira.*
