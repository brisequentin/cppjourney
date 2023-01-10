#include <iostream>

int main()
{
    int result;
    // + - * / %
    // ! && ||
    // < <= > >= == !=
    result = 5 + 5;
    result++;

    std::cout << "Resultat : " << result << std::endl;


    // data = 0

    //result = data++ // result = 0, data = 1
    //result = ++data //result = 2, data = 2


    if(true){
        
    }else if(false){
        while(false){

        }
    }

    if(int number{3};number>3){

    }

    switch(number){
        case 1:
        case 2:
            std::cout << "slt" << std::endl;
            break;
        default:
            break;

    }

    for(int i; i<=10; i++){
        std::cout << "i vaut" << i << std::endl;
    }

    for(const auto letter : sentence){
        std::cout << letter << "\n";
    }


    return 0;
}