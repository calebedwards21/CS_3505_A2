/*
Caleb Edwards
CS 3505
A2
*/

#include "hpdf.h"

class HaruPDF{

private:
  HPDF_Doc  pdf;
  HPDF_Page page;
  char fname[256];
  HPDF_Font font;


public:
  HaruPDF();

  void savePDF();

  void placeText(const char* ch, float x, float y, float rad, double radius);
};
