#include <iostream>
#include <cmath>

using namespace std;

void calculadoraArrels() {
    cout << "Has seleccionat la Calculadora d'arrels." << endl;
    cout << "Indica el radicand seguit de l'index. Pots tancar aquesta funcio amb el comandament #." << endl;

    while (true) {
        double radicand, index, resultat;

        // radicand i index
        cout << ">> ";
        cin >> radicand;

        if (radicand == '#') {
            break;
        }

        cin >> index;

        if (radicand < 0 && ((int)index) % 2 == 0) {
            cout << "Error: el radicand no pot ser negatiu quan l'índex es parell." << endl;
        } else {

            resultat = pow(radicand, 1 / index);

            cout << "L'arrel " << index << "a de " << radicand << " es: " << resultat << endl;
        }
    }
}

int main() {
    while (true) {
        cout << "Calculadora Multifuncional: Indica la següent operacio o escriu 'A' per veure les instruccions de nou." << endl;

        char opcio;
        cin >> opcio;

        if (opcio == '3') {
            calculadoraArrels();
        } else if (opcio == '#') {
            break;
        } else {
            cout << "Error: Opcio incorrecta. Si us plau, introdueix una opcio valida." << endl;
        }
    }

    return 0;
}

