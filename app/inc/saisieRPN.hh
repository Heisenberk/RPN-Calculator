#ifndef SAISIE_RPN__H
#define SAISIE_RPN__H

#include "../inc/moteurRPN.hh"
#include <stack>
using namespace std;

class SaisieRPN {
    private:
        MoteurRPN moteur;

    public:
        SaisieRPN();
        void saisie();
        MoteurRPN getMoteurRPN();
        void afficheValues();

};

#endif
