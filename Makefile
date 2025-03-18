main.o: main.cpp workshop.h
	g++ -c main.cpp

workshop: main.o
	g++ -o workshop main.o

run: workshop
	./workshop

clean:
	rm -f *.o workshop