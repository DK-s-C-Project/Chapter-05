/* goto --> ������ ������ ���� ������ ��(å ���� ���� ��)*/
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