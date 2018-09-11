/*
Caleb Edwards
CS 3505
A2
*/

#include "Spiral.h"
#include "HaruPDF.h"
#include <iostream>
#include <cmath>

int main(int argc, char **argv){

  // Create both objects from classes
  Spiral spiral(210, 300, 90, 0);
  HaruPDF haru(argv);

  char input[1024] = "Hello World Again and Again and Again and agian and agian and aigna and agian";

  // Create string to hold input
  char buf;

  // Loop through the input
  for(int i = 0; i < argc; i++){
    buf = input[i];
    spiral.increment();
    haru.placeText(&buf, spiral.getTextX(), spiral.getTextY(), spiral.getTextAngle(), spiral.getTextRadius());
  }

  // Save the PDF for display
  haru.savePDF();
  return 0;
}
