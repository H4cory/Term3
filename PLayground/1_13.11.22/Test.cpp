/*
--Specifikaciq
    Celta na tazi programa e da se sortirat chisla w masif i sled towa po opredeln nachin da
se nameri tyrseno chislo.
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

void getData(vector<float> &input)
{
    string tempInput;
    int i = 0;

    cout << "\nInsert s to stop!\nPlease insert numbers: \n";

    // Get user input
    while (true)
    {

        cout << i + 1 << " > ";
        getline(cin, tempInput);

        if (tempInput[0] == 's' || tempInput[0] == 'S')
        {
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
}

void displayData(vector<float> &input)
{

    int i = 0;

    // Display user input
    cout << "\nOutput = { ";
    while (i < input.size())
    {
        cout << input[i] << ' ';
        i++;
    }
    cout << "} \n";
}

int main()
{

    vector<float> input;

    getData(input);
    displayData(input);

    return 0;
}