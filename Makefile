SRC=app/src
INC=app/inc

all: compil
	./calculatrice

compil:
	g++ -o calculatrice $(SRC)/main.cc $(SRC)/moteurRPN.cc $(SRC)/saisieRPN.cc

clean:
	rm -f *.o

