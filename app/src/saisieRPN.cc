#include <stack>
#include <string>
#include <iostream>
#include <cstring>
#include "../inc/saisieRPN.hh"
#include "../inc/moteurRPN.hh"
using namespace std;

SaisieRPN::SaisieRPN() {
    this->moteur = MoteurRPN();
}

void SaisieRPN::saisie() {
    string value = "";
    double convert;
    bool arret = false;
    cout << "Saisir Nombre, Operation ou exit pour quitter la calculatrice. " << endl;
    while (arret == false){
        getline(cin, value);
 
        if (strcmp(value.c_str(), "exit")==0) arret = true;
        else if (strcmp(value.c_str(), "+")==0){
            cout << "ADDITION" << endl;
        }
        else if (strcmp(value.c_str(), "-")==0){
            cout << "SOUSTRACTION" << endl;
        }
        else if (strcmp(value.c_str(), "*")==0){
            cout << "MULTIPLICATION" << endl;
        }
        else if (strcmp(value.c_str(), "/")==0){
            cout << "DIVISION" << endl;
        }
        else if (!isdigit(value[0])){
            cout << "Dernier element non compris par l'application. " << endl;
            arret = true;
        }
        else {
            convert = atof(value.c_str());
            cout << "Nombre : " << convert << endl;
        }
    }
}


