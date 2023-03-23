#include <iostream>
#include <cmath>


int main(){
    // y = onde quero ir
    // x = onde estou
    int xl, xc, yl, yc;
    
    while(xl != 0 && xc != 0 && yc != 0 && yl != 0){

        std::cin >> xl >> xc >> yl >> yc;
        if(xl + xc + yc + yl == 0){
            break;
        }
        else if(xl == yl && xc == yc){
            std::cout << 0 << std::endl;
            }
        else if((xl == yl && xc != yc) || (xl != yl && xc == yc) || ((abs(xl-yl) == abs(xc-yc)))){
            std::cout << 1 << std::endl;
            }
        else{
            std::cout << 2 << std::endl;
            }
        }

    return 0;
}