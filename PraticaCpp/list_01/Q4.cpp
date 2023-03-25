#include <iostream>
#include <string>

/* Implemente uma função recursiva que determine quantas vezes um dígito d ocorre em
   um número natural K. Por exemplo, o dígito 6 ocorre 2 vezes em 362867.

   Da pra colocar algumas restrições pro usuário não inserir um número negativo, mas 
   não sei se esse é o intuito da lista, então como a função está funcionando, está aí!! */

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