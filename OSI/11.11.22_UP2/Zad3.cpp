/*

V magazin za hranitelni produkti, za vseki produkt se vavezhdat:
    - kod
    - ime
    - myarka
    - edinichna tsena
    - kolichestvo
Da se sastavi algoritam i napishe programa, koyato vavezhda v maisv danni za opredelen broy
produkti i izchislyava nalichnata stoka v parichno izrazhenie.


--Opisanie
    Programata celi da 

--Promenlivi


--Footer

Autor: KK
Date :                            Last Modified:
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string kod[50], ime[50], myarka[50];
    float edTs[50], sum = 0;
    int kol[50], ct = 0;
    bool gate = true;
    string input;

    cout << "\nPress s to stop\n";

    while (gate)
    {
        cout << "\n<----MENU---->\n";
        cout << "\n1. Add a product";
        cout << "\n2. Display all products";
        cout << "\n3. Get Sum";
        cout << "\n-->";
        getline(cin, input);

        switch (input[0])
        {
        case '1':
            cout << "Kod: ";
            getline(cin, kod[ct]);
            cout << "Ime: ";
            getline(cin, ime[ct]);
            cout << "Myarka: ";
            getline(cin, myarka[ct]);
            cout << "Edinichna Cena: ";
            cin >> edTs[ct];
            cout << "Kolichestwo: ";
            cin >> kol[ct];
            cin.ignore();
            ct++;

            break;
        case '2':

            for (int i = 0; i < ct; i++)
            {
                cout << "\nKod: " << kod[i];
                cout << "\nIme: " << ime[i];
                cout << "\nMyarka: " << myarka[i];
                cout << "\nEd. cena: " << edTs[i];
                cout << "\nKolichestwo: " << kol[i];
            }

            break;
        case '3':
            for (int i = 0; i < ct; i++)
            {
                sum += edTs[i] * kol[i];
            }

            cout << "\nAnswer: " << sum << " lv.";
            sum = 0;

            break;
        case 's':
            gate = false;

            break;
        default:
            cerr << "\nWrong input!";
        }
    }

    return 0;
}