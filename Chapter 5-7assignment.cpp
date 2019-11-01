/* The code for mult + makeing output of odd numbers using goto loop*/
// showing the inputs mult table
#include<iostream>
using namespace std;

int main()
{
	The_mult_table: 
	int a;
	int b = 0;
	cout << "Insert a number" << endl;
	cin >> a;
	cout << "Yout input is " << a << endl;
	cout << "The mult table of your input" << endl;
	for (; b <= 100; ++b)
	{
		
		cout << a*b << " " << endl;
	}

	cout << "Do you like to try again?" << endl << "Enter Y or N " << endl;
	char c;
	cin >> c;

	
	Question:
	if (c == 'Y')
	{
		goto The_mult_table;
	}
	if (c == 'N')
	{
		cout << "Thank you for testing" << endl;
	}
	else
	{
		goto Question;
	}
	return 0;
}