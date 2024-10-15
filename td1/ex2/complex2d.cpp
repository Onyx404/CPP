#include "complex2d.h"
#include <math.h>
using namespace std;

Complex2D::Complex2D() : partieReel(0.0), partieImaginaire(0.0) {}
Complex2D::Complex2D(double _valeur) : partieReel(_valeur), partieImaginaire(_valeur) {}
Complex2D::Complex2D(double _reel, double _imag) : partieReel(_reel), partieImaginaire(_imag) {}
Complex2D::Complex2D(const Complex2D& autre) : partieReel(autre.partieReel), partieImaginaire(autre.partieImaginaire) {}

void Complex2D::definirReel(double _reel) { partieReel = _reel; }
void Complex2D::definirImaginaire(double _imag) { partieImaginaire = _imag; }

double Complex2D::recupererReel() const { return partieReel; }
double Complex2D::recupererImaginaire() const { return partieImaginaire; }

Complex2D operator+(const Complex2D& c1, const Complex2D& c2) {
    return Complex2D(c1.partieReel + c2.partieReel, c1.partieImaginaire + c2.partieImaginaire);
}

Complex2D operator-(const Complex2D& c1, const Complex2D& c2) {
    return Complex2D(c1.partieReel - c2.partieReel, c1.partieImaginaire - c2.partieImaginaire);
}

Complex2D operator*(const Complex2D& c1, const Complex2D& c2) {
    double re = c1.partieReel * c2.partieReel - c1.partieImaginaire * c2.partieImaginaire;
    double im = c1.partieReel * c2.partieImaginaire + c1.partieImaginaire * c2.partieReel;
    return Complex2D(re, im);
}

Complex2D operator/(const Complex2D& c1, const Complex2D& c2) {
    double denominateur = pow(c2.magnitude(), 2);
    return (Complex2D(c1.partieReel / denominateur, c1.partieImaginaire / denominateur) * c2.conjugue());
}

bool operator<(const Complex2D& c1, const Complex2D& c2) {
    return c1.magnitude() < c2.magnitude();
}

bool operator>(const Complex2D& c1, const Complex2D& c2) {
    return c1.magnitude() > c2.magnitude();
}

Complex2D Complex2D::conjugue() const {
    return Complex2D(partieReel, -partieImaginaire);
}

double Complex2D::magnitude() const {
    return sqrt(partieReel * partieReel + partieImaginaire * partieImaginaire);
}

void Complex2D::rotation(double angle) {
    double re_temp = partieReel * cos(angle) - partieImaginaire * sin(angle);
    double im_temp = partieReel * sin(angle) + partieImaginaire * cos(angle);
    partieReel = re_temp;
    partieImaginaire = im_temp;
}
