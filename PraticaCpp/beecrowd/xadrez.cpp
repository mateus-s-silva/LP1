#include <iostream>


int main(){

    int column, line;

    std::cin >> line >> column;

    if((line % 2 == 0 && column % 2 == 1) || (column % 2 == 0 && line % 2 == 1)){
        std::cout << "0" << std::endl;
    }
    else{
        std::cout << "1" << std::endl;
    }


    return 0;
}