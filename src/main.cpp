#include <iostream>

int addition(int a, int b);
int substraction(int a, int b);
int multiplication(int a, int b);

int main(){
    int a = 10;
    int b = 5;

    std::cout<<"Result of addition "<<addition(a,b)<<std::endl;
    std::cout<<"Result of substraction "<<substraction(a,b)<<std::endl;
    std::cout<<"Result of multiplication"<<multiplication(a,b)<<std::endl;
    return 0;
}