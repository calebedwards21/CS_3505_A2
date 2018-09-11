/*
Caleb Edwards
CS 3505
A2
*/

#include "Spiral.h"
#include <cmath>

Spiral::Spiral(double centerX, double centerY, double radius, double degrees){

  // Check initial params
  _radius = radius;
  if(_radius < 0){
    _radius = _radius * -1;
    std::cout << "Changed your radius to be positive" << std::endl;
  }

  if(_radius < 40){
    _radius = 40;
    std::cout << "Changed your radius to 40. This is the minimun value allowed" << std::endl;
  }

  _centerX = centerX;
  _centerY = centerY;
  _degrees = degrees;
  _textX = 0;
  _textY = 0;
  _textAngle = 0;
  _fontWidth = 30;
  _dRadius = 0;
  _alpha = degrees;
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
  return _textAngle * 180/M_PI;
}

void Spiral::increment(){

  _dAlpha  = _arcLength/_radius;
  _textX = _centerX + _radius*cos(-_alpha + M_PI/2);
  _textY = _centerY + _radius*sin(-_alpha + M_PI/2);

  _radius += 1;
  _alpha += _dAlpha;
  _textAngle = -_alpha;
}

void operator++(Spiral& spiral){

  spiral._dAlpha  = spiral._arcLength/spiral._radius;
  spiral._textX = spiral._centerX + spiral._radius*cos(-spiral._alpha + M_PI/2);
  spiral._textY = spiral._centerY + spiral._radius*sin(-spiral._alpha + M_PI/2);

  spiral._radius += 1;
  spiral._alpha += spiral._dAlpha;
  spiral._textAngle = -spiral._alpha;
}

void operator++(Spiral& spiral, int x){
  spiral._dAlpha  = spiral._arcLength/spiral._radius;
  spiral._textX = spiral._centerX + spiral._radius*cos(-spiral._alpha + M_PI/2);
  spiral._textY = spiral._centerY + spiral._radius*sin(-spiral._alpha + M_PI/2);

  spiral._radius += 1;
  spiral._alpha += spiral._dAlpha;
  spiral._textAngle = -spiral._alpha;
}

std::ostream& operator<<(std::ostream& output, Spiral spiral){

  output<<"X Position : " << spiral.getTextX() << std::endl;
  output<<"Y Position : " << spiral.getTextY() << std::endl;
  output<<"Radius : " << spiral.getTextRadius() << std::endl;
  output<<"Text Angle : " << spiral.getTextAngle();
  return output;
}
