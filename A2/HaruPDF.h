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
  //Constructor for the PDF, creates a new PDF doc
  HaruPDF(char**);

  // Closes the PDF and saves it to the executable name given .pdf
  void savePDF();

  // This function places the char ch on the paper with a given x, y position
  // and radius as well as angle of the char on the page.
  void placeText(const char* ch, float x, float y, float rad, double radius);
};
