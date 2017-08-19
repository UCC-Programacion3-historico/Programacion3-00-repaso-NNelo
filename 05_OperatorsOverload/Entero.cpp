#include "Entero.h"

void Entero::operator=(int n) {
    a = n;
    b = n;
    c = n;
}

Entero Entero::operator+(int n) {
    try {
        a += n;
        b += n;
        c += n;
        if (a != b && b != c && c != a)
            throw 0;
        if (a != b && b == c)
            throw 1;
        if (b != a && a == c)
            throw 2;
        if (c != a && a == b)
            throw 3;
    } catch (int e) {
        switch (e) {
            case 1:
                a = b;
                break;
            case 2:
                b = a;
                break;
            case 3:
                c = a;
                break;
            case 0:
                break;
            default:
                break;
        }
    }
}

Entero Entero::operator-(int n) {
    try {
        a -= n;
        b -= n;
        c -= n;
        if (a != b && b != c && c != a)
            throw 0;
        if (a != b && b == c)
            throw 1;
        if (b != a && a == c)
            throw 2;
        if (c != a && a == b)
            throw 3;
    } catch (int e) {
        switch (e) {
            case 1:
                a = b;
                break;
            case 2:
                b = a;
                break;
            case 3:
                c = a;
                break;
            case 0:
                break;
            default:
                break;
        }
    }
}

Entero Entero::operator*(int n) {
    try {
        a *= n;
        b *= n;
        c *= n;
        if (a != b && b != c && c != a)
            throw 0;
        if (a != b && b == c)
            throw 1;
        if (b != a && a == c)
            throw 2;
        if (c != a && a == b)
            throw 3;
    } catch (int e) {
        switch (e) {
            case 1:
                a = b;
                break;
            case 2:
                b = a;
                break;
            case 3:
                c = a;
                break;
            case 0:
                break;
            default:
                break;
        }
    }
}

Entero Entero::operator/(int n) {
    try {
        a /= n;
        b /= n;
        c /= n;
        if (a != b && b != c && c != a)
            throw 0;
        if (a != b && b == c)
            throw 1;
        if (b != a && a == c)
            throw 2;
        if (c != a && a == b)
            throw 3;
    } catch (int e) {
        switch (e) {
            case 1:
                a = b;
                break;
            case 2:
                b = a;
                break;
            case 3:
                c = a;
                break;
            case 0:
                break;
            default:
                break;
        }
    }
}