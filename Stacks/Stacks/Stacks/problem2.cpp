//#include <iostream>
//#include <string>
//#include "STACK.h"
//using namespace std;
//
//
//void main()
//{
//	
//	string pat;
//	//inputting the pattern
//	cout << "Please input the pattern : ";
//	getline(cin, pat);
//	STACK stk(pat.length());
//	cout << endl;
//	int i;		// the counter is left outside in order to make sure the whole pattern has been checked
//
//	for (i = 0; i < pat.length(); i++)	// Loop to check for pattern
//	{
//		if (pat[i] == '(' || pat[i] == '[')	// if an open bracket is found then push it into the stack
//		{
//			stk.push(pat[i]);
//		}
//		else if (pat[i] == ')' || pat[i] == ']')	// if a closing bracket is found then we need to check for its corresponding opening bracket
//		{
//			char tempBracket = stk.pop();		// pop the last open bracket to check
//
//			if ((tempBracket == '[' && pat[i] == ']') || (tempBracket == '(' && pat[i] == ')'))
//				continue;
//			else
//				break;		// if the brackets were not balanced then there is no need to check the rest of the pattern
//		}
//		else
//			continue;
//
//	}
//
//	if (stk.isEmpty() && (i == pat.length()))
//		cout << "Pattern is Balanced" << endl;
//	else
//		cout << "Pattern is Not Balanced" << endl;
//
//
//
//	system("pause");
//
//
//}