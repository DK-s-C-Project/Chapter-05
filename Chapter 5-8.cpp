/*break & continue */
#include<iostream>
using namespace std;

// Example of Break
int main()
{
	int count = 0;
	while (true)
	{
		cout << count << endl;
		if (count == 10) break;
		count++;
	}
	return 0;
}


// Example of Break 2

void breakOrContinue()
{

	while (true)
	{
		char ch;
		cin >> ch;

		if (ch == 'b')
			break;
		if (ch == 'r')
			return;

	}
	cout << "Hello" << endl;
}

//Break in for loop
// 1.Ư���� Ű�� ���� ������ ��ų ��
// 2.Ư���� ���ǿ��� ������ ���⶧
int main()
{
	for (int i = 0; i < 10; ++i)
	{
		cout << i << endl;
		if (i == 5) break;

	}
	return 0;
}

//continue
int main()
{
	for (int i = 0; i < 10; ++i)
	{
		if (i % 2 == 0) continue;// unlike the break loop , "continue loop" never touches the "cout<<i<<endl;" until for loop ends.
		cout << i << endl;

	}
	return 0;
}

// continue loop in do-while loop

int main()
{
	int count(0);

	do
	{
		if (count == 5)
			continue;

		cout << count << endl;

		//++count --> �̰��� ���� ��� �ڿ� ������ ������ ���� �Ǿ� ������ �̷�� ���� �ʴ´�.

	} 
	while (++count < 10);//while�� �ȿ� ������ �ִ� ����̴�.
	
	return 0;
}

//The example of break --> Ư���� ���ڰ� �Է� �� ������ ���ߴ� ���

int main()
{

	int counted(0);
	bool escape_flage = false;
	while (!escape_flage)
	{
		char ch;
		cin >> ch;

		cout << ch << " " << counted++ << endl;

		if (ch == 'x')
			escape_flage = true;
		//break;

	}

	return 0;
}