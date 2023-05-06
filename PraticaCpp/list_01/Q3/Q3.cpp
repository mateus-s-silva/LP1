#include <iostream>

// Aluno: Mateus Sousa da Silva
// Matrícula: 20220046908

/**

 @file Q3.cpp

 @brief Calcula um número harmônico Hn

 @param n O valor de n

 @param soma O valor atual da soma dos termos

 @return O valor de Hn

 Esta função recursiva calcula um número harmônico Hn.

 Se n é igual a 1, a função retorna o valor atualizado de soma mais 1.

 Caso contrário, a função atualiza o valor de soma com o termo atual (1/n),

 e chama a função novamente com n-1 e o valor atualizado de soma.
*/

double sumHn(int n, double soma){

    if(n == 1){
        return soma += 1;
    }
    else{
        soma += 1.0/n;
        return sumHn(n-1, soma);
    }
}


int main()
{
    int a, b;
    double soma = 0;

    std::cin >> a;

    soma = sumHn(a, soma);

    std::cout << soma << std::endl; 

    return 0;
}