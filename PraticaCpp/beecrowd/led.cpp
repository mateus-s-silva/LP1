#include <iostream>
#include <sstream>
#include <string>
using std::stringstream;

stringstream buffer;

int countLeds(std::string s1){

    int count = 0, somaLeds = 0;

    //buffer.str(""); // limpa o fluxo
    //std::string numero;
    //buffer << n;
    //numero = buffer.str();

    count = s1.size();

    for(int i = 0; i < count; i++){
        
        switch(s1[i])
        {
        case '1':
            somaLeds += 2;
            break;
        case '2':
            somaLeds += 5;
            break;
        case '3':
            somaLeds += 5;
            break;
        case '4':
            somaLeds += 4;
            break;
        case '5':
            somaLeds += 5;
            break;
        case '6':
            somaLeds += 6;
            break;
        case '7':
            somaLeds += 3;
            break;
        case '8':
            somaLeds += 7;
            break;
        case '9':
            somaLeds += 6;
            break;
        case '0':
            somaLeds += 6;
            break;
        default:
            break;
        }

    }

    return somaLeds;
} 
 
int main() {
 

    int n, total = 0;
    std::string numero;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> numero;
        total = countLeds(numero);
        std::cout << total << " leds" << std::endl;
    }


    return 0;
}