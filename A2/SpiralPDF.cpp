/*
Caleb Edwards
CS 3505
A2
*/

#include "Spiral.h"
#include "HaruPDF.h"
#include <iostream>

int main(int argc, char **argv){
  Spiral spiral(1000, 1000, 0, 90);
  HaruPDF haru;
  for(int i = 1; i < argc; i++){
    //spiral.increment();
    haru.placeText("hello", spiral.getTextX(), spiral.getTextY(), spiral.getTextAngle(), spiral.getTextRadius());
  }
  haru.savePDF();
  return 0;
}
