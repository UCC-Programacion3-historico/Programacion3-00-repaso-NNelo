#ifndef REPASO_TRIANGULO_H
#define REPASO_TRIANGULO_H


#include "Geometria.h"

class Triangulo : public Geometria {
private:
    float angulos;
public:
    void setAngulos(int);

    float getAngulos();

    float getSuperficie();

    float getPerimetro();
};


#endif //REPASO_TRIANGULO_H
