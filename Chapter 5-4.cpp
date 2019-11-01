/* goto --> 지정한 곳으로 보내 버리는 것(책 갈피 같은 것)*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double x;
tryAgain :

	cout << "Enter the non-negative number" << endl;
	cin >> x;

	

	if (x < 0.0)
		goto tryAgain;

	cout << sqrt(x) << endl;

	return 0;
}

// This old code didn't get retired yet. hahaha 