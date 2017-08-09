#ifndef REPASO_GEOMETRIA_H
#define REPASO_GEOMETRIA_H

#include "Color.h"

class Geometria {
protected:
    float alto;
    float ancho;
public:
    Color colorcito;

    Geometria() {};

    Geometria(float, float);

    virtual float getSuperficie() = 0;

    virtual float getPerimetro() = 0;

    float getAlto() const;

    void setAlto(float alto);

    float getAncho() const;

    void setAncho(float ancho);
};

#endif //REPASO_GEOMETRIA_H