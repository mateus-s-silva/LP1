#include <iostream>
#include <string>

// Valor = (Posição no alfabeto) + (Elemento de entrada) + (Posição do elemento)


int findPosition(std::string letras, int x){

    int n = letras.size(), total = 0;

    for(int posicaoString = 0; posicaoString < n; posicaoString++){
        for(char posicaoAlfabeto = 'A'; posicaoAlfabeto <= 'Z'; posicaoAlfabeto++){
            if(letras[posicaoString] == posicaoAlfabeto){
                total += letras[posicaoString] - 65 + posicaoString + x;
            }
        }
    }

    return total;
}

int main(){

    int qtdCasos, qtdLinhas, total; 
    std::string letras;


    std::cin >> qtdCasos;

    for(int i = 0; i < qtdCasos; i++){
        std::cin >> qtdLinhas;
        total = 0;
        for (int j = 0; j < qtdLinhas; j++)
        {
            std::cin >> letras;
            total = total + findPosition(letras, j);
        }
        std::cout << total << std::endl;
    }

    return 0;
}