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
// 1.특정한 키를 눌러 중지를 시킬 때
// 2.특정한 조건에서 진행을 멈출때
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

		//++count --> 이곳에 넣을 경우 뒤에 나오는 문장이 무시 되어 증감이 이루어 지지 않는다.

	} 
	while (++count < 10);//while문 안에 증감을 넣는 경우이다.
	
	return 0;
}

//The example of break --> 특정한 글자가 입력 시 실행이 멈추는 경우

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