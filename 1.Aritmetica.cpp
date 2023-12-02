#include <iostream>

using namespace std;

int main() {
    cout << "Has seleccionat la Calculadora aritmetica basica." << endl;
    cout << "Indica la teva operacio: suma (S), resta (R), multiplicacio (M), divisio (D) seguida dels 2 nombres a operar. Pots tancar aquesta funcio amb el commandament #." << endl;

    while (true) {
        char operacio;
        cin >> operacio;

        if (operacio == '#') {
            break;
        }

        if (operacio == 'S') {
            float num1, num2, resultat;
            cin >> num1 >> num2;
            resultat = num1 + num2;
            cout << resultat << endl;
        }

      if (operacio == 'R') {
          float num1, num2, resultat;

      cin>>num1>>num2;
      resultat= num1-num2;
      cout<<resultat<<endl;
      }
      if (operacio == 'M') {
          float num1, num2, resultat;

      cin>>num1>>num2;
      resultat= num1*num2;
      cout<<resultat<<endl;
      }

        if (operacio == 'M') {
          float num1, num2, resultat;

      cin>>num1>>num2;
      resultat= num1/num2;
      cout<<resultat<<endl;
      }
else {

    cout<<"Error: Valor incorrecte. Si us plau, introdueix un valor valid. A lo millor no has determinat quin tipus d'operació vols fer. Escriu 'A' per veure les instruccions de nou."<<endl;

}
    }
}
