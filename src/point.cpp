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

Point::Point(int x = 0, int y = 0) : x(x), y(y) {
    std::cout << "Creation d'un point : " << this << std::endl;
    return 0;
}

void Point::run() const {
    std::cout << "Method run launched" << std::endl;
}

int Point::getX() const {
    return this->x;
}

void Point::setX(int x) {
    if (x <0){
        throw new std::illegal_argument("ne pas mettre de nombre negatif")
    } else {
        this->x = x;
    }
    
}