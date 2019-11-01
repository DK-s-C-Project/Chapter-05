/* for loop*/

// while --> run the code during the requierment
//do-while --> run the code first, and check the requirment
//for --> the code runs for the requierment. ex) "I met her for my desire"


#include<iostream>
using namespace std;

// the Pow(제곱) fuction. --> somethime the user can make a fuction of pow, usually the user use "#include<cmath>"
int pow(int base, int exponent)
{
	int result = 1;

	for (int counted = 0; counted < exponent; ++counted)
		result *= base;

	return result;

}


int main()
{
	int count = 0;
	for (; count < 10; ++count) // The running mathod is "int count=0;"-->  "count<10;"  --> "cout <<count<<endl;" --> "++count"
		
	{

		cout << count << endl;
	}

	cout << count << endl; // 10
	// When the Debug starts the output gives 0~10. The reason is the last output is affected by the for loop. 
	return 0;
}


// Putting more than one variable.
int main()
{
	for (int i = 0, j = 0; i < 10; ++i, --j) // 조건을 i에만 걸어도 작동 하는 듯 하다.
	{
		cout << i << " " << j << endl;
	}

}

//double for loop
int main()
{
	for (int k = 0; k < 9; ++k)

		for (int l = 0; l << 9; ++l)
		{
			cout << l << " " << k << endl;
		}
	
	return 0;
}
