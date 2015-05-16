#define LOCAL
#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
	#ifdef LOCAL
		ifstream cin("datain.txt");
		ofstream cout("dataout.txt");
	#endif
	int a, b;
	cin >> a >> b;
	// for (int i = a; i <= b; ++i) {
	// 	if(i == 1) {
	// 		cout << "1 = 1" << endl;
	// 	}else if (i == 6) {
	// 		cout << "6 = 1 + 2 + 3" << endl;
	// 	}else if (i == 28) {
	// 		cout << "28 = 1 + 2 + 4 + 7 + 14" << endl;
	// 	}else if (i == 496) {
	// 		cout << "496 = 1 + 2 + 4 + 8 + 16 + 31 + 62 + 124 + 248" << endl;
	// 	}else if (i == 8128) {
	// 		cout << "8128 = 1 + 2 + 4 + 8 + 16 + 32 + 64 + 127 + 254 + 508 + 1016 + 2032 + 4064" << endl;
	// 	}
	// }
	string outString;
	std::vector<int> v;
	int sum = 0;
	for (int i = a; i <= b; ++i) {
		for (int j = 1; j <= i/2 + 1; ++j) {
			if (i % j == 0) {
				sum += j;
				// outString.append(" + " + to_string(j));
				v.push_back(j);
			}
		}
		if (sum == i) {
			for (std::vector<int>::iterator i = v.begin(); i != v.end(); ++i) {
				outString += (" + " + to_string(*i));
			}
			outString.erase(0, 3);
			cout << sum << " = " << outString << endl;

		}
		sum = 0;
		if (!v.empty()) 
			v.clear();
		v.shrink_to_fit();
		outString.clear();
	}
	return 0;
}