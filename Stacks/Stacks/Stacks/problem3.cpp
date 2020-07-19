#include <iostream>
#include <string>
#include "STACK.h"
using namespace std;

void main()
{
	string path;

	cout << "Please enter the full path" << endl;
	getline(cin, path);

	STACK stk(path.length());

	for (int i = 0; i < path.length(); i++)
	{
		if (path[i] == '.')
			stk.pop();
		else if ((path[i] >= 'a' && path[i] <= 'z') || (path[i] >= 'A' && path[i] <= 'Z'))
			stk.push(path[i]);
	}

	cout << "The final directory path is :" << endl<<"/";

	while (!stk.isEmpty())
		cout << stk.pop() << "/";
	cout << endl;
	system("pause");

}