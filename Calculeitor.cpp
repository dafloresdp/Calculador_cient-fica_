#include <iostream>
#include <cmath>
#include <string>
#include <stdlib.h>
#include <limits>
using namespace std;


void aritbasic()
{
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
    while (num1!='#');
}


void powers()
{
    double b, p, result;

    cout << " \nHas seleccionat la Calculadora de potencies." << endl;
    cout<<"Indica la base seguida de un exponent. Pots tancar aquesta funcio amb #" <<endl;

    do
    {

        cin >> b;
        {
            cin >> p;
            result = pow(b, p);
            cout <<b<<"^"<<p<<" = "<< result << endl;
            cin.clear();
        }


if (!(cin>> b or '#'))
        {
            cerr << "Error: Valor incorrecte. Si us plau, introdueix un valor valid. Pots tancar amb el comandament #." << endl;
            cin.clear();

        }

    }
    while (b !='#');
}







void roots()
{
    cout << "\nHas seleccionat la Calculadora d'arrels." << endl;
    cout << "Indica el radicand seguit de l'index. Pots tancar aquesta funcio amb el comandament #." << endl;

    while (true)
    {
        double radicand, index, resultat;


        // radicand i index

        cin >> radicand;
        if (radicand == '#') break;

        cin >> index;
        if (index == 2)
        {
            resultat = pow(radicand, 1 / index);
            cout<< "L'arrel quadrada de " << radicand << " es: " << resultat << endl;

        }
        if (index == 3)
        {
            resultat = pow(radicand, 1 / index);
            cout << "L'arrel cubica de " << radicand << " es: " << resultat << endl;
        }


        if (radicand < 0 && ((int)index) % 2 == 0)
        {
            cerr << "Error: el radicand no pot ser negatiu." << endl;
        }
        else if (index>=4)
        {
            resultat = pow(radicand, 1 / index);
            cout << "L'arrel " << index << "a de " << radicand << " es: " << resultat << endl;
        }
    }
}




void pitrs()
{
    cout << "\nHas seleccionat el Teorema de Pitagores." << endl;
    cout << "Indica que vols calcular: la mida del catet (C) o la de la hipotenusa (H). Seguidament, el programa et preguntara per les dades necessaries." << endl;
    char opcio;
    cin >> opcio;

    if (opcio == 'H' || opcio == 'h')
    {
        cout << "Vols calcular la hipotenusa. Introdueix la mida dels catets separada per un espai." << endl;

        double catet1, catet2;
        cin >> catet1 >> catet2;

        double hipotenusa = sqrt(pow(catet1, 2) + pow(catet2, 2));

        cout << "Catet1 = " << catet1 << ", Catet2 = " << catet2 << ", Hipotenusa = " << hipotenusa << endl;
    }
    if (opcio == 'C' || opcio == 'c')
    {
        cout << "Vols calcular el catet. Introdueix la mida de l’altre catet i de la hipotenusa separades per un espai." << endl;

        double catet1, hipotenusa;
        cin >> catet1 >> hipotenusa;

        double catet2 = sqrt(pow(hipotenusa, 2) - pow(catet1, 2));

        cout << "Catet1 = " << catet1 << ", Catet2 = " << catet2 << ", Hipotenusa = " << hipotenusa << endl;

        }
        else if  (opcio == '#') {

          cin.clear();
    }
    else
    {
        cerr << "Error: valor incorrecte. Indica que vols calcular: la mida del catet (C) o la de la hipotenusa (H). Seguidament, el programa et preguntara per les dades necessaries." << endl;
    }






    while (opcio!= '#');
}



void ecuaciones()
{
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



int main ()
{

    char opcion;

    cout << "Benvingut/da a la Calculadora Multifuncional!" << endl;



    do
    {
        cout << "Calculadora Multifuncional: Indica la següent operació o escriu 'A' per veure les instruccions." << endl;
        cout << "\nSelecciona una opcio:" << endl;
        cout << "1: Calculadora aritmetica basica" << endl;
        cout << "2: Calculadora de potencies" << endl;
        cout << "3: Calculadora d'arrels" << endl;
        cout << "4: Teorema de Pitagores" << endl;
        cout << "5: Calculadora d'equacions lineals (1 incognita)" << endl;
        cout << "#: Fi del programa" << endl;
        cout << "Escriu 'A' per veure aquestes instruccions de nou." << endl;


        cin >> opcion;

        switch(opcion)
        {


        case '1':
            aritbasic ();
            break;

        case '2':
            double b;
            powers ();
            break;

        case '3':
            roots ();
            break;
        case '4':
            pitrs ();
            break;

        case '5':
            ecuaciones ();
            break;

        case 'A':
            break;


        case '#':
            cout << "Adeu i gracies!" << endl;
            break;

        default:
            cerr << " Error: Valor incorrecte. Si us plau, introdueix un valor valid. Escriu 'A' per veure les instruccions de nou." << endl;
            break;
        }

    }
    while (opcion != '#');
    return 0;
}
