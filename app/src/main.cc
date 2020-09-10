#include <iostream>
#include "../inc/saisieRPN.hh"
using namespace std;

int test_exception(int a, int b){
    if (b==0) throw "Division par 0";
    return a+b;
}

int main(){

    /*
    MoteurRPN moteurRPN; 
    moteurRPN.enregistreOperande(2);
    moteurRPN.enregistreOperande(3);
    try{
        cout << moteurRPN.calculeOperation('/') << endl;
    }
    catch(const char* msg){
        cout << msg << endl;
        return 1;
    }

    moteurRPN.enregistreOperande(1);
    cout << moteurRPN.calculeOperation('-') << endl;*/
    
    try{
        SaisieRPN saisieRPN;
        saisieRPN.saisie();
    }
    catch(const char* msg){
        cout << msg << endl;
        return 0; // A ENLEVER
    }

    return 0;
}
