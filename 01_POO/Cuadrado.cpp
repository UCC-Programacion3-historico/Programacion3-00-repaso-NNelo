#include "Cuadrado.h"

float Cuadrado::getDiagonal() {
    return sqrt(alto * alto + ancho * ancho);
}

float Cuadrado::getSuperficie() {
    return alto * ancho;
}

float Cuadrado::getPerimetro() {
    return alto * 2 + ancho * 2;
}