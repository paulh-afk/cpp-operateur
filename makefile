all: project clear

project: main.o duree.o
	g++ duree.o main.o -o project

main.o:
	g++ -c ./Sources/main.cpp -o main.o

duree.o:
	g++ -c ./Sources/Duree.cpp -o duree.o

clear:
	rm *.o
	clear
	./project