#include <iostream>

using namespace std;

int main() {

    double num1, num2, resultat;
    cout << "Has seleccionat la Calculadora aritmetica basica." << endl;
    cout << "Indica la teva operacio: suma (S), resta (R), multiplicacio (M), divisio (D) seguida dels 2 nombres a operar. Pots tancar aquesta funcio amb el commandament #." << endl;

    bool errorMostrado = false;

    while (true)
    {
        char operacio;
        cin >> operacio;

        if (operacio == '#')
        {
            break;
        }

        ;

        if (operacio == 'S')
        {
            cin >> num1 >> num2;
            resultat = num1 + num2;
            cout << num1 << "+" << num2 << "= "<< resultat << endl;
            errorMostrado = false;
        }
        else if (operacio == 'R')
        {
            cin >> num1 >> num2;
            resultat = num1 - num2;
            cout << num1 << "-" << num2 << "= " << resultat << endl;
            errorMostrado = false;
        }
        else if (operacio == 'M')
        {
            cin >> num1 >> num2;
            resultat = num1 * num2;
            cout << num1 << "*" << num2 << "= " << resultat << endl;
            errorMostrado = false;
        }
        else if (operacio == 'D')
        {
            cin >> num1 >> num2;
            if (num2 != 0)
            {
                resultat = num1 / num2;
                cout << num1 << "/" << num2 << "= " << resultat << endl;
                errorMostrado = false;
            }
            else
            {
                cout << "Error: Divisio per zero." << endl;
                errorMostrado = true;
            }
        }
        else
        {
            if (!errorMostrado)
            {
                cout << "Error: Valor incorrecte. Si us plau, introdueix un valor valid. Escriu 'A' per veure les instruccions de nou." << endl;
                errorMostrado = true;
            }
        }
    }
    }
