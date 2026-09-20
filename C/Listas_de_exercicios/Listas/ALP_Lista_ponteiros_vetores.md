# Lista — Ponteiros de Vetores

Lista sobre a relação entre ponteiros e vetores em C: aritmética de ponteiros, acesso via `*(p+n)`, ponteiros para `char` (strings) e correção de erros de sintaxe/lógica.

## Exercícios

1. Questão de múltipla escolha (4 itens) sobre um ponteiro `p` associado a um vetor de 4 inteiros: para onde aponta inicialmente, valor de `*p`, valor de `*(p+2)` e efeito de `p++`.
2. Questão similar com um ponteiro chamado `hedwig`, incluindo o efeito de `(*hedwig)++` vs. `hedwig++`.
3. Teste de mesa: prever o conteúdo final de um vetor de moedas após uma sequência de operações com ponteiro (incremento, decremento, avanço de posição).
4. Teste de mesa semelhante com um vetor de "níveis de magia", incluindo uma soma entre posições via ponteiro.
5. Associar expressões (`p`, `*p`, `*(p+1)`, etc.) aos seus resultados para um vetor de leituras.
6. Tabela para completar com os valores de acesso via índice e via ponteiro para um vetor de produção.
7. Encontrar e corrigir o erro em um código que tenta usar `*p = vetor;` para acessar o primeiro elemento.
8. Encontrar e corrigir os erros em um código que deveria imprimir um valor float via ponteiro (uso incorreto do `%f` com endereço/ponteiro).
9. Corrigir um acesso fora dos limites do vetor (`*(p+3)` em vetor de 3 posições).
10. Implementar leitura e alteração de um vetor de energia de baterias usando apenas notação de ponteiro (`*p`, `*(p+1)`, `*(p+2)`).
11. Implementar manipulação de um vetor de `char` (códigos de poções) via ponteiro, incluindo alteração do último elemento.
12. Perguntas sobre um ponteiro `char *p` associado a uma string, cobrindo `*p`, `*(p+1)`, `*(p+2)` e o caractere terminador `'\0'`.
13. Prever a saída de um programa que usa `*(p++)`, incremento de ponteiro e alteração de caractere em uma string.
14. Questão de múltipla escolha sobre o comportamento de `scanf("%d", p)` quando `p` já é um ponteiro para inteiro.

---
*Resumo elaborado a partir do material da disciplina — PUC-Campinas, Algoritmos e Linguagem de Programação, Profª Darcy H. Moreira.*
