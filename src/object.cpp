#include <iostream>
#include "../include/point.hpp"

/*
    struct : public data (default)
    class : private data (default)


    public, private, protected.
*/



int main(){
    Point p{};
    Point p2{p};
    std::cout << p << std::endl;


    Point p3{4,2};
    p3.run();
    return 0;
}
