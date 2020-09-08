#include <stack>
#include <string>
#include <iostream>
#include "../inc/moteurRPN.hh"
using namespace std;

MoteurRPN::MoteurRPN() {
    this->pile = stack <double>();
}

double MoteurRPN::enregistreOperande(double val){
    this->pile.push(val);
    return val;
}

double MoteurRPN::calculeOperation(char op){
    double val1;
    double val2;
    double result;

    if (this->pile.size()<2){
        cout << "PROBLEME LORS DU CALCUL : MANQUE DES ELEMENTS DANS LA PILE";
        //exception a lancer
    }

    val1 = this->pile.top();
    this->pile.pop();
    val2 = this->pile.top();
    this->pile.pop();
    cout << val1 << ' ' << val2 << ' ';

    if (op == '+'){
        result = val1+val2;
        this->pile.push(result);
        return result;
    }
    else if (op == '-'){
        result = val2-val1;
        this->pile.push(result);
        return result;
    }
    else if (op == '*'){
        result = val1*val2;
        this->pile.push(result);
        return result;
    }
    else if(op == '/'){
        //attention division par zero
        result = val2/val1;
        this->pile.push(result);
        return result;
    }
    else {
        // exception a lancer 
        cout << "OPERANDE NON RECONNU";
    }
    return -1.0;
}

stack <double> MoteurRPN::getPile(){
    return this->pile;
}

MoteurRPN::~MoteurRPN(){
    //cout << "Destructeur MoteurRPN" << endl;
}
