include <iostream>
include <cmath>
using namespace std;
int main () {
    cout << "\nHas seleccionat la Calculadora d'arrels." << endl;
    cout << "Indica el radicand seguit de l'index. Pots tancar aquesta funcio amb el comandament #." << endl;

    while (true)
    {
        double radicand, index, resultat;

        // radicand i index
        cout << ">> ";
        cin >> radicand;
        if (radicand == '#') break;

        cin >> index;

        if (radicand < 0 && ((int)index) % 2 == 0)
        {
            cerr << "Error: el radicand no pot ser negatiu." << endl;
        }
        else
        {
            resultat = pow(radicand, 1 / index);
            cout << "L'arrel " << index << "a de " << radicand << " es: " << resultat << endl;
        }
    }
}

