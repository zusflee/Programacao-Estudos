# Lista de Revisão — Prova 2

Lista de revisão cobrindo funções por referência, structs aninhadas, ponteiros e vetores de structs — conteúdos típicos da segunda prova da disciplina.

## Exercícios

1. **Reservatório cilíndrico:** implementar uma única função que calcula, por parâmetros de saída (ponteiros), a área lateral e a pressão no fundo de um reservatório.
2. **Cadastro de investimentos:** structs aninhadas (`tipo_instituicao` dentro de `tipo_investimento`) com vetor já preenchido de 4 investimentos; implementar funções para média dos valores aplicados, contagem por tipo de instituição, contagem por letra inicial do nome e soma de rendimentos de um investimento específico.
3. **Bateria de drone:** implementar uma função que atualiza por referência a bateria e o consumo de um trecho de voo (consumo aleatório entre 10 e 35, sem deixar a bateria negativa).
4. **Teste de mesa com ponteiros cruzados:** acompanhar os valores de `energia` e `bonus` em um programa que usa dois ponteiros (`p`, `q`) sendo reatribuídos e alterando valores indiretamente.
5–6. Questões de múltipla escolha sobre o comportamento de ponteiros passados por valor para funções e sobre o que é impresso ao acessar um ponteiro com `%p`.
7. Questão teórica de múltipla escolha sobre conceitos de ponteiros em C (o item incorreto é sobre passagem de vetor como cópia do primeiro elemento).
8. **Struct `Aluno` com médias:** analisar um programa que calcula a média de dois alunos usando uma função `calcularMedia(Aluno a)` e determina qual aluno tem a maior média entre três.

---
*Resumo elaborado a partir do material da disciplina — PUC-Campinas, Algoritmos e Linguagem de Programação, Profª Darcy H. Moreira.*
