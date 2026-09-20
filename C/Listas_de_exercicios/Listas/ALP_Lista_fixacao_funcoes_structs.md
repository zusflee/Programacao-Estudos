# Exercícios de Fixação — Funções e Structs

Lista voltada ao uso combinado de `struct` e funções em C, incluindo vetores de structs, structs aninhadas e correção de erros comuns de acesso a campos.

## Exercícios

1. Acesso a campos de uma struct simples (`Pessoa`): expressão para ler um campo e imprimir outro.
2. Completar função de impressão de uma struct `Destino` (nome, país, preço).
3. Implementar função que imprime nome e notas de um `Aluno` (vetor de floats dentro da struct).
4. Função que avalia risco de um `Paciente` com base em temperatura e saturação.
5. Percorrer um vetor de `Livro` já preenchido e imprimir título, páginas e preço de cada um.
6. Duas funções sobre um vetor de `Produto`: contar itens disponíveis e imprimir apenas os disponíveis.
7. Calcular a média de tempos de um `Atleta` e imprimir seus dados.
8. Struct `Evento` com uma struct `Data` aninhada; função para imprimir data no formato dd/mm/aaaa.
9. Structs aninhadas `Aluno` + `Endereco`; contar e listar alunos de uma cidade específica.
10. Criar uma struct `Roteiro` (destino, país, preço, duração, vagas, status) e implementar custo por dia, classificação (econômico/intermediário/premium) e busca por destino.
11. Struct de `Paciente` mais completa: risco imediato, classificação de temperatura e contagem de internados.
12. Struct `Animal`: média de pesagens, classificação por idade, contagem por espécie e verificação de animal apto para soltura.
13. Struct `Turma` contendo vetor de `Aluno`: média por aluno, impressão da turma e contagem de aprovados.
14–20. Série de trechos de código com erros propositais envolvendo structs (atribuição incorreta de campo, comparação de strings com `==`, uso de `.` em vez de variável, parâmetro do tipo errado, retorno incorreto, atribuição de string sem `strcpy`) — o exercício pede identificar o erro, explicar e corrigir.
21. **Questão final (Hogwarts):** sistema com structs aninhadas (`Notas` dentro de `Aluno`), vetor fixo de 5 alunos pré-cadastrados, e funções para calcular média, classificar aluno, contar alunos por casa, verificar característica, calcular média geral em Defesa Contra as Artes das Trevas e imprimir todos os dados formatados.

---
*Resumo elaborado a partir do material da disciplina — PUC-Campinas, Algoritmos e Linguagem de Programação, Profª Darcy H. Moreira.*
