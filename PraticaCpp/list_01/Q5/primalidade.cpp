#include "primalidade.h"


bool isPrimo(int n){
    int aux = 0;
    for(int i = 1; i <= n; i++){
        if(n%i == 0){
            aux++;
        }
    }

    if(aux == 2){
        return true;
    }

    else{
        return false;
    }
}

int primalidade(int n){
     if(isPrimo(n)==true){
            return n;
        }
    else{
        return primalidade(n-1);
    }

}