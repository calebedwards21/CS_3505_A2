# Caleb Edwards
# CS 3505
# A2

CC = g++
CFLAGS = -Wall -std=c++11

HARULIBDIR = ../libharu/src
HARULIBINCLUDE = ../libharu/include

SpiralPDF : SpiralPDF.o HaruPDF.o Spiral.o
	$(CC) $(CFLAGS) -o SpiralPDF SpiralPDF.o HaruPDF.o Spiral.o -L$(HARULIBDIR) -l hpdfs

SpiralPDF.o : SpiralPDF.cpp $(HARULIBINCLUDE)/hpdf.h
		$(CC) $(CFLAGS) -c SpiralPDF.cpp -I $(HARULIBINCLUDE)

HaruPDF.o : HaruPDF.cpp $(HARULIBINCLUDE)/hpdf.h
	$(CC) $(CFLAGS) -c HaruPDF.cpp -I $(HARULIBINCLUDE)

Spiral.o : Spiral.cpp
	$(CC) $(CFLAGS) -c Spiral.cpp

clean:
	rm SpiralPDF *.o && rm *.pdf

test:
	./SpiralPDF
