#include <iostream>
#include <iomanip>

/**

    @file tribonacci.cpp
    @brief Programa que calcula o valor do n-ésimo número da sequência de Tribonacci.
    A sequência de Tribonacci é uma sequência de números inteiros na qual cada termo é a soma dos três termos anteriores.
    Os primeiros três termos são 0, 0 e 1.
    Este programa utiliza uma função recursiva para calcular o valor do n-ésimo número da sequência de Tribonacci
    a partir dos três primeiros valores e do índice a ser buscado.
    @author Mateus Sousa.
    @date 03/05/2023

*/


/**
    @brief Função recursiva que calcula o valor do n-ésimo número da sequência de Tribonacci.
    @param n0 O primeiro valor da sequência.
    @param n1 O segundo valor da sequência.
    @param n2 O terceiro valor da sequência.
    @param index O índice do número a ser buscado.
    @param indexValue O valor correspondente ao índice atual.
    @return O valor do índice buscado.
    A função é recursiva e recebe como parâmetros os três primeiros valores da sequência (n0, n1, n2),
    o índice a ser buscado (index), e o valor atual do índice (indexValue).
    A função retorna o valor do índice quando o índice fornecido é igual a 2 e, caso contrário,
    atualiza os valores de n0, n1, n2 e indexValue, decrementa index e chama a si mesma novamente com os novos parâmetros.
    @note A função assume que o índice fornecido é um número inteiro positivo.
*/

int tribonacci(int n0, int n1, int n2, int index, int indexValue){

    if(index == 2){
        return indexValue;
    }
    indexValue = n2 + n1 + n0;

    n0 = n1;
    n1 = n2;
    n2 = indexValue;
    
    index--;

    return tribonacci(n0, n1, n2, index, indexValue);
}

/**

    @brief Função principal do programa.
    A função inicializa as variáveis n0, n1 e n2 com os valores iniciais da sequência,
    lê o valor do índice a ser buscado através da entrada padrão,
    chama a função tribonacci para calcular o valor correspondente ao índice
    e exibe o resultado na saída padrão.
    @return 0 se o programa for executado com sucesso.
*/

int main(){

    int n0{0}, n1{0}, n2{1};
    int indexValue{0}, index;

    std::cin >> index;

    indexValue = tribonacci(n0, n1, n2, index, indexValue);

    std::cout << indexValue << std::endl;


    return 0;
}