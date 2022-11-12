/*
Zadacha:
Petar mnogo obicha da reshava zadachi, koito zatrudnyavat negovite sauchenitsi.
Eto edna takava zadacha:
Dadeni sa tri tseli neotritsatelni chisla a, b, c. Neobhodimo e da se podredyat v
nyakakav red i mezhdu tyah
da se postavyat znatsite + (za sabirane), - (za izvazhdane) ili * (za umnozhenie), taka che
kato se presmetne polucheniya aritmetichen izraz negovata stoynost da e vazmozhno nay-malkata.
Mezhdu vsyaka dvoyka sasedni chisla mozhe da ima samo edin znak. Vseki znak mozhe da se izpolzva
samo edin pat.



--Opisanie:
Programat celi pri wywejdane na tri celi polojitelni chisla da izwede na ekrana sled presmetqne na 
aritmetichen izraz wyzmojno nai-malkata stoinost. Programata moje da polzwa '+', '-' i '*', no samo
po wednyj.

Programata priema prez standartniq vhod danni ot potrebitelq kato te trqbwa da bydat
tri celi polovitelni chisla. Programata sortira whoda na potrebitelq po golemina w masiv.
Na chislata im se prilaga formola koqto namira naj-malkata wyzmojna stoinost.
 "+ min - mid * max"

Ima chasten sluchai pri wywejdane na 2 ili poweche 0-vi stoinosti, kydeto naj malkota stoinost e
naj-golqmoto chislo s '-' pred nego.


--Promenliwi:

temp - (temporary) - izpolzwa se kato wremenno zapazi chislo s cel premestaneto mu w masiv;

a[3] - zapazwa stoinostitie wywedeni ot potrebitelq. Na po-kysen etap te se sortirat po golemina w nego
       kato nai-malkata, sredna i naj-golqma stoinost sa syotwetno: a[0], a[1], a[2] ;


--Footer:

Avtor: KK
Data : 07.11.22                               Posledno modificiran: 11.11.22
*/

#include <iostream>

using namespace std;

int main()
{
   int temp;
   int a[3];

   cout<<"Wywedete "<< "A: B: C:" << endl;   //Razqsnqwasht text za ochakwaniq whod

   for (int i = 0; i < 3; i++)               //Priemane na whoda
   {
      cin >> a[i];
   }

   for (int i = 0; i < 3; i++)               //Sortirane na chislata po golemina
   {                                         //min: a[0], mid: a[1], max: a[2]
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

   if (a[0] == a[1] && a[1] == 0)           //Prowerqwame za granichen sluchai za dwe 0-vi stoinosti
   {
      cout << "Answer: " << -a[2] << endl;  //Izwejdame na ekrana naj-niskata wyzmmojna stoinost
   }
   else                                     
   {
      cout << "Answer: " << (a[0] - a[1]) * a[2] << endl;
   }

   return 0;
}