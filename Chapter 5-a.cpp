// The mult table. using while

#include<iostream>
using namespace std;

int main()
{
	int a, b = 0;

	char c;
	

	cout << "Please  insert number" << endl;
	cin >> a;
	for (; b <= 10; ++b)
	{
		cout << a*b << " " << endl;

	}
	mult:
	cout << "Do you want to try again? y/n" << endl;

	cin >> c;

	while(c == 'y')
	{
		cout << "Please  insert number" << endl;
		cin >> a;
		int b = 0;// without this sentance the code cannot run, i dont know why
		for (; b <= 10; ++b)
		{
			cout << a*b << " " << '\t';
		}
		break;
	}
	if (c == 'n')
	{
		cout << "Thank you for testing" << endl;
	}
	else
	{
		cout << "Please input right letter again please." << endl;
			goto  mult;
			return 0;
	}



		
	return 0;
}

//while 문을 조금 더 손을 봐야 할 것 같지만 원하는 결과물이 나와서 나름 만족