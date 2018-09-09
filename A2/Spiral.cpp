/*
Caleb Edwards
CS 3505
A2
*/

#include "Spiral.h"
#include <iostream>
#include <cmath>

// For a starting angle at 12 oclock angle must be equal to -theta + pi/2

Spiral::Spiral(double centerX, double centerY, double radius, double degrees){
  _centerX = centerX;
  _centerY = centerY;
  _radius = radius;
  _degrees = degrees;
  _textX = 0;
  _textY = 0;
  _textAngle = 0;
  _angleAroundCircle = 0;
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
  // _textAngle determines the angle of the letter on the page. _angleAroundCircle is how far
  // around the circle you are. Notice that they are perpendicular and
  // thus not independent.
  //
  // Pay careful attention to what wants radians and what is degrees
  // between haru and spiral and math functions.
  _textAngle = (_degrees - 90) / 180 * 3.141592;
  _angleAroundCircle = _degrees / 180 * 3.141592;

  // The position of the character depends on the center point
  // plus the angle and the radius.
  _textX = 210 + cos(_angleAroundCircle) * 150;
  _textY = 300 + sin(_angleAroundCircle) * 150;

  _degrees -= 10.0; // change the angle around the circle
  _radius += .1; //change the radius around the circle
}

// Spiral operator++(int t) const{
//   return *this;
// }
