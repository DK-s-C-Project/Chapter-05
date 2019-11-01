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
		//int b; --> 굳이 하고 싶으면 이곳에 선언하는것이 깔끔하다. 3
		cin >> t;

		switch (t)
		{
			int a;
			// int b; 이렇게 선언 된거나 마찬가지이기 때문. 2

		case 0:
			int b;// -> case안에 변수를 선언 하면 쓰레기 값이 산출 된다. 1
			b = 4;
			break;

		default:
			cout << "undefined input" << endl;
			break; // The defalut is not always nesscery, but if the programmer want to make a clean sentance, it is good to use.


		}

		return 0;
	}

