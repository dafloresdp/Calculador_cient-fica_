#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;
int main (){

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

