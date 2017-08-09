#include "Geometria.h"

Geometria::Geometria(float alt, float anc) : alto(alt), ancho(anc) {}

float Geometria::getAlto() const {
    return alto;
}

void Geometria::setAlto(float alto) {
    Geometria::alto = alto;
}

float Geometria::getAncho() const {
    return ancho;
}

void Geometria::setAncho(float ancho) {
    Geometria::ancho = ancho;
}