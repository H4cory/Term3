#include <stack>
#include <string>
#include <iostream>
using namespace std;

stack<char> S;


int main() {
	S.push('(');
	char k;
	string code;
	char result[20];
	int j = 0;
	getline(cin, code);
	for (int i = 0; i < code.length(); i++)
	{
		if (code[i] == '(')
		{
			S.push(code[i]);
		}
		if (code[i] >= 'a' && code[i] <= 'z')
		{
			result[j] = code[i];
			j++;
		}
		if (code[i] == '*' || code[i] == '/')
		{
			S.push(code[i]);
		}
		if (code[i] == '+' || code[i] == '-')
		{
			k = S.top();
			while (k == '*' || k == '/')
			{
				result[j++] = k;
				S.pop();
				k = S.top();
			}
			S.push(code[i]);

		}
		if (code[i] == ')')
		{
			k = S.top();
			while (k != '(')
			{
				result[j] = k;
				j++;
				S.pop();
				k = S.top();
			}
			S.pop();
		}

	}
	k = S.top();
	while (k != '(')
	{
		result[j] = k;
		j++;
		S.pop();
		k = S.top();
	}
	S.pop();
	for (int i = 0; i < j; i++)
	{
		cout << result[i];
	}

    return 0;
}