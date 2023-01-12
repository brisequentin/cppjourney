#include <iostream>
#include <string>

int main()
{
    bool isValid{}; //default value = 0
    const int number1{};
    //float written with f, F at the end
    float number2{4};
    // u, U (unsigned)
    unsigned int other_number{123u};
    // l, L (long int, long double)
    // ll, LL (long long int)

    //prefix
    // 0b => binary : 0b1011
    // 0 => octal   : 0795
    // 0x => hex    : 0xa6

    std::cout << isValid << std::endl;

    std::string string1{"hello world"};
    string1 = "Hello World 2 !";
    std::cout << string1 << std::endl;




    //user input
    std::cout << "Please type number : ";

    std::cout << "Good " << std::cin.good() << std::endl; //goodbit :1
    std::cout << "Fail " << std::cin.fail() << std::endl; //failbit :0
    std::cout << "Bad " << std::cin.bad() << std::endl;   //badbit  :0


    int nb;
    std::cin >> nb;
    std::cout << "Your number is " << nb << std::endl;


    std::cout << "Good " << std::cin.good() << std::endl;
    std::cout << "Fail " << std::cin.fail() << std::endl;
    std::cout << "Bad " << std::cin.bad() << std::endl;


    //toute la ligne
    std::string username;
    std::getline(std::cin, username, '\n');




    return 0;
}