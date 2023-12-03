#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

void calcularHipotenusa() {
    cout << "Vols calcular la hipotenusa. Introdueix la mida dels catets separada per un espai." << endl;
    cout << ">> ";

    double catet1, catet2;
    cin >> catet1 >> catet2;

    double hipotenusa = sqrt(pow(catet1, 2) + pow(catet2, 2));

    cout << "Catet1 = " << catet1 << ", Catet2 = " << catet2 << ", Hipotenusa = " << hipotenusa << endl;
}

void calcularCatet() {
    cout << "Vols calcular el catet. Introdueix la mida de l’altre catet i de la hipotenusa separades per un espai." << endl;
    cout << ">> ";

    double catet1, hipotenusa;
    cin >> catet1 >> hipotenusa;

    double catet2 = sqrt(pow(hipotenusa, 2) - pow(catet1, 2));

    cout << "Catet1 = " << catet1 << ", Catet2 = " << catet2 << ", Hipotenusa = " << hipotenusa << endl;
}

int main() {
    while (true) {
        cout << "Calculadora Multifuncional: Indica la següent operació o escriu 'A' per veure les instruccions de nou." << endl;
        cout << ">> ";

        char opcio;
        cin >> opcio;

        if (opcio == '4') {
            cout << "Has seleccionat el Teorema de Pitagores." << endl;
            cout << "Indica que vols calcular: la mida del catet (C) o la de la hipotenusa (H). Seguidament, el programa et preguntara per les dades necessaries." << endl;

            cout << ">> ";
            cin >> opcio;

            if (opcio == 'H' || opcio == 'h') {
                cout << "Vols calcular la hipotenusa. Introdueix la mida dels catets separada per un espai." << endl;
                cout << ">> ";

                double catet1, catet2;
                cin >> catet1 >> catet2;

                double hipotenusa = sqrt(pow(catet1, 2) + pow(catet2, 2));

                cout << "Catet1 = " << catet1 << ", Catet2 = " << catet2 << ", Hipotenusa = " << hipotenusa << endl;
            } else if (opcio == 'C' || opcio == 'c') {
                cout << "Vols calcular el catet. Introdueix la mida de l’altre catet i de la hipotenusa separades per un espai." << endl;
                cout << ">> ";

                double catet1, hipotenusa;
                cin >> catet1 >> hipotenusa;

                double catet2 = sqrt(pow(hipotenusa, 2) - pow(catet1, 2));

                cout << "Catet1 = " << catet1 << ", Catet2 = " << catet2 << ", Hipotenusa = " << hipotenusa << endl;
            } else {
                cout << "Error: valor incorrecte. Indica que vols calcular: la mida del catet (C) o la de la hipotenusa (H). Seguidament, el programa et preguntara per les dades necessaries." << endl;
            }
        } else if (opcio == 'A' || opcio == 'a') {
            // Muestra las instrucciones nuevamente
            cout << "Instruccions: ..." << endl;
        } else if (opcio == '#') {
            break;
        } else {
            cout << "Error: Opcio incorrecta. Si us plau, introdueix una opcio valida." << endl;
        }
    }

    return 0;
}
