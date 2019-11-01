/* Random Number Generation */
#include<iostream>
#include<cstdlib>// std::rand(), std::srand()
#include<ctime> // std::time()
#include<random>
using namespace std;

unsigned int PRNG() // Pseud Random Number Generator ���� ���� ���� ����
{
	static unsigned int seed = 5523; // seed number

	seed = 8253729 * seed + 2396403;

	return seed % 32768;
}

int main()
{

	for (int count = 1; count <= 100; ++count)
	{
		// ��¿� ������ �ִ� �ڵ�!!
		cout << PRNG() << "\t";

		if (count % 5 == 0)
			cout << endl;

	}
	return 0;
}

// The example of makeing Random number
int main()
{
	std::srand(static_cast<unsigned int>(std::time(0)));// conecting with CPU clock

	for (int count = 1; count <= 100; ++count)
	{
		count << std::rand() << "\t";

		if (count % 5 == 0)
			cout << endl;
	}
		
	return 0;
}

// The example of makeing Random number 2 - ���� ����� ����� ���
int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (RAND_MAX + 1.0);

	return min + static_cast<int>((max - min + 1)*(std::rand()*fraction));
}


int main()
{
	std::srand(static_cast<unsigned int>(std::time(0)));// conecting with CPU clock

	for (int count = 1; count <= 100; ++count)
	{
		count << std::rand() << "\t";

		if (count % 5 == 0)
			cout << endl;
	}

	return 0;
}

// Building random libery
int main()
{
	std::random_device rd;
	std::mt19937_64 mesenne();// 64bit�� ������ �������ִ� ���̺귯�� - creat a mesenne twister.
	std::uniform_int_distribution<>dice(1, 6);// 1~6���� ���� Ȯ���� ��� �����ϰ� ������ �ִ� ���̺귯��

	for (int count = 1; count <= 20; ++count)
	{
		cout << dice(mesenne) << endl;
	}
	return 0;
}