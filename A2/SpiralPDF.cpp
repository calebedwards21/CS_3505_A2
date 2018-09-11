/*
Caleb Edwards
CS 3505
A2
*/

#include "Spiral.h"
#include "HaruPDF.h"
#include <iostream>
#include <string.h>

int main(int argc, char **argv){

  // Check for text provided
  if(argc < 2){
    std::cout << "No text was provided" << std::endl;
    return 0;
  }

  // Create both objects from classes
  Spiral spiral(210, 300, -39, 0);
  HaruPDF haru(argv);

  // Create string to hold input
  char buf;
  const char* chars = argv[1];

  // Loop through the input
  for(int i = 0; i < strlen(chars); i++){

    buf = chars[i];
    //spiral++;
    spiral.increment();
    haru.placeText(&buf, spiral.getTextX(), spiral.getTextY(), spiral.getTextAngle(), spiral.getTextRadius());
  }

  // Save the PDF for display
  haru.savePDF();
  return 0;
}
