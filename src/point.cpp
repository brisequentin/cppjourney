#include "../include/point.hpp"
#include <iostream>

Point::Point(){
    std::cout << "Creation d'un point : " << this << std::endl;
    return 0;
}

Point::Point(const Point& p){
    std::cout << "Copie d'un point : " << this << std::endl;
    return 0;
}

Point::~Point(const Point& p){
    std::cout << "Destruction d'un point : " << this << std::endl;
    return 0;
}