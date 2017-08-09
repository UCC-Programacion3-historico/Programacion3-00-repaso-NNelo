#include <iostream>
#include "Calculadora.h"

using namespace std;

int main() {
    Calculadora<int> calInt;
    Calculadora<char> calChar;
    Calculadora<float> calFloat;
    Calculadora<string> calString;

    cout << "Ejercicio 00/02\n" << endl;

    //calculadora de ints
    calInt.setA(4);
    calInt.setB(5);

    cout << calInt.sumar() << endl;
    cout << calInt.dividir() << endl << endl;

    //calculadora de chars
    calChar.setA(4);
    calChar.setB(5);

    cout << calChar.sumar() << endl;
    cout << calChar.dividir() << endl << endl;

    //calculadora de float
    calFloat.setA(4);
    calFloat.setB(5);

    cout << calFloat.sumar() << endl;
    cout << calFloat.dividir() << endl << endl;

    //calculadora de string
    calString.setA("Hola");
    calString.setB("Mundo");

    cout << calString.sumar() << endl;

    return 0;
}