/*
Petar mnogo obicha da reshava zadachi, koito zatrudnyavat negovite sauchenitsi.
Eto edna takava zadacha:
Dadeni sa tri tseli neotritsatelni chisla a, b, c. Neobhodimo e da se podredyat v
nyakakav red i mezhdu tyah
da se postavyat znatsite + (za sabirane), - (za izvazhdane) ili * (za umnozhenie), taka che
kato se presmetne polucheniya aritmetichen izraz negovata stoynost da e vazmozhno nay-malkata.
Mezhdu vsyaka dvoyka sasedni chisla mozhe da ima samo edin znak. Vseki znak mozhe da se izpolzva
samo edin pat.

+ min - mid * max
*/

#include <iostream>

using namespace std;

int main()
{
   int temp, n;
   int a[3];

   cout << "A: B: C:" << endl;

   for (int i = 0; i < 3; i++)
   {
      cin >> a[i];
   }

   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         if (a[i] < a[j])
         {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
         }
      }
   }

   if (a[0] == a[1] && a[1] == 0)
   {
      cout << "Answer: " << -a[2] << endl;
   }
   else
   {
      cout << "Answer: " << (a[0] - a[1]) * a[2] << endl;
   }

   return 0;
}