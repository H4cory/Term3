/*

Da se sastavi algoritam i napishe programa, koyato vavezhda ot
klaviaturata nyakolko dumi, napisani na edin red i razdeleni s edin interval. Sled
tova programata namira i izvezhda nay-dalgata duma ot vavedenite. Ako ima nyakolko
nay-dalgi dumi, izvezhda gi vsichkite.

--Opisanie
   Celta na programata e da pozwoli na potrebitel da wywedete poredica ot dumi na 
edin red otdeleni s prazno mqsto (' '), a pogramata da izwede nai-dylgata duma.
Pri nqkolko dumi s ednakwa naj-golqma dyljina da se izkarat wsichki dumi.
   Na standartniqt whod se wywejda red ot dumi razdeleni sys raztoqnie. Programta
prowerqwa za prazni raztoqniq wyw whodnite danni. Pri namereno takowa se zapiswa 
dyljinata na dumata, kato ot broqcha koito prowerqwa wseki simwul ot whodnite danni
se izwajda dyljinata na predishno namereni dumi. Sled otchitaneto na broqt na dumite
i tqhnata dyljina, se namira nai-golqmata stoinost ot dyljinite. W posledstwie se
izwejdat na ekrana wsichki dumi s nai-golqma dyljina.

   *1 - Pri razdelqneto na dumite i namiraneto na dyljinata im se zapazwa edno 
        prazno mqsto w nachaloto na dumata. Pyrwata duma poradi lipsa na prazno
        mqsto pred neq trqbwa da se dobawi rychno.

--Promenlivi
   -wdCount   - Word Count - Zapiswa broqt na namerenite dumi.
   -chCount[] - Charachter count - Zapiswa broqt na simwulite w namereni dumi.
   -max       - Zapazwa stoinostta na nai-golemiqt broi ot simwuli.
   -sum       - Operatiwna promenliva polzwana glawno za sumirane na dyljina ot dumi

--Footer

Autor: KK
Date : 07.11.22                           Last Modified: 12.11.22
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
   string input;
   int wdCount = 1, chCount[10] = {0}, max = -1, sum = 0;

   cout << "Input: ";               
   getline(cin, input);                                     //Wywejda se red ot posledowatelni dumi

   for (int i = 0; i <= input.length(); i++)                //Prowerqwa se wseki edin simwul za prazno raztoqnie
   {

      if (input[i] == ' ' || i == input.length())           //Pri namereno sywpadenie se zapiswa dyljinata
      {                                                     //na dumata i se otbroqwa duma
         sum += chCount[wdCount - 1];

         chCount[wdCount] = i - sum;
         wdCount++;
      }
   }
   sum = 0;                                                 //Pyrwata namerena duma se dobawq edno
   chCount[1] += 1;                                         //za izrawnqwane na praznite mesta *1


   for (int i = 0; i < wdCount; i++)                        //Algoritym za namirane na broq na 
   {                                                        //simwulite w naj-dylgata duma
      if (max < chCount[i])
      {
         max = chCount[i];
      }
   }

   for (int i = 0; i < wdCount; i++)                        //Algoritym za izwejdane na ekrana
   {                                                        //na naj-dylite dumi

      if (chCount[i] == max)
      {
         for (int j = 0; j < i; j++)                        //Namirame raztoqnieto na koeto se 
         {                                                  //namira izbranata duma
            sum = sum + chCount[j];
         }

         for (int j = 0; j < chCount[i]; j++)               //Izwejda dumata na ekrana
         {
            cout << input[sum];
            sum++;
         }
      }
      sum = 0;
   }

   cout << endl;

   return 0;
}