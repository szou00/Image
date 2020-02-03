all: imageMaker.o
	gcc -o program imageMaker.o

imageMaker.o: imageMaker.c
	gcc -c imageMaker.c

run:
	./program
	convert image.ppm image.png
