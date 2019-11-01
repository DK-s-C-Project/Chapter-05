/* do-while */

//while vs do-while 
// The "while" loop runs, when the requierment is set, but "do-while" just run the code anyway.

#include<iostream>
using namespace std;

int main()
{

	int selection; // must be declared outside so-while loop

	do
	{
		cout << "1.add" << endl;
		cout << "2.sub" << endl;
		cout << "3.mult" << endl;
		cout << "4.div" << endl;
		cin >> selection;
	} while (selection <= 0 || selection >= 5);

	cout << "You selected" << selection << endl;


	return 0;
}
// 구조체 안에 For문을 사용 할 수가 없다.