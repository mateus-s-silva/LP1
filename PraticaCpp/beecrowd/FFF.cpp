#include <bits/stdc++.h>

//Entrada: 
/*
Cada caso de teste é dado em uma única linha que contém uma frase. Uma frase consiste de uma sequência de no máximo 50 palavras separadas por espaços simples. Uma palavra é uma sequência de no máximo 20 letras do alfabeto inglês (maiúsculas e minúsculas). Uma palavra contém ao menos uma letra e uma sentença contém ao menos uma palavra.

O último caso de teste é seguido de uma linha contendo apenas o caractere '*' (asterisco).
*/

//Saída:
/*
Para cada caso de teste, imprima uma única linha contendo o caractere 'Y' se a sentença é um tautograma, ou um 'N' caso contrário.
*/
std::vector<std::string> mystrtok(std::string str, char delim){

    std::vector<std::string> tokens;
    std::string temp = "";

    for(int i = 0; i < str.length(); i++){
        if(str[i] == delim){
            tokens.push_back(temp);
            temp = "";
        }
        else
            temp += str[i];
    }
    tokens.push_back(temp);
    return tokens;
}

int main(){

    int len, aux = 0;

    std::string tauto = "";

    while(std::getline(std::cin, tauto)){

        if(tauto == "*")
            break;

        std::transform(tauto.begin(), tauto.end(), tauto.begin(), ::toupper);

        std::vector<std::string> tokens =  mystrtok(tauto, ' ');

        len = tokens.size();

        char teste = tauto[0];

        for(std::string tauto: tokens){
            if(tauto[0] == teste){
                aux++;
            }
        }

        if(aux == len){
            std::cout << "Y" << std::endl;
            aux = 0;
        }
        else{
            std::cout << "N" << std::endl;
            aux = 0;
        }

    }
        return 0;
    }