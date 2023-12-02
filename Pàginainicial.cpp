#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char opcion;

    cout << "Benvingut/da a la Calculadora Multifuncional!" << endl;

    do {
        cout << "\nSelecciona una opció:" << endl;
        cout << "1: Calculadora aritm`etica b`asica" << endl;
        cout << "2: Calculadora de pot`encies" << endl;
        cout << "3: Calculadora d'arrels" << endl;
        cout << "4: Calculadora de logaritmes" << endl;
        cout << "5: Calculadora d'equacions lineals (1 inc`ognita)" << endl;
        cout << "#: Fi del programa" << endl;
        cout << "Escriu 'A' per veure aquestes instruccions de nou." << endl;

        cout << ">> ";
        cin >> opcion;

        switch (opcion) {
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
                cout << "\nHas seleccionat la opci" << (char)162 << " " << opcion << "." << endl;
                cout << "Fi del programa. Adeu i gr`acies!" << endl;
                return 0;  // Termina el programa
            case '#':
                cout << "\nFi del programa. Adeu i gr`acies!" << endl;
                break;
            case 'A':
            case 'a':
                // No hacemos nada, el bucle continuará y mostrará el menú
                break;
            default:
                cout << "\nError: Valor incorrecte. Si us plau, introdueix un valor vàlid. Escriu 'A' per veure les instruccions de nou." << endl;
        }

    } while (opcion != '#');

    return 0;
}
