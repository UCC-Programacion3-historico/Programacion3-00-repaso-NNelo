#ifndef REPASO_ENTERO_H
#define REPASO_ENTERO_H


class Entero {
private:
    int a;
    int b;
    int c;
public:
    void operator=(int);

    Entero operator+(int);

    Entero operator-(int);

    Entero operator*(int);

    Entero operator/(int);
};

#endif //REPASO_ENTERO_H