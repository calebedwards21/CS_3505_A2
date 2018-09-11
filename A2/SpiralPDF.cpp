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
  Spiral spiral(1000, 100, 0, 90);
  HaruPDF haru;

  // center x = 210
  // center y = 296
  const float pi = 3.14159;
  float x,y;
  float xCenter = 210;
  float yCenter = 300;
  float fontWidth = 30;
  float radius = 2 * fontWidth;
  float arcLength = fontWidth * 0.6;
  float alpha = 0;
  float dAlpha;
  float dRadius = 0;


  char input[1024] = "Hello World Again and Again and Again and agian and agian and aigna and agian";
  char buf[2];
  buf[1] = 0;
  // Loop through the input
  for(int i = 0; i < 1024; i++){
    dAlpha  = arcLength/radius;
    x = xCenter + radius*cos(-alpha + pi/2);
    y = yCenter + radius*sin(-alpha + pi/2);
    buf[0] = input[i];
    //spiral.increment();
    haru.placeText(buf, spiral.getTextX()+x, spiral.getTextY()+y, spiral.getTextAngle()-alpha, spiral.getTextRadius()+radius);
    radius += 1;
    alpha += dAlpha;
  }

  // Save the PDF for display
  haru.savePDF();
  return 0;
}
