/*
Sastavete algoritam i napishete programa, koyato vavezhda ot klaviaturata
dva niza, sastaveni ot glavni latinski bukvi, vseki s dalzhina nay-mnogo 15 znaka.
Ako dvata niza imat pone edna obshta bukva, programata tryabva da otpechata
horizontalno na ekrana parviya ot nizovete, a vtoriya – vertikalno, bez da ima prazni
pozitsii mezhdu bukvite im, taka che dvata niza da se presekat tam, kadeto obshtata
bukva se sreshta za parvi pat i v dvata niza. Ako dvata niza nyamat nito edna obshta
bukva, togava programata tryabva da otpechata horizontalno parviya niz, a ot
pozitsiyata, neposredstveno namirashta se pod pozitsiyata sledvashta sled poslednata
bukva na parviya niz – da otpechata vertikalno nadolu vtoriya niz.

--Opisanie
    Celta na programata e pri wywejdane na dwe dumi ot potrebitelq w standartniq whod
da se izwedyt dwete dumi obratno, krystosani na  pyrwiqt powtarqsh se simwul ili pri lipsa
na takyw da se izwede pyrwata duma horizontalno a wtorata wertikalno.

    Ima ogranichenie che nito edna ot dumite po otdelno ne moje da e po-ydlga ot 15 simwula.

    W programta se wywejdat dwe dumi, pri koeto se prowerqwa dali nqkoi simwul ot wtorata duma
sywpada sys simwul ot pyrwata duma. Pri sywpadenie programata zapiswa nomerata na simwula koito 
sywpada w dwete dumi. Na standartniq izhod se izpiswa wtorata duma vertikalno dokato programa
stigne do tochkata w koqto simwulite se sywpadat i izpishe pyrwata duma horizontalno. W posledstwie
se doizpiswa wtorata duma. W granichniqt sluchai w koito dumite nqmat sywpadasht se simwul na 
standartniq izhod se izwevda pyrwata dum napisana horizontalno posledwana ot wtorata izpisana
wertikalno.

--Promenlivi
    -input1/2 - Zapiswa whoda na potrebitelq, toest duma 1 i duma 2
    -space    - Zapazwa horizontalnoto raztoqnie na koeto trqbwa da se izpishe duma
    -rows     - Zapazwa vertikalnoto raztoqnie na koeto trqbwa da se izpishe duma
    -match    - Logicheski kluch, koite se deaktiwira pri namirane na sywpadenie 


--Footer

Autor: KK
Date : 07.11.22                           Last Modified: 11.11.22
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input1, input2;
    int space = 0, rows = 0;
    bool match = true;

    cout << "\nInput I: ";                              //Wywejdane na danni ot potrebitelq
    getline(cin, input1);
    cout << "Input II: ";
    getline(cin, input2);

    if (input1.length() <= 15 && input2.length() <= 15)         //Prowerka dali dumite sa po-dylgi ot 15 simwula
    {

        cout << endl;
        for (int i = 0; i < input2.length() && match; i++)        //Mechanisym za namirane na sywpadeniq w dumite
        {
            for (int j = 0; j < input1.length() && match; j++)
            {
                if (input2[i] == input1[j])                       //Izpylnqwa se pri namerno sywpadenie
                {
                    space = j;
                    rows = i;
                    match = false;
                }
            }
        }

        if (match)                                                //Izpylnqwa se pri lipsa na sywpadenie
        {
            cout << input1 << endl;                               //Izwejda pyrwata duma
            space = input1.length();
        }
        for (int i = 0; i < input2.length(); i++)
        {

            if (i == rows && !match)                              //Izpylnqwa se pri nalichie na sywpadenie
            {                                                     //i e na prawilnoto verticalno raztoqnie
                cout << input1;
            }
            else

            {
                for (int j = 0; j < space; j++)                   //Izwejda prawilnoto horizontalno raztoqnie
                {                                                 //i po edin simwul ot wtorata duma za wsqko
                    cout << ' ';                                  //zawyrtane na gorniqt cikyl
                }
                cout << input2[i];
            }
            cout << endl;
        }

       
    }
    else
        cout << "\nWords are too long!\n";                        //Izwejda greshka pri po-golemi dumi ot 15 simwula

    return 0;
}