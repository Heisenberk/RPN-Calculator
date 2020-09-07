all: compil
	./calculatrice

compil:
	g++ -o calculatrice app/src/main.cc

clean:
	rm -f *.o

