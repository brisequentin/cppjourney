#include <iostream>
#include "../include/hw.hpp"

int hw()
{
    std::cout << "Hello World !" << std::endl;
    return 0;
}

void HW::test(){
    std::cout << "test !" << std::endl;
}

//compile 
// g++ -std=c++17 function.cpp -o prog
// ./helloworld