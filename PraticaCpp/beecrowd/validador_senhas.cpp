#include <iostream>
#include <string>

bool checkUpper(std::string senha){
    int n = senha.size();
    for(int i = 0; i < n; i++){
        if(isupper(senha[i])){
            return true;
        }
    }
    return false;
}

bool checkLower(std::string senha){
    int n = senha.size();
    for(int i = 0; i < n; i++){
        if(islower(senha[i])){
            return true;
        }
    }
    return false;
}

bool checkNumber(std::string senha){
    int n = senha.size();
    bool check;
    for(int i = 0; i < n; i++){
        if(isdigit(senha[i])){
            return true;
        }
    }
    return false;
}

bool checkSize(std::string senha){
    if(senha.size() >= 6 && senha.size() <= 32){
        return true;
    }
    return false;
}

bool checkValidChar(std::string senha){
    int n = senha.size();
    for(int i = 0; i < n; i++){
        if(!isalpha(senha[i]) && !isdigit(senha[i])){
            return false;
        }
    }
    return true;
}


int main(){

    std::string senha;

    while(std::getline(std::cin, senha)){

    bool hasLower = checkLower(senha);
    bool hasUpper = checkUpper(senha);
    bool hasNumber = checkNumber(senha);
    bool hasSize = checkSize(senha);
    bool isValid = checkValidChar(senha);

    if(hasSize && hasLower && hasUpper && hasNumber && isValid){
        std::cout << "Senha valida." << std::endl;
    }
    else{
        std::cout << "Senha invalida." << std::endl;
    }
    }
    
    return 0;
}