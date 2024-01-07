#include <iostream>
#include <sstream>
#include <string>

using namespace std;
int main()
{
    double qt_x = 0.0;
    double ctt = 0.0;
    bool right = false;

    string entrada;
    while (getline(cin, entrada) && entrada != "." && entrada != "#" && entrada != "A")
    {
        istringstream stream(entrada);

        string terme;
        while (stream >> terme)
        {
            if (terme == "x")
            {
                qt_x += (right? -1.0 : 1.0);
            }
            else if (terme == "=")
            {
                right = true;
            }
            else
            {
                size_t pos;
                double qt_term;
                if ((pos = terme.find('x')) != string::npos)
                {
                    string coef_str = terme.substr(0, pos);
                    stringstream term_ss(coef_str);
                    if (term_ss >> qt_term)
                    {
                        qt_x += (right ? -1.0 : 1.0) * qt_term;
                    }
                    else
                    {
                        cout << "Error: Valor incorrecte. Si us plau, introdueix un valor valid. Escriu 'A' per veure les instruccions de nou." << terme << endl;
                        return 1;
                    }
                }
                else
                {
                    stringstream term_ss(terme);
                    if (term_ss >> qt_term)
                    {
                        ctt += (right ? -1.0 : 1.0) * qt_term;
                    }
                    else
                    {
                        cout << "Error: Valor incorrecte. Si us plau, introdueix un valor valid. Escriu 'A' per veure les instruccions de nou." << terme << endl;
                        return 1;
                    }
                }
            }
        }
    }

    cout << "El terme 'x' es igual a: " << ctt / qt_x << endl;

    return 0;
}

