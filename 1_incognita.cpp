#include <iostream>
using namespace std;

int main() {
    while (true) {
        cout << "Calculadora Multifuncional: Indica la següent operacio o escriu 'A' per veure les instruccions de nou." << endl;

        char opcio;
        cin >> opcio;

        if (opcio == '#') {
            break;
        } else if (opcio == '5') {
            cout << "Has seleccionat la Calculadora d’equacions lineals (1 incognita)" << endl;
            cout << "Indica tots els termes de l’equacio, inclosa la igualtat (=) cadascuna en una linia nova. Quan hagis acabat d’escriure l’equacio, indica-ho amb un punt ‘.’ Pots tancar aquesta funcio amb el comandament #." << endl;

            double q = 0;  // Coeficient inicialitzat a 0
            double c = 0;  // Constant inicialitzada a 0
            char input;

            while (true) {
                cin >> input;

                if (input == '#') {
                    break;
                } else if (input == '.') {
                    if (q == 0) {
                        if (c == 0) {
                            cout << "Equacio amb infinites solucions." << endl;
                        } else {
                            cout << "Equacio sense solucio." << endl;
                        }
                    } else {
                        cout << "Solucio: x = " << -c / q << endl;
                    }
                    break;
                } else if (input == '=') {
                    cout << "x" << endl;
                } else if (input == 'x') {
                    cin >> q;
                } else {
                    cin.putback(input);
                    cin >> c;
                }
            }
        } else {
            cout << "Error: Valor incorrecte. Si us plau, introdueix un valor valid. Escriu 'A' per veure les instruccions de nou." << endl;
        }
    }

    cout << "Fi del programa. Adeu i gracies!" << endl;

    return 0;
}



/*INTENT NÚMERO 2
    #include <iostream>
    #include <stdlib>
    #include <cmath>
    
    using namespace std;

int main() {


    cout << "Has seleccionat la Calculadora d’equacions lineals (1 incognita)" << endl;
    cout << "Indica tots els termes de l’equacio, inclosa la igualtat (=) cadascuna en una linia nova. Quan hagis acabat d’escriure l’equacio, indica-ho amb un punt ‘.’ Pots tancar aquesta funcio amb el comandament #." << endl;

    double q = 0;  // Coeficient inicialitzat a 0
    double c = 0;  // Constant inicialitzada a 0
    char input;

    while (true)
    {
        cin >> input;


        if (input == '.')
        {
            if (q == 0)
            {
                if (c == 0)
                {
                    cout << "Equacio amb infinites solucions." << endl;
                }
                else
                {
                    cout << "Equacio sense solucio." << endl;
                }
            }
            else
            {
                cout << "Solucio: x = " << -c / q << endl;
            }
            break;
        }
        else if (input == '=')
        {
            cout << "x" << endl;
        }
        else if (input == 'x')
        {
            cin >> q;
        }
        else
        {
            cin.putback(input);
            cin >> c;
        }
        while (q != '#');
    }

}


