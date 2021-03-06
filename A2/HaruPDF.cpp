/*
Caleb Edwards
CS 3505
A2
*/

#include "HaruPDF.h"
#include <string.h>
#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>


HaruPDF :: HaruPDF(char **fileName){

  // This makes an output pdf named after the program's name
  strcpy (fname, *fileName);
  strcat (fname, ".pdf");

  pdf = HPDF_New (NULL, NULL);
  /* add a new page object. */
  page = HPDF_AddPage (pdf);
  HPDF_Page_SetSize (page, HPDF_PAGE_SIZE_A5, HPDF_PAGE_PORTRAIT);
//print_grid  (pdf, page);
  font = HPDF_GetFont (pdf, "Helvetica", NULL);
  HPDF_Page_SetTextLeading (page, 20);
  HPDF_Page_SetGrayStroke (page, 0);

  HPDF_Page_BeginText (page);
  HPDF_Page_SetFontAndSize (page, font, 20);
}

/*
*This code will save the PDF
*/
void HaruPDF:: savePDF(){
    HPDF_Page_EndText (page);
    /* save the document to a file */
    HPDF_SaveToFile (pdf, fname);

    /* clean up */
    HPDF_Free (pdf);
}


/*
* This code will place the text in the PDF Doc
*/
void HaruPDF::placeText(const char* ch, float x, float y, float textAngle, double radius){
    // This ugly function defines where any following text will be placed
    // on the page. The cos/sin stuff is actually defining a 2D rotation
    // matrix.
    HPDF_Page_SetTextMatrix(page,
                            cos(textAngle * M_PI/180), sin(textAngle * M_PI/180), -sin(textAngle * M_PI/180), cos(textAngle * M_PI/180),
                            x, y);

    char buf[2] = {*ch, 0};

    HPDF_Page_ShowText (page, buf);
}
