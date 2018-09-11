/*
Caleb Edwards
CS 3505
A2
*/

#include "Spiral.h"
#include <iostream>
#include <cmath>

Spiral::Spiral(double centerX, double centerY, double radius, double degrees){
  _centerX = centerX;
  _centerY = centerY;
  _radius = radius;
  _degrees = degrees;
  _textX = 0;
  _textY = 0;
  _textAngle = 0;
  _fontWidth = 30;
  _dRadius = 0;
  _alpha = 0;
  _arcLength = _fontWidth * 0.6;
}

double Spiral::getTextX(){
  return _textX;
}

double Spiral::getTextY(){
  return _textY;
}

double Spiral::getTextRadius(){
  return _radius;
}

double Spiral::getTextAngle(){
  return _textAngle;
}

void Spiral::increment(){

  const float pi = 3.14159;

  _dAlpha  = _arcLength/_radius;
  _textX = _centerX + _radius*cos(-_alpha + pi/2);
  _textY = _centerY + _radius*sin(-_alpha + pi/2);

  _radius += 1;
  _alpha += _dAlpha;
  _textAngle = -_alpha;
}

// Spiral operator++(int t) const{
//   return *this;
// }
