CC = g++
CFLAGS = -Wall -std=c++11

HARULIBDIR = libharu/src
HARULIBINCLUDE = libharu/include

example : pdfExample.o
	$(CC) $(CFLAGS) -o example pdfExample.o -L$(HARULIBDIR) -l hpdfs

pdfExample.o : pdfExample.cpp $(HARULIBINCLUDE)/hpdf.h
		$(CC) $(CFLAGS) -c pdfExample.cpp -I $(HARULIBINCLUDE)

clean:
	rm  example *.o

test:
	./example
