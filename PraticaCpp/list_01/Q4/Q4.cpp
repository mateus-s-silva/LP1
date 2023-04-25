#include <iostream>
#include <string>

// Aluno: Mateus Sousa da Silva
// Matrícula: 20220046908


/**

    @brief Função que conta quantas vezes um número aparece em outro número.
    
    @param number Número inteiro em que será procurado o número.
    
    @param swhatNumber Número a ser procurado em 'number'.
    
    @param k Índice do último caractere a ser analisado em 'number'.
    
    @param h Variável que armazena o número de vezes que swhatNumber aparece em number.
    
    @return Número de vezes que swhatNumber aparece em number.
*/

int countNumbers(std::string number, std::string swhatNumber, int k, int h){
    if(k < 0){
        return h;
    }
    else{
        if(number[k] == swhatNumber[0]){
            h++;
        }
        return countNumbers(number, swhatNumber, k - 1, h);
    }
}

int main(){


    int whatNumber, number, howManyTimes = 0, lenghtString;
    std::string sNumber, swhatNumber;

    std::cin >> number; // lê o número natural
    std::cin >> whatNumber; // lê o número procurado em 'number'

    sNumber = std::to_string(number);
    swhatNumber = std::to_string(whatNumber);

    lenghtString = sizeof(sNumber);

    howManyTimes = countNumbers(sNumber, swhatNumber, lenghtString - 1, howManyTimes);

    std::cout << howManyTimes << std::endl;

    return 0;
}