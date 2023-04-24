#include <iostream> 

// Aluno: Mateus Sousa da Silva
// Matrícula: 20220046908


/* Implemente uma função recursiva que calcule a soma dos primeiros n cubos*/


int sumCube(int n, int soma){

    if(n == 1){
        return soma += 1;
    }
    else{
        soma = soma + n*n*n;
        return sumCube(n-1, soma);
    }
}


int main()
{
    int a, soma = 0;

    std::cin >> a;

    soma = sumCube(a, soma);

    std::cout << soma << std::endl; 

    return 0;
}
