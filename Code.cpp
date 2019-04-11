#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	cout << "***********This Program Determines whether your number is Even Or Odd************" << endl;
	int value;
	cout << "Enter Value Number : ";
	cin >> value;
	switch (value % 2)
	{
	case 0:
		cout << "Even integer" << endl;
		break;
	case 1:
		cout << "odd integer" << endl;
		break;
	default: "The Value Should Be Either Odd Or Even";
	}
  	_getch();
    return 0;
}
