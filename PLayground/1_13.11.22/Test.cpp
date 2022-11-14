/*
--Specifikaciq
    Celta na tazi programa e da se sortirat chisla w masif i sled towa po opredeln nachin da 
se nameri tyrseni chislo.
    Kato nachalo chisla trqbwa da mogat da bydat wywejdani ot potrebitelq, opciq za
proizwolni chisla.


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





int main(){

    vector<int> input;
    string tempInput;
    int i = 0;

    cout<<"\nInsert s to stop!\nPlease insert numbers: \n";

    //Get user input
    while(true)
    {   

        cout<< i+1 <<" > ";
        getline(cin,tempInput);

        if(tempInput[0] == 's' || tempInput[0] == 'S'){
            break;
        }


        try
         {
            input.push_back(stoi(tempInput));
         }
         catch (exception &e)
         {
            cout << "> Error converting" << '\n';
            i--;
         }
         i++;
        
    }


    //Display user input
    i = 0;
    cout<<"\nOutput = { ";
    while( i < input.size()){
        cout<<input[i]<<' ';
        i++;
    }
    cout<<"} \n";
    
   
   return 0;
}