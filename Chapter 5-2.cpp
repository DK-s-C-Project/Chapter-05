/* Á¶°Ç¹® if*/
#include<iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;

	if (1)// it is metter of true or false. --> i want to run this code always.
	{
		int x = 5;
	}
	
	else
		int x = 6;

	cout << x << endl;

	// Chaning

	if (x > 10)
	{
		cout << "x is greater than 10" << endl;
	}
	else if (x < 10)// what if x = 10? --> it is important to notice of a missing link.
	{
		cout << "x is less than 10" << endl;
	}
	else
	{
		cout << "x is exactly 10" << endl;
	}

	return 0;
}