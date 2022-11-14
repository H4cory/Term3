/*
--Specifikaciq
    Daden e podreden spisak ot tseli chisla. Da se sastavi nov spisak, sadarzhasht
chislata, koito se sreshtata samo vednazh v izhodniya spisak.

--Opisanie


--Promenlivi


--Footer

Autor: KK
Date :                            Last Modified:
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void inputNum(vector<int> inputList){
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
            inputList[i] = (stoi(input));
         }
         catch (exception &e)
         {
            cout << "> Error converting" << '\n';
            i--;
         }
         
      }
   }

}


int main(){

    vector<int> inputList;

    inputNum(inputList);

    // Spisykyt se sortira i se premahwat endakwite chisla
    // inputList.sort();
    // inputList.unique();



   return 0;
}