/*

Da se sastavi algoritam i napishe programa, koyato vavezhda ot
klaviaturata nyakolko dumi, napisani na edin red i razdeleni s edin interval. Sled
tova programata namira i izvezhda nay-dalgata duma ot vavedenite. Ako ima nyakolko
nay-dalgi dumi, izvezhda gi vsichkite.

--Opisanie


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
   string input;
   int wdCount = 1, chCount[10] = {0}, max = -1, sum = 0;

   cout << "Input: ";
   getline(cin, input);

   for (int i = 0; i <= input.length(); i++)
   {

      if (input[i] == ' ' || i == input.length())
      {
         sum += chCount[wdCount - 1];

         chCount[wdCount] = i - sum;
         wdCount++;
      }
   }
   sum = 0;
   chCount[1] += 1;
   for (int i = 0; i < wdCount; i++)
   {
      if (max < chCount[i])
      {
         max = chCount[i];
      }
   }
   for (int i = 0; i < wdCount; i++)
   {

      if (chCount[i] == max)
      {
         for (int j = 0; j < i; j++)
         {
            sum = sum + chCount[j];
         }

         for (int j = 0; j < chCount[i]; j++)
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