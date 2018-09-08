/*
Caleb Edwards
CS 3505
A2
*/

#include "Spiral.h"
#include "HaruPDF.h"
#include <iostream>

int main(int argc, char **argv){
  Spiral spiral(1,2,3,4);
  double x = spiral.getTextX();
  double y = spiral.getTextY();
  double angle = spiral.getTextAngle();
  std::cout<< x << " " << y << " " << angle << std::endl;
  HaruPDF haru;
  const char* string = "akdjfk";
  haru.placeText(string,100,100,10,10);
  haru.savePDF();
  return 0;
}
