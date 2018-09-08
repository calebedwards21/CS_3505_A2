#include "HaruPDF.h"

HPDF_Doc  pdf;
HPDF_Page page;
char fname[256];
HPDF_Font font;
float angle2;
float rad1;
float rad2;
unsigned int i;


HPDF_Doc HaruPDF :: newPDF(){
  // argv are the command line arguments
  // argv[0] is the name of the executable program
  // This makes an output pdf named after the program's name
  strcpy (fname, argv[0]);
  strcat (fname, ".pdf");

  pdf = HPDF_New (NULL, NULL);
  /* add a new page object. */
  page = HPDF_AddPage (pdf);
  HPDF_Page_SetSize (page, HPDF_PAGE_SIZE_A5, HPDF_PAGE_PORTRAIT);
//    print_grid  (pdf, page);
  font = HPDF_GetFont (pdf, "Helvetica", NULL);
  HPDF_Page_SetTextLeading (page, 20);
  HPDF_Page_SetGrayStroke (page, 0);

  /* text along a circle */
  angle2 = 180;

  HPDF_Page_BeginText (page);
  // Their example sets font twice. Probably some kind of mistake. Fix it or do what they do.
  font = HPDF_GetFont (pdf, "Courier-Bold", NULL);
  HPDF_Page_SetFontAndSize (page, font, 30);
}
