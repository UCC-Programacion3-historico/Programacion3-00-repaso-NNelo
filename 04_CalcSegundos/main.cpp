#include <iostream>

using namespace std;

int main() {
    cout << "Ejercicio 00/04\n" << endl;
    cout << "Ingresar cantidad de segundos\n";
    int crono;
    cin >> crono;

    int segundos, minutos, horas;

    segundos = crono % 60;
    minutos = crono / 60;
    horas = minutos / 60;
    minutos = minutos % 60;

    cout << "La hora ingresada es \n";

    cout.fill('0');
    cout.width(2);
    cout << horas << " : ";
    cout.width(2);
    cout << minutos << " : ";
    cout.width(2);
    cout << segundos/* << "\n"*/;
    cout.fill(' ');

    cout << endl;
    system("pause");
    return 0;
}