#define LOCAL
#include <fstream>
#include <iostream>
#include "cmath"

using namespace std;
bool isPrime(long num)
{
	bool flag = true;
	for(long i = 2; i <= sqrt(num); ++i)
	{
		if(num % i == 0)
			flag = false;
	}
	return flag;
}

int main(int argc, char const *argv[])
{
	#ifdef LOCAL
		ifstream cin("datain.txt");
		ofstream cout("dataout.txt");
	#endif
	int oddNum;
	cin >> oddNum;
	for (long p = 2; p <= oddNum/2; p++)
	{
		if (isPrime(p) && isPrime(oddNum - p))
		{
			cout << oddNum << " = " << p << " + " << oddNum - p;
			return 0;
		}
	}
	return 0;
}

