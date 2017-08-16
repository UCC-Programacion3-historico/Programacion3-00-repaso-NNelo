#include "Circulo.h"

#define PI 3.14159265

float Circulo::getRadio() const {
    return radio;
}

void Circulo::setRadio(float radio) {
    Circulo::radio = radio;
}

float Circulo::getPerimetro() {
    return 2 * PI * radio;
}

float Circulo::getSuperficie() {
    return PI * radio * radio;
}

#undef PI