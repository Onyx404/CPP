#include <iostream>
#include <cmath>
#include "complex2d.h"

using namespace std;

int main() {

    Complex2D z1(3, 4);
    Complex2D z2(1, 2);
    Complex2D z3(5, 12);

    cout << "Complexe z1 : " << z1.recupererReel() << " + " << z1.recupererImaginaire() << "i" << endl;
    cout << "Complexe z2 : " << z2.recupererReel() << " + " << z2.recupererImaginaire() << "i" << endl;
    cout << "Complexe z3 : " << z3.recupererReel() << " + " << z3.recupererImaginaire() << "i" << endl;

    cout << "Module de z1 : " << z1.magnitude() << endl;
    cout << "Module de z2 : " << z2.magnitude() << endl;
    cout << "Module de z3 : " << z3.magnitude() << endl;

    Complex2D somme = z1 + z2;
    cout << "z1 + z2 = " << somme.recupererReel() << " + " << somme.recupererImaginaire() << "i" << endl;

    Complex2D difference = z1 - z2;
    cout << "z1 - z2 = " << difference.recupererReel() << " + " << difference.recupererImaginaire() << "i" << endl;

    Complex2D produit = z1 * z2;
    cout << "z1 * z2 = " << produit.recupererReel() << " + " << produit.recupererImaginaire() << "i" << endl;

    Complex2D quotient = z1 / z2;
    cout << "z1 / z2 = " << quotient.recupererReel() << " + " << quotient.recupererImaginaire() << "i" << endl;

    if (z1 < z3) {
        cout << "z1 est plus petit que z3" << endl;
    }
    if (z2 < z3) {
        cout << "z2 est plus petit que z3" << endl;
    }
    if (z1 > z2) {
        cout << "z1 est plus grand que z2" << endl;
    }

    Complex2D conj_z1 = z1.conjugue();
    cout << "Conjugue de z1 : " << conj_z1.recupererReel() << " + " << conj_z1.recupererImaginaire() << "i" << endl;

    double angle = M_PI / 4;
    Complex2D z1_rotation = z1;
    z1_rotation.rotation(angle);
    cout << "z1 apres rotation de 45 degres : " << z1_rotation.recupererReel() << " + " << z1_rotation.recupererImaginaire() << "i" << endl;

    return 0;
}
