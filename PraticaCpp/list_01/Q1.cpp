#include <iostream> 

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
