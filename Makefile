SRC=app/src
INC=app/inc

all: compil
	./calculatrice

compil:
	g++ -o calculatrice $(SRC)/main.cc $(SRC)/moteurRPN.cc

clean:
	rm -f *.o

