/*
РУ има к факултета и п компютърни зали. 
За всяка зала е известен броя на компютрите и на
кой факултет принадлежи.
Да се изведе броя на компютрите за всеки факултет.

*/
#include <iostream>
#include <string>
#include <array>

using namespace std;

class CFakultets {
private:
string name;
int nRooms;
int rooms[100];

public:
CFakultets(): name(""), rooms{0}, nRooms(0){

}

void getData();
void Display();



};

void CFakultets::getData(){
    cout<<"FName: ";getline(cin, name);
    cout<<"Number of rooms: ";cin>>nRooms; 
    for(int i = 0 ;i<nRooms;i++){
    cout<<"PC's in room number "<<i+1<<" : "; cin >> rooms[i]; 
    }
    cin.ignore();
}
void CFakultets::Display(){
    int sum = 0;
    cout<<"\nFName: "<<name;
    for(int i =0;i<nRooms;i++){
        sum+=rooms[i];
    }
    cout<<"\n"<<name<<" has "<< sum<<" PC's."<<endl;
}

int main(){
    CFakultets Fakulteds[20];
    int nF = 0;
    string input;
    array<bool, 10> check;
    check.fill(true);

    cout<< "\nPress s to stop\n";

    while (check[0])
    {
        cout<<"\n<----MENU---->\n";
        cout<<"\n1. Enter a new Faculted";
        cout<<"\n2. Display all Faculteds";
        //cout<<"\nSmt";
       // cout<<"\nSmt";
        cout<<"\n-->";
        getline(cin, input);

        switch(input[0]){
            case '1':
                Fakulteds[nF].getData();
                nF++;
            break;
            case '2':   
                for(int i =0 ;i<nF;i++){
                    Fakulteds[i].Display();
                }
            
            break;
            case '3':
            
            break;
            case '4':
            
            break;
            case 's':
            check[0]=false;
            
            break;
            default:
            cerr<<"\nWrong input!";
        }

       
    }
    
 
   return 0;
}