#include <iostream>
#include "Calculadora.h"

using namespace std;

int main() {
    cout << "Ejercicio 00/03\n" << endl;
    Calculadora<int> calc;

    calc.setA(300);
    calc.setB(0);

    try {
        cout << calc.dividir() << endl;
    } catch (int e) {
        cout << "B no puede ser 0: " << e << endl;
    }

    return 0;
}