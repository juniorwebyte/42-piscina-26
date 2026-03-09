# Rush01 - 4x4 Skyscrapers Solver

## Descrição

Este projeto implementa um resolvedor para o quebra-cabeça Skyscrapers de 4x4. O Skyscrapers é um jogo de lógica onde você deve preencher uma grade 4x4 com números de 1 a 4, seguindo regras específicas de visibilidade das alturas dos prédios de cada lado da grade.

## Regras do Jogo

- A grade deve ser preenchida com números de 1 a 4.
- Não pode haver números repetidos na mesma linha ou coluna.
- Os números nas bordas representam quantos prédios são visíveis olhando daquela direção (topo, fundo, esquerda, direita).
- Um prédio é visível se for mais alto que todos os prédios à sua frente nessa linha/coluna.

## Estrutura do Projeto

- `main.c`: Ponto de entrada do programa. Inicializa a grade e chama as funções de resolução.
- `ft_generate_board.c`: Implementa o algoritmo de backtracking para gerar a solução da grade.
- `ft_get_numbers.c`: Analisa a string de entrada e converte em um array de inteiros.
- `ft_verify.c`: Verifica se a solução encontrada atende às restrições de visibilidade.
- `ft_linecheck.c`: Contém funções para calcular a visibilidade de cada linha/coluna (top, bottom, left, right).
- `ft_print_board.c`: Imprime a grade resolvida no formato correto.
- `ft_putchar.c`: Função utilitária para imprimir um caractere.
- `ft_putstr.c`: Função utilitária para imprimir uma string.

## Compilação
https://github.com/juniorwebyte/42-piscina-26.git
Para compilar o programa, use o seguinte comando no diretório do projeto:

```bash
gcc -o rush01 *.c
```

## Uso

Execute o programa passando uma string com 16 números separados por espaços como argumento:

```bash
./rush01 "4 3 2 1 1 2 3 4 4 3 2 1 1 2 3 4"
```

### Formato da Entrada

A entrada deve ser uma string contendo exatamente 16 números de 1 a 4, separados por espaços. Os números representam:

- Posições 1-4: Visibilidade do topo (para cada coluna)
- Posições 5-8: Visibilidade do fundo (para cada coluna)
- Posições 9-12: Visibilidade da esquerda (para cada linha)
- Posições 13-16: Visibilidade da direita (para cada linha)

Exemplo: `"4 3 2 1 1 2 3 4 4 3 2 1 1 2 3 4"`

### Saída

Se uma solução for encontrada, o programa imprime a grade 4x4 resolvida:

```
1 2 3 4
2 3 4 1
3 4 1 2
4 1 2 3
```

Se não houver solução ou a entrada for inválida, o programa imprime uma mensagem de erro.

## Exemplos

### Exemplo 1: Entrada válida com solução

```bash
./rush01 "4 3 2 1 1 2 3 4 4 3 2 1 1 2 3 4"
```

Saída:
```
1 2 3 4
2 3 4 1
3 4 1 2
4 1 2 3
```

### Exemplo 2: Entrada inválida

```bash
./rush01 "invalid input"
```

Saída:
```
Error, invalid argument ("4 3 2 1 1 2 3 4...").
```

### Exemplo 3: Sem solução

```bash
./rush01 "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"
```

Saída:https://github.com/juniorwebyte/42-piscina-26.git
```
Error, no solution found!
```

## Algoritmo

O programa usa um algoritmo de backtracking para tentar preencher a grade:

1. Começa da posição (0,0) e tenta números de 1 a 4.
2. Para cada tentativa, verifica se o número é válido (não repetido na linha/coluna).
3. Quando a grade está completa, verifica se atende às restrições de visibilidade.
4. Se sim, imprime a solução. Se não, backtrack e tenta outro número.

## Autores

- jode-fig (jode-fig@student.42sp.org.br)
- isantos-
- rviniciu

## Licença

Este projeto é parte do currículo da 42 School.</content>
<parameter name="filePath">/home/jode-fig/Desktop/rush01/ex00/ex00/README.md