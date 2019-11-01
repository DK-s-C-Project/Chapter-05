#include<iostream>
using namespace std;

enum class answer
{
	yes,
	no,
};

void mult_table(answer)
{
	int mult_table;
	int x, y = 0;
	char c;
	cin >> x;

	switch (mult_table)
	{
	case 0:
		cin >> x;
		for (; y < 100; ++y)
		{
			cout << x*y << " " << endl;
		}
		break;
	case 1:
		c = 'y';
		cout << "yes" << endl;

	case 2:
		c = 'n';
		cout << "Thank you for testing" << endl;
		break;

	default:
		cout << "Worng letter please try again" << endl << "Do you want to run mult table? y/n" << endl;
		cin >> c;
	}
}


int main()
{
	int a, b = 0;
	char c;

	cout << "__________*** The Mult Table ***__________" << endl << "Designed by Damien Ko" <<
		endl << endl << "Pleace insert number" << endl;

	cin >> a;
	for (; b < 100; ++b)
	{
		cout << a*b << " " << endl;
	}

	cout << "Do you want to try again? y/n" << endl;
	cin>>c;

	

	
	return 0;
}