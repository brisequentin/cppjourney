#include <iostream>
#include <string>
#include <fstream>


struct Product{
    std::string name;
    float price;
    bool available;
};



int main(){
    struct Product p{"tournevis", 3f, true};
    std::cout << "Prix : " << p.price << std::endl;
    p.price = 3.37f;
    std::cout << "Prix : " << p.price << std::endl;


    
    /*
        std::ios::out, std::ios::in
        std::ios::binary ==> pour tester ouvrir une image

        std::ios::trunc
        std::ios::ate
        std::ios::app
    */
    
    
    std::ifstream f{"animals.txt"}; // std::ios::in
    if (f.is_open()){
        std::string name{""};
        f >> name;

        std::cout << name << std::endl;


        std::string line{""};
        std::getline(f >> std::ws, line);
        std::cout << line << std::endl;

        f.close();
    }
    
    std::ofstream f{"animals.txt"}; 
    if (f.is_open()){
        f << "Another animal..";
        f.close();
    }


    return 0;


}