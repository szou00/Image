all: imageMaker.o
	gcc -o program imageMaker.o

imageMaker.o: imageMaker.c
	gcc -c imageMaker.c

run:
	./program
	convert img.ppm img.png
