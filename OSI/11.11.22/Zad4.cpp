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

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input1, input2;
    int space = 0, rows = 0;
    bool match = true;

    cout << "\nInput I: ";
    getline(cin, input1);
    cout << "Input II: ";
    getline(cin, input2);

    if (input1.length() <= 15 && input2.length() <= 15)
    {

        cout << endl;
        for (int i = 0; i < input2.length() && match; i++)
        {
            for (int j = 0; j < input1.length() && match; j++)
            {
                if (input2[i] == input1[j])
                {
                    space = j;
                    rows = i;
                    match = false;
                }
            }
        }

        if (match)
        {
            cout << input1 << endl;
            space = input1.length();
        }
        for (int i = 0; i < input2.length(); i++)
        {

            if (i == rows && !match)
            {
                cout << input1;
            }
            else

            {
                for (int j = 0; j < space; j++)
                {
                    cout << ' ';
                }
                cout << input2[i];
            }
            cout << endl;
        }

       
    }
    else
        cout << "\nWords are too long!\n";

    return 0;
}