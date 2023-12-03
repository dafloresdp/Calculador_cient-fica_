#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char opcion;
    bool mostrarInstrucciones = true;

    cout << "Benvingut/da a la Calculadora Multifuncional!" << endl;

    do {
        if (mostrarInstrucciones) {
            cout << "\nSelecciona una opció:" << endl;
            cout << "0: Menú principal" << endl;
            cout << "1: Calculadora aritmètica bàsica" << endl;
            cout << "2: Calculadora de potències" << endl;
            cout << "3: Calculadora d'arrels" << endl;
            cout << "4: Teorema de Pitàgores" << endl;
            cout << "5: Calculadora d'equacions lineals (1 incògnita)" << endl;
            cout << "#: Fi del programa" << endl;
            cout << "Escriu 'A' per veure aquestes instruccions de nou." << endl;
        }

        cout << ">> ";
        cin >> opcion;

        if (opcion == '0') {
            cout << "\nHas seleccionat el Menú principal." << endl;
            // Codi per a la funcionalitat 0
        } else if (opcion == '1') {
            cout << "\nHas seleccionat la Calculadora aritmètica bàsica." << endl;
            // Codi per a la funcionalitat 1
            do {
                cout << "Indica la teva operacio: suma (S), resta (R), multiplicacio (M), divisio (D) seguida dels 2 nombres a operar. Pots tancar aquesta funcio amb el commandament #." << endl;
                bool errorMostrado = false;
                char operacio;

                do {
                    //char operacio;
                    cin >> operacio;

                    if (operacio == '#') {
                        break;
                    }

                    double num1, num2, resultat;

                    if (operacio == 'S') {
                        cin >> num1 >> num2;
                        resultat = num1 + num2;
                        cout << num1<<"+"<<num2<<" = "<<resultat << endl;
                        errorMostrado = false;
                    } else if (operacio == 'R') {
                        cin >> num1 >> num2;
                        resultat = num1 - num2;
                        cout << num1<<"-"<<num2<<" = "<<resultat << endl;
                        errorMostrado = false;
                    } else if (operacio == 'M') {
                        cin >> num1 >> num2;
                        resultat = num1 * num2;
                        cout <<num1<<"*"<<num2<<" = "<< resultat << endl;
                        errorMostrado = false;
                    } else if (operacio == 'D') {
                        cin >> num1 >> num2;
                        if (num2 != 0) {
                            resultat = num1 / num2;
                            cout <<num1<<"/"<<num2<< " = "<< resultat << endl;
                            errorMostrado = false;
                        } else {
                            cout << "Error: Divisio per zero." << endl;
                            errorMostrado = true;
                        }
                    } else {
                        if (!errorMostrado) {
                            cout << "Error: Valor incorrecte. Si us plau, introdueix un valor valid. Escriu 'A' per veure les instruccions de nou." << endl;
                            errorMostrado = true;
                        }
                    }
                } while (operacio != '#');// ESTE!!!!!
            } while (opcion != '#');
        // FI DE L'OPERACIÓ 1 =====================================================================================

        } else if (opcion == '2') {
            cout << "\nHas seleccionat la Calculadora de potències." << endl;
            cout<<"Indica la base seguida de l’exponent. Pots tancar aquesta funcio amb el comandament #."<<endl;

            // Codi per a la funcionalitat 2
                //int pairs;
                //cin >> pairs;

               // for (int i = 0; i < pairs; ++i) {

                    double b, p, result;
                    do {
                        cin >> b;
                        //if (tmp == '#') break;
                        cin >> p;
                        result = pow(b, p);
                        cout <<b<<"^"<<p<<" = "<< result << endl;
                    } while (b != '#');
                   // else{
                   //     cout<<"Error: Valor incorrecte. Si us plau, introdueix un valor valid. Escriu 'A' per veure les instruccions de nou."<<endl;
                   // }
                //}


        } else if (opcion == '3') {
            // Codi per a la funcionalitat 3
            cout << "\nHas seleccionat la Calculadora d'arrels." << endl;
            cout << "Indica el radicand seguit de l'index. Pots tancar aquesta funcio amb el comandament #." << endl;

            while (true) {
                double radicand, index, resultat;

                // radicand i index
                cout << ">> ";
                cin >> radicand;
                if (radicand == '#') break;

                cin >> index;

                if (radicand < 0 && ((int)index) % 2 == 0) {
                    cout << "Error: el radicand no pot ser negatiu quan l'índex es parell." << endl;
                } else {
                    resultat = pow(radicand, 1 / index);
                    cout << "L'arrel " << index << "a de " << radicand << " es: " << resultat << endl;
                }
            }
        } else if (opcion == '4') {
             // Codi per a la funcionalitat 4
            cout << "\nHas seleccionat el Teorema de Pitàgores." << endl;
            cout << "Indica que vols calcular: la mida del catet (C) o la de la hipotenusa (H). Seguidament, el programa et preguntara per les dades necessaries." << endl;
            char opcio;
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
                } else
                    cout << "Error: valor incorrecte. Indica que vols calcular: la mida del catet (C) o la de la hipotenusa (H). Seguidament, el programa et preguntara per les dades necessaries." << endl;
            } else if (opcio == 'A' || opcio == 'a') {
                // Muestra las instrucciones nuevamente
                cout << "Instruccions: ..." << endl;
             else if (opcio == '#') {
                break;
            } else {
                cout << "Error: Opcio incorrecta. Si us plau, introdueix una opcio valida." << endl;
            }
            }
    }

        } else if (opcion == '5') {
            cout << "\nHas seleccionat la Calculadora d'equacions lineals (1 incògnita)." << endl;
            // Codi per a la funcionalitat 5
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

        } else if (opcion == '#') {
            cout << "\nFi del programa. Adeu i gràcies!" << endl;
        } else if (opcion == 'A' || opcion == 'a') {
            mostrarInstrucciones = true;
        } else {
            cout << "\nError: Valor incorrecte. Si us plau, introdueix un valor vàlid. Escriu 'A' per veure les instruccions de nou." << endl;
            mostrarInstrucciones = false;
        }

    } while (opcion != '#');

    return 0;
}
