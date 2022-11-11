/*
Zadaden e ednomeren masiv ot tseli chisla A0, A1,...,An-1. Da se sastavi algoritam i
napishe programa, koyato sazdava nov masiv a0, a1,..., an-1, kato stoynostta na ai e ravna na
sredno-aritmetichno na nechetnite tsifri na Ai. Predpolaga se, che vav vsyako chislo ima pone
edna nechetna tsifra.

--Opisanie
    Programata celi da se wywede masiv ot celi chisla i da izchisli
sredno aritmetichnata soinost na cifrite na wsqko chislo.
    Sys wsqko wywedeno chislo w A[] programata prowerq dali cifrite sa mu 
nechetni i ako sa gi zapazwa. Sled izcherpwaneto na cifrite w chisloto
nechetnite se razdelqt na broqt im i rezultat se zapazwa w a[].


--Promenlivi
    -A[]   - Specifikaciqta iziska imeto, w tozi masiv se zapazwat chislata wywedeni
             ot potrebitelq.
    -a[]   - Specifikaciqta iziska imeto, w tozi masiv se zapazwat srednite stoinosti
             na nechetnite cifri ot A[].
    -n     - Broqt na chislata koito potrebitelq wywejda.
    -temp  - (temporary) Izpolzwa se za wremenna pamet.
    -count - Otbroqwa broq na nechetnite cifri.
    -avg   - Zapazwa nechetnite cifri za da moje da se razdelqt na broqt im.

--Footer

Autor: KK
Date : 07.11.22                           Last Modified: 11.11.22
*/

#include <iostream>

using namespace std;

int main()
{
    int A[50], n, temp, count = 0, avg = 0;
    float a[50];

    cout << "Number count: ";                    //Wywejdame broqt chisla
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        cout << "A[" << i + 1 << "]: ";          //Wywejdame samite chisla
        cin >> A[i];
        temp = A[i];

        while (temp != 0)
        {
            if ((temp % 10) % 2 == 1)            //Prowerqwame za nechetni cifri
            {
                avg += temp % 10;                //Sybirame nechetnite cifri i otbelqzwame broqt im
                count++;                         
            }
            temp = temp / 10;                    
        }

        a[i] = avg / count;                      //Namirame sredno aritmetichnoto za wywedenoto chislo
        count = 0;
        avg = 0;
    }
    cout << endl
         << "Anwser: " << endl;
    for (int i = 0; i < n; i++)                  //Izwejdame na ekrana sydyrjanieto na a[]
    {
        cout << "a[" << i + 1 << "]: " << a[i] << endl;
    }

    return 0;
}