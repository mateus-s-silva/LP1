#include <iostream>
#include <iomanip>


int main(){

    double matriz[12][12], total;
    char op;

    std::cin >> op;
    
    std::cout << std::fixed << std::showpoint << std::setprecision(1);

    for (int l = 0; l < 12; l++){
        for (int c = 0; c < 12; c++)
        {
            std::cin >> matriz[l][c];
        }
    }

    if(op == 'S'){
        total = 0;
        for (int l = 0; l < 5; l++){
            for (int c = 1 + l; c <= 10 - l; c++)
            {
                total += matriz[l][c];
            }
        }
        std::cout << total << std::endl;
    }
    else if(op == 'M'){
        total = 0;
        for (int l = 0; l < 5; l++){
            for (int c = 1 + l; c <= 10 - l; c++)
            {
                total += matriz[l][c];
            }
        }
        total /= 30;
        std::cout << total << std::endl;
    }


    return 0;
}