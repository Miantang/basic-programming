#define LOCAL
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
void split(string& inText, int& num) {
	if (inText.size() == 0) {
		return;
	}
	if (inText.size() != 0 && inText[0] == ' ') {
		inText.erase(0, 1);
		split(inText, num);
	}

	size_t index = inText.find(' ');
	if (index != -1) {
		inText = inText.substr(index);
		num++;
		split(inText, num);
	}else{
		return;
	}
}
int main(int argc, char const *argv[]) {
	#ifdef LOCAL
		ifstream cin("datain.txt");
		ofstream cout("dataout.txt");
	#endif
	string line;
	getline(cin, line);
	
	size_t index = 0;
	int num = 0;
	split(line, num);
	if (!line.empty() ) {
		num++;
	}
	cout << num << endl;
	return 0;
}