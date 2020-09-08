#include <iostream>
#include "../inc/moteurRPN.hh"
using namespace std;

int main(){
    MoteurRPN moteurRPN; 
    moteurRPN.enregistreOperande(2);
    moteurRPN.enregistreOperande(3);
    cout << moteurRPN.calculeOperation('+') << endl;
    moteurRPN.enregistreOperande(1);
    cout << moteurRPN.calculeOperation('-') << endl;
    return 0;
}
