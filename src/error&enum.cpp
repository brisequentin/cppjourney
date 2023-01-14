#include <iostream>
#include <string>
#include <cassert>



void createPlayer(std::string name, int level){
    //assert(<expression> && <message>)
    assert(level > 0 && "Le niveau d'un joueur est au minimum de 1");
    std::cout << "creation de " << name << ", de niveau " << level << std::endl;
}



int main(){
    createPlayer("Robert", 25);

    try{
        
    }catch(const std::invalid_argument& err){
        std::cout << err.what() << std::endl;
    }  catch(const std::exception& err){
        std::cout << "une erreurs'est produite" << std::endl;
    }   


    if (true){
            throw std::invalid_argument("Pas le bon argument");
    }

    //enum

    weekDays wd{weekDays::Mon};

    std::cout << wd << std::endl;
    std::cout << static_cast<int>(wd) << std::endl;

    return 0;
}

enum weekDays{
        Mon, // 0 
        Tu,  // 1
        Wen, // 2 ...
        Thur,
        fri,
        sat,
        sun
    };