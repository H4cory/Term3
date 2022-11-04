/*

*/
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
   string input;
   stack<char> bira[1];
   char output[50];
   int cOutput = 0;

   while (true)
   {

      cout << "Input: ";
      getline(cin, input);

      for (int i = 0; i < input.size(); i++)
      {

         if ((123 > input[i] && input[i] > 96) || (91 > input[i] && input[i] > 64))
         {

            // cout<<input[i];
            output[cOutput++] = input[i];
         }
         else if (input[i] == '/' || input[i] == '*' || input[i] == '(')
         {
            bira->push(input[i]);
         }
         else if (input[i] == '+' || input[i] == '-')
         {
            if (bira->top() == '*' || bira->top() == '/')
            {
               while (!bira->empty())
               {
                  // cout<<bira->top();
                  output[cOutput++] = bira->top();
                  bira->pop();
               }
               bira->push(input[i]);
            }
            else
            {
               bira->push(input[i]);
            }
         }
         else if (input[i] == ')')
         {
            while (true)
            {
               if (bira->top() == '(')
               {
                  bira->pop();
                  break;
               }
               else
                  // cout<<bira->top();
                  output[cOutput++] = bira->top();
               bira->pop();
            }
         }
      }

      while (!bira->empty())
      {
         // cout<<bira->top();
         output[cOutput++] = bira->top();
         bira->pop();
      }
      cout << output;
      cout << endl;
   }
   return 0;
}
// c*((a+b)*(a-b))*c-a
