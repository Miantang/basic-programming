#define LOCAL
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	#ifdef LOCAL
		ifstream cin("datain.txt");
		ofstream cout("dataout.txt");
	#endif

	string inStr;string num ;
	long result = 0;
	getline(cin, inStr);
	for (string::iterator j = inStr.begin(); j != inStr.end(); ++j) {
		if (*j >= '0' && *j <= '9') {
			result = result*10 + *j - '0';
		}
	}
	/*for (size_t i = 0; i < inStr.size(); ++i) {
		if(inStr[i] >= '0' && inStr[i] <= '9')
			result = result*10 + inStr[i] - '0';
	}*/

	if(inStr != "")
		cout << result << endl;
	return 0;
}

