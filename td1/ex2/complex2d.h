#ifndef COMPLEX2D_H
#define COMPLEX2D_H

#include <string>
using namespace std;

class Complex2D {
private:
    double partieReel;
    double partieImaginaire;

public:
    Complex2D();
    Complex2D(double);
    Complex2D(double, double);
    Complex2D(const Complex2D&);

    double recupererReel() const;
    double recupererImaginaire() const;

    void definirReel(double);
    void definirImaginaire(double);

    friend Complex2D operator+(const Complex2D&, const Complex2D&);
    friend Complex2D operator-(const Complex2D&, const Complex2D&);
    friend Complex2D operator*(const Complex2D&, const Complex2D&);
    friend Complex2D operator/(const Complex2D&, const Complex2D&);
    friend bool operator<(const Complex2D&, const Complex2D&);
    friend bool operator>(const Complex2D&, const Complex2D&);

    Complex2D conjugue() const;
    void rotation(double);
    double magnitude() const;
};

#endif
