#include <iostream>
#include <string>
#include <array>

int main(){
    //tableau taille fixe, initialisé a 0
    std::array<int, 5> arr{};

    for(const auto& element : arr){
        std::cout << element << std::endl;
    }

    std::cout << arr[0] << std::endl;
    arr[0] = 2;
    std::cout << arr[0] << std::endl;

    /*
        methodes : std::array 
        fill(a) : fill the rest of the array with a value
        at(a) == arr[a] 
        size(), empty

        front(), back() : first, last elem

        - - - - - - - - - - - - - - 

        std::size, std::empty
    */

   
    std::cout << "Taille : " << arr.size() << std::endl;
    std::cout << "Taille : " << std::size(arr) << std::endl; // <= mieux car utilise qlq chose de plus générique (compatible pour plus de données)

    if(std::empty(arr)){
        stdd::cout << "Oui" << std::endl;
    } else {
        std::cout << "Non" << std::endl;
    }

    //dynamic

    std::vector<std::string> arr{};

    if(std::empty(arr)){
        std::cout << "Tableau vide." << std::endl;
    }

    /* std::vector
        push_back(), pop_back()
    
    */

    std::vector<std::string> copy{};
    copy = arr;




    


    return 0;
}