/*
Zadaden e ednomeren masiv ot tseli chisla A0, A1,...,An-1. Da se sastavi algoritam i
napishe programa, koyato sazdava nov masiv a0, a1,..., an-1, kato stoynostta na ai e ravna na
sredno-aritmetichno na nechetnite tsifri na Ai. Predpolaga se, che vav vsyako chislo ima pone
edna nechetna tsifra.

*/
#include <iostream>

using namespace std;

int main()
{
    int A[50], n, temp, j = 0, avg = 0;
    float a[50];

    cout << "Number count: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        cout << "A[" << i + 1 << "]: ";
        cin >> A[i];
        temp = A[i];

        while (temp != 0)
        {
            if ((temp % 10) % 2 == 1)
            {
                avg += temp % 10;
                j++;
            }
            temp = temp / 10;
        }

        a[i] = avg / j;
        j = 0;
        avg = 0;
    }
    cout << endl
         << "Anwser: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i + 1 << "]: " << a[i] << endl;
    }

    return 0;
}