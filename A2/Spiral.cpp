#include "Spiral.h"
#include <iostream>
#include <cmath>

Spiral::Spiral(double centerX, double centerY, double radius, double degrees){
  _centerX = centerX;
  _centerY = centerY;
  _radius = radius;
  _degrees = degrees;
}

double Spiral::getTextX(){
  //std::cout<<_centerX << std::endl;
  return _centerX;
}
