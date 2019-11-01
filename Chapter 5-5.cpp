/* while - 반복문*/
#include<iostream>
using namespace std;

int main()
{
	cout << "While -loop test" << endl;

	int count = 0;
	while (false)// true --> the set up goes infinit.
	/*while (count<=999) -->  in the parenthesis, the user can put conditional statement*/
	{
		//static int count = 0; --> if the user want to declare a variable sentance, use "static", but it is dangerous to use.
		cout << count << endl;
		++count;

		// The previous sentence can be written in this way.

		/*int count = 0;
		while (1)
		{
			cout << count << endl;
			++count;

			if (count == 10) break;

		}*/

	}
	return 0;
}


// The case of the overflow. --> By using unsigned. "용도에 따라 다르기 때문에 적절한 상황에서 적용하여 쓰자."

int main()
{
	unsigned int count = 10;

	while (count >= 0)
	{

		if (count == 0)
			cout << "zero" << endl;
		else
			cout << count << " ";
		count--;
	}

	return 0;
}

// "몇번의 한번씩 기능을 하고 싶을 때"

int main()
{
	int count = 1;

	while (count < 100)
	{
		// 5번에 1번씩 "Hello world"를 출력 하고 싶다.

		if (count % 5 == 0)
		
			cout << "Hello World" << count << endl;
		

		count++;
	}


	return 0;
}

// while statement in the while statement.

int main()
{
	int outer_count = 1;

	while (outer_count <= 5)    //등호를 조심하자!
	{
		int inner_count = 1;
		while (inner_count <= outer_count)   //등호를 조심하자!
		{
			cout << inner_count++ << " ";
		}

		cout << endl;
		++outer_count;
	}

	return 0;
}