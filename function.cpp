#include <iostream>
#include <string>

void printHelloWorld(){
    //passage par valeurs
    std::string s{"Hello world !"};
}

void setNumbers(int& a, int& b){
    a -= 6;
    b += 2;
}

void setNumbers(float& a, float& b){
    a -= 6;
    b += 2;
}





int main(){
    std::string s{"Hello world !"};
    std::cout << s.length() << std::endl;



    printHelloWorld();

    //passage par référence. alias.
    int n{15};
    int &refN{n}; //est un alias. pas  un pointeur

    std::cout << n << std::endl;
    std::cout << refN << std::endl;

    //reference

    int n{5};
    int m{8};

    setNumbers(n,m);// n=-1, m=10 mm fonctionalité que les pointeurs


    float o{9.6};
    float p{4.7};

    setNumbers(o,p);

    /*lambda function:
     [Zone de capture](param) <spécificateurs> -> <type de retour> {code};
     Zone de capture :
        var : passage par copie
        &var : passage par référence

        = : tout est passe par copie  // pour les modif, il faut ajouter "mutable" en speficateur.
        & : tout est passé par reference

        <spécificateurs> : mutable, noexcept
    */
    auto func = []() -> void { std::cout << "Hello World !" << std::endl; };
    func();

    return 0;
}

