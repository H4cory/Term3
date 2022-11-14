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
Date : 12.11.22                           Last Modified: 14.11.22
*/
#include <iostream>
#include <string>
#include <list>

using namespace std;

// Funciq za wywejdane na danni wyw whodqshtiqt list
void getData(list<int> &inputList)
{
   string input;

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
}

// Funciq za izwejdane na ekrana dannite ot izhodqsht list
void displayData(list<int> &outputList)
{
   cout << "\nOutput: { ";

   for (list<int>::iterator it = outputList.begin(); it != outputList.end(); it++)
   {

      cout << *it;
      cout << ' ';
   }

   cout << "}" << endl;
}

int main()
{

   list<int> inputList, outputList;

   // Wywejdat se chislata po edno na red
   getData(inputList);

   // Spisykyt se sortira i se premahwat endakwite chisla
   inputList.sort();
   inputList.unique();

   // Spisycite se razmestwat
   inputList.swap(outputList);

   // Izhodniqt spisyk se izwejda na ekrana
   displayData(outputList);

   return 0;
}