/* Switch case */
#include<iostream>
using namespace std;


	enum class colors
	{
		Black,
		White,
		Red,
		Green,
		Blue,

	};

	void printcolorname(colors color)
	{
		/*if (color == colors::White)
			cout << "white" << endl;
		else if (color == colors::Black)
			cout << "Black" << endl;
		else if (color == colors::Green)
			cout << "Green" << endl;
		else if (color == colors::Red)
			cout << "Red" << endl;
		else if (color == colors::Blue)
			cout << "Blue" << endl;*/


		switch (static_cast<int>(color))
		{
		case 0:
			cout << "white" << endl;
			break;
		case 1:
			cout << "Black" << endl;
			break;
		case 2:
			cout << "Green" << endl;
			break;
		case 3:
			cout << "Red" << endl;
			break;
		case 4:
			cout << "Blue" << endl;
			break;

		}

	}

	int main()
	{	
		printcolorname(colors::Black);
		

		return 0;
	}



	int main()
	{
		int t;
		//int b; --> ���� �ϰ� ������ �̰��� �����ϴ°��� ����ϴ�. 3
		cin >> t;

		switch (t)
		{
			int a;
			// int b; �̷��� ���� �Ȱų� ���������̱� ����. 2

		case 0:
			int b;// -> case�ȿ� ������ ���� �ϸ� ������ ���� ���� �ȴ�. 1
			b = 4;
			break;

		default:
			cout << "undefined input" << endl;
			break; // The defalut is not always nesscery, but if the programmer want to make a clean sentance, it is good to use.


		}

		return 0;
	}

