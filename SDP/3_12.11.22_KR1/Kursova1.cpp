/*
--Specifikaciq
   Daden e podreden spisak ot tseli chisla. Da se sastavi nov spisak, sadarzhasht
chislata, koito se sreshtata samo vednazh v izhodniya spisak.


--Opisanie
   Programata celi da zapazi whodni danni ot potrebitelq pod formata na integer chisla
w spisyk. W sledstwie na towa, dannite se prehwyrlqt w izhoden spisyk bez da powtarqshtite
se chisla.
   Wywejdaneto na chisla w programata prodyljava dokato potrebitelq ne wywede 's'.

--Promenlivi
   -inputList  - Zapazwa whodniq spisyk ot danni
   -outputList - Zapazwa i izwejda izhodniqt spisyk
   -input      - Polzwa se za wremmeno syhranenie na whoda ot potrebitelq

--Footer

Autor: KK
Date : 12.11.22                           Last Modified: 12.11.22
*/
#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

int main()
{

   list<int> inputList, outputList;
   string input;

   // Wywejdat se chislata po edno na red
   cout << "\nInput numbers: \n"
        << "Input s to stop\n";
   for (int i = 0; true; i++)
   {
      cout << i + 1 << ". > ";
      getline(cin, input);

      if (input[0] == 's' || input[0] == 'S') // Pri wywejdane na 's' wmesto chislo
      {                                       // cikylat spira a s nego i wywejdaneto
         break;                               // na chisla.
      }
      else
      {
         try
         {
            inputList.push_back(stoi(input));
         }
         catch (exception &e)
         {
            cout << "> Error converting" << '\n';
            i--;
         }
         
      }
   }

   // Spisykyt se sortira i se premahwat endakwite chisla
   inputList.sort();
   inputList.unique();

   // Spisycite se razmestwat
   inputList.swap(outputList);

   // Izhodniqt spisyk se izwejda na ekrana
   cout << "\nOutput: { ";
   for (int i = 0; !outputList.empty(); i++)
   {

      cout << outputList.front();
      outputList.pop_front();
      cout << ' ';
   }
   cout << "}"<<endl;

   return 0;
}