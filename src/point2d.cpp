#include "../include/point2d.hpp"
#include "../include/point.hpp"
#include <iostream>
#include <string>

Point2D::Point2D(int x, int y, int z) noexcept : Point(x,y), _z (z) 
{

}

//appelelr methode classe parrent:
    point::getX(); ...


//pour avoir une classe abstraite il faut une méthode virtuelle nulle
//pour avoir une interface : toutes les méthodes sont virtual. // si methode virtu il faut un destructeur virtu.
