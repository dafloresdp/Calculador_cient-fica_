#include <iostream>
#include <cmath>

using namespace std;

int main(){
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

