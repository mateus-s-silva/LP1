#include <bits/stdc++.h>

// Entrada:
/*
A entrada contém vários casos de teste. Cada caso de teste é composto por uma única linha de texto com até 1000 caracteres.
*/

// Saída: 
/*Imprima o valor ASCII de todos os caracteres presentes e a sua frequência de acordo com o formato abaixo. Uma linha em branco 
deverá separar 2 conjuntos de saída. Imprima os caracteres ASCII em ordem ascendente de frequência. Se dois caracteres estiverem 
presentes com a mesma quantidade de frequência, imprima primeiro o caracter que tem valor ASCII maior. A entrada é terminada por 
final de arquivo (EOF).*/

void bubbleSortFreq(int *sq, int *rec, int k){

    char aux;
    int temp;

    for (int i = 0; i < k-1; i++) {
        for (int j = i + 1; j < k; j++) {
            if (rec[i] > rec[j]) {
                std::swap(sq[i], sq[j]);
                std::swap(rec[i], rec[j]);
            }
        }
    }
}

void bubbleSortChar(int *sq, int *rec, int k){

    int temp;

    for (int i = 0; i < k-1; i++) {
        for (int j = i + 1; j < k; j++) {
            if (rec[i] == rec[j]) {
                if(sq[i] < sq[j]){
                    std::swap(sq[i], sq[j]);
                    std::swap(rec[i], rec[j]);
                }
            }
        }
    }
}


int main(){

    std::string sequencia;
    int sequenciaFiltrada[1000];
    int  k{0}, j;
    bool first{true};


    while(std::getline(std::cin, sequencia)){
            for(int i = 0; i < sequencia.size(); i++){
                for(j = 0; j < k; j++){
                    if(sequencia[i] == sequenciaFiltrada[j])
                        break;
                }
                if(j == k){
                    sequenciaFiltrada[k] = sequencia[i];
                    k++;
                }
            }

            int recorrencia[k] = {0};

            for(int i = 0 ; i < k; i++){
                for(int j = 0; j < sequencia.size(); j++){
                    if(sequenciaFiltrada[i] == sequencia[j]){
                        recorrencia[i] += 1;
                    }
                }
            }

            bubbleSortFreq(sequenciaFiltrada, recorrencia, k);
            bubbleSortChar(sequenciaFiltrada, recorrencia, k);

            if(!first){
                putchar('\n');
            }

            for(int i = 0; i < k; i++){
                std::cout << sequenciaFiltrada[i] << " " << recorrencia[i] << std::endl;
            }

            k = 0;
            first = false;
            
        }

    return 0;
}