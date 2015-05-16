#define LOCAL
#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <cmath>
using namespace std;
bool isPrime(int& num) {
	bool flag = true;
	for (int i = 2; i <= sqrt(num); ++i) {
		if(num % i == 0)
			flag = false;
	}
	return flag;
}
int main(int argc, char const *argv[]) {
	#ifdef LOCAL
		ifstream cin("datain.txt");
		ofstream cout("dataout.txt");
	#endif
	int M, N;
	cin >> M >> N;
	int count = 0, sum = 0;
	for (int i = M; i <= N; ++i) {
		if (i != 1 && isPrime(i)) {
			sum += i;
			count++;
		}
	}
	cout << count << " " << sum << endl;
	return 0;
}