#include <iostream>

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