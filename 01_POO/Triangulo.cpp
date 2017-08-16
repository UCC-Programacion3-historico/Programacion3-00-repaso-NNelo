#include "Triangulo.h"


void Triangulo::setAngulos(int ang) {
    angulos = ang;
}

float Triangulo::getAngulos() {
    return angulos;
}

float Triangulo::getSuperficie() {
    return alto * ancho / 2.0;
}

float Triangulo::getPerimetro() {
    return 3 * ancho;
}