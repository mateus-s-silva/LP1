#include <iostream>
#include <string>

int checkUpper(std::string senha){
    int n = senha.size();
    for(int i = 0; i < n; i++){
        if(isupper(senha[i])){
            return 1;
        }
    }
    return 0;
}

int checkLower(std::string senha){
    int n = senha.size();
    for(int i = 0; i < n; i++){
        if(islower(senha[i])){
            return 1;
        }
    }
    return 0;
}

int checkNumber(std::string senha){
    int n = senha.size();
    bool check;
    for(int i = 0; i < n; i++){
        if(isdigit(senha[i])){
            return 1;
        }
    }
    return 0;
}

int checkSize(std::string senha){
    if(senha.size() >= 6 && senha.size() <= 32){
        return 1;
    }
    return 0;
}

int checkValidChar(std::string senha){
    int n = senha.size();
    for(int i = 0; i < n; i++){
        if(!isalpha(senha[i]) && !isdigit(senha[i])){
            return 0;
        }
    }
    return 1;
}


int main(){

    std::string senha;

    while(std::getline(std::cin, senha)){

    int hasLower = checkLower(senha);
    int hasUpper = checkUpper(senha);
    int hasNumber = checkNumber(senha);
    int hasSize = checkSize(senha);
    int isValid = checkValidChar(senha);

    if(hasSize == 1 && hasLower == 1 && hasUpper == 1 && hasNumber == 1 && isValid == 1){
        std::cout << "Senha valida." << std::endl;
    }
    else{
        std::cout << "Senha invalida." << std::endl;
    }
    }
    
    return 0;
}