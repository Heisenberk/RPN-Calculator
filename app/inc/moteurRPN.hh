#ifndef MOTEUR_RPN__H
#define MOTEUR_RPN__H

#include <stack>
using namespace std;

class MoteurRPN {
    private:
        stack <double> pile;

    public:
        MoteurRPN();
        double enregistreOperande(double val);
        double calculeOperation(char op);
        stack <double> getPile();
        ~MoteurRPN();
};

#endif
