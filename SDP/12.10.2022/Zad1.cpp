/*

*/
#include <iostream>
#include <string>
#include <stack>

using namespace std;


int main(){
   string input;
   stack<char> bira[1];

while(true){

   cout<<"Input: ";
   getline(cin,input);

   for(int i =0;i<input.size();i++){
    

      if((123 > input[i]&& input[i]>96)||(91 > input[i]&& input[i]>64)){
         //look for smaller case chars
         cout<<input[i];
      }
      else if(input[i]=='/'||input[i]=='*'||input[i]=='('){
         bira->push(input[i]);
         
      }
      else if(input[i]=='+'||input[i]=='-'){
         if(bira->top()=='*'||bira->top()=='/'){
             while(!bira->empty()){
            cout<<bira->top();
            bira->pop();
   }
   bira->push(input[i]);
         }
         else{
            bira->push(input[i]);
         }
      }
      else if(input[i]==')'){
         while(true){
            if(bira->top()=='('){
               bira->pop();
               break;
            }
            else
            cout<<bira->top();
            bira->pop();
         }

      }
   }

   while(!bira->empty()){
      cout<<bira->top();
            bira->pop();
   }
   cout<<endl;
   
   }
   return 0;
}
// a+b+(c+d)
// ab