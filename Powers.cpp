#include <iostream>
#include <cmath>

using namespace std;

// Funci�n para la calculadora de pot�ncies
void calculadoraPotencies() {
    cout << "Has seleccionat la Calculadora de potencies." << endl;
    cout << "Indica la base seguida de l'exponent. Pots tancar aquesta funcio amb el comandament #." << endl;

    while (true) {
        char opcio;
        cin >> opcio;

        if (opcio == '#') {
            break;
        }

        double base, exponent;
        cin >> base >> exponent;

        if (opcio == 'a') {
            cout << "Error: Valor incorrecte. Si us plau, introdueix un valor valid. Escriu 'A' per veure les instruccions de nou." << endl;
        } else {
            cout << base << "^" << exponent << " = " << pow(base, exponent) << endl;
        }
    }
}

int main() {
    while (true) {
        cout << "Calculadora Multifuncional: Indica la seg�ent operacio o escriu 'A' per veure les instruccions de nou." << endl;

        char opcio;
        cin >> opcio;

        if (opcio == 'A') {
            calculadoraPotencies();
        } else if (opcio == '#') {
            break;
        } else {
            cout << "Error: Opcio incorrecta. Si us plau, introdueix una opcio valida." << endl;
        }
    }

    return 0;
}

