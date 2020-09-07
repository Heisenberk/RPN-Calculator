#ifndef MOTEUR_RPN__H
#define MOTEUR_RPN__H

#include <stack>
#include <string>
using namespace std;

class MoteurRPN {
    private:
        stack <double> pile;

    public:
        MoteurRPN();
        double enregistreOperande(double val);
        double calculeOperation(Operation op);
        bool operationPossible();
        string listeOperandes();

};

#endif
