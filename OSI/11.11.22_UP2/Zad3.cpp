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
    Programata celi da zapazi opredelen broi produkti i tehnite specifikaci kato ime, cena, broi i dr.
Tq trqbwa da presmetne w parichno izrajenie nalichnata stoka.
    Programa e razrabotena s lesno razbiraemo menu za potrebitelq, koeto podkanwa whoda na razlichni danni
za productite. Menuto sydyrja nqkolko funcii: dobawi now product, wij dobaweni producti i izchisli parichnoto
izrajenie ot nalichnata stoka.
    Wsqka edna specifikaciq na produkt se zapazwa w otdelen masiw.


--Promenlivi
    -kod[]    - Zapazwa koda na produkt
    -ime[]    - Zapazwa imeto na produkt
    -myarka[] - Zapazwa wida na myarkata na produkta
    -edTS[]   - (edinichna cena) Zapazwa edinichnata cena
    -kol[]    - (kolichestwo) Zapazwa nalichnoto kolichestwo
    -sum      - Zapazwa obshtoto parichno izrajenie
    -ct       - (count) Zapazwa broqt na productite
    -gate     - (logic gate) Logicheska wrata koqto zatwarq cikyla na programata a s towa i neinata rabota      
    -input    - Zazwa whoda na potrebitelq za opciite ot menuto


--Footer

Autor: KK
Date : 07.11.22                          Last Modified:11.11.22
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

    cout << "\nPress s to stop\n";                  //Poqsnenie za kak se prikluchwa rabotata na programata

    while (gate)
    {
        cout << "\n<----MENU---->\n";               //Menu w koeto sa opisani nalichnite opcii
        cout << "\n1. Add a product";
        cout << "\n2. Display all products";
        cout << "\n3. Get Sum";
        cout << "\n-->";
        getline(cin, input);                        //Whod na izbora na potrebitelq

        switch (input[0])                           //Prowerka na izboryt mu
        {
        case '1':                                   //Opciq za wywejdane na dannite za edin product
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
        case '2':                                  //Opciq za izwejdane na dannite na wsichki producti

            for (int i = 0; i < ct; i++)
            {
                cout << "\nKod: " << kod[i];
                cout << "\nIme: " << ime[i];
                cout << "\nMyarka: " << myarka[i];
                cout << "\nEd. cena: " << edTs[i];
                cout << "\nKolichestwo: " << kol[i];
            }

            break;
        case '3':                                  //Opciq za presmqtane na sumata w parichno izrajenie na 
            for (int i = 0; i < ct; i++)           //nalichnite producti
            {
                sum += edTs[i] * kol[i];
            }

            cout << "\nAnswer: " << sum << " lv.";
            sum = 0;

            break;
        case 's':                                  //Opciq za prikluchwane operaciqta na programata
            gate = false;

            break;
        default:                                   //Chasten sluchai w koito potrebitelq wywedete greshen whod 
            cerr << "\nWrong input!";              //ili opciqta ne syshtestwuwa
        }
    }

    return 0;
}