/* while - �ݺ���*/
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


// The case of the overflow. --> By using unsigned. "�뵵�� ���� �ٸ��� ������ ������ ��Ȳ���� �����Ͽ� ����."

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

// "����� �ѹ��� ����� �ϰ� ���� ��"

int main()
{
	int count = 1;

	while (count < 100)
	{
		// 5���� 1���� "Hello world"�� ��� �ϰ� �ʹ�.

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

	while (outer_count <= 5)    //��ȣ�� ��������!
	{
		int inner_count = 1;
		while (inner_count <= outer_count)   //��ȣ�� ��������!
		{
			cout << inner_count++ << " ";
		}

		cout << endl;
		++outer_count;
	}

	return 0;
}