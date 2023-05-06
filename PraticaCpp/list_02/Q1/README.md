### Respostas questão 1

## B) O que é recursão de cauda? Quais as implicações da recursão em cauda na execução do programa? Qual a solução para a recursão em cauda?

  A recursão de cauda é um tipo especial de recursão em que a chamada recursiva é a última operação realizada dentro de uma função. Em outras palavras, a recursão de cauda ocorre quando a chamada recursiva é a última instrução antes de retornar da função.

  As implicações da recursão em cauda na execução do programa são significativas. Quando uma função faz uma chamada recursiva em cauda, não há necessidade de armazenar as informações de contexto da função atual na pilha de chamadas, pois não há operações pendentes após a chamada recursiva. Isso permite que o compilador otimize a recursão em cauda através da eliminação da recursão, transformando-a em um loop simples. Como resultado, a recursão em cauda consome uma quantidade constante de espaço na pilha, independentemente da quantidade de chamadas recursivas.

  A solução para utilizar a recursão em cauda de forma eficiente é projetar a função de forma que a chamada recursiva ocorra como a última operação da função. Dessa forma, o compilador pode otimizar a recursão em cauda para um loop, evitando o estouro da pilha de chamadas em casos de recursões profundas. Além disso, é importante usar uma linguagem de programação que suporte a otimização de recursão em cauda, já que nem todas as linguagens oferecem essa otimização.

## C) A função recursiva que você implementou gera recursão de cauda? Justifique.
  Não, a função implantada não gera recursão em cauda, pois ela possui uma condição de parada onde ela retorna um inteiro 

## D)  Em alguns casos, quando estamos trabalhando com funções recursivas, ocorre o Stack Overflow. Explique o que é e porque ocorre esse overflow

  O "Stack Overflow" ocorre quando a pilha de chamadas de um programa fica cheia devido a um número excessivo de chamadas recursivas. Isso pode acontecer se a recursão for infinita, se houver muitas chamadas recursivas ou se cada chamada recursiva consumir muita memória. Para evitar o "Stack Overflow", é importante definir corretamente a condição de parada da recursão e otimizar o algoritmo, se necessário.

