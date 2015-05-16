#define LOCAL
#include "fstream"
#include "iostream"
#include "string"

using namespace std;

int main(int argc, char const *argv[]) {
	#ifdef LOCAL
		ifstream cin("datain.txt");
		ofstream cout("dataout.txt");
	#endif

	int duration;
	cin >> duration;
	int vRabbit = 9, vTorts = 3;
	int rRabbit = 0, rTorts = 0;
	int rest = 0;
	for (int i = 0; i < duration; ++i) {
		
		if (i % 10 == 0) {
			if (rest == 0) {
				if(rRabbit > rTorts)
					vRabbit = 0;
				else
					vRabbit = 9;
			}
		}
		if (vRabbit == 0) {
			rest++;
			if(rest == 30)
				rest = 0;
		}
		rRabbit += vRabbit;
		rTorts += vTorts;
	}
	if (rRabbit > rTorts) {
		cout << "^_^ " << rRabbit << endl;
	}else if (rRabbit < rTorts) {
		cout << "@_@ " << rTorts << endl;
	}else if (rRabbit == rTorts) {
		cout << "-_- " << rRabbit << endl;
	}
	return 0;
}
