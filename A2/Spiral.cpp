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
  _rad1 = 0;
  _rad2 = 0;
  buf[1] = 0;
  _angle2 = 180;
  _x = 0;
  _y = 0;
}

double Spiral::getTextX(){
  //return _textX;
  return _x;
}

double Spiral::getTextY(){
  //return _textY;
  return _y;
}

double Spiral::getTextRadius(){
  return _radius;
}

double Spiral::getTextAngle(){
  //return _textAngle;
  return _rad1;
}

void Spiral::increment(){
  // // rad1 determines the angle of the letter on the page. rad2 is how far
  // // around the circle you are. Notice that they are perpendicular and
  // // thus not independent.
  // //
  // // Pay careful attention to what wants radians and what is degrees
  // // between haru and spiral and math functions.
  // _rad1 = (_angle2 - 90) / 180 * 3.141592;
  // _rad2 = _angle2 / 180 * 3.141592;
  //
  // // The position of the character depends on the center point
  // // plus the angle and the radius.
  // _x = 210 + cos(_rad2) * 150;
  // _y = 300 + sin(_rad2) * 150;
  //
  // // This ugly function defines where any following text will be placed
  // // on the page. The cos/sin stuff is actually defining a 2D rotation
  // // matrix.
  // // HPDF_Page_SetTextMatrix(page,
  // //                         cos(_rad1), sin(_rad1), -sin(_rad1), cos(_rad1),
  // //                         x, y);
  //
  // // // C-style strings are null-terminated. The last character must a 0.
  // // buf[0] = SAMP_TXT[i]; // The character to display
  // // HPDF_Page_ShowText (page, buf);
  // _angle2 -= 10.0; // change the angle around the circle
}

// Spiral operator++(int t) const{
//   return *this;
// }
