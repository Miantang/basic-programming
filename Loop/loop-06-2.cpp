#define LOCAL
#include <iostream>
#include <fstream>
#include <string>
#include <regex>

using namespace std;

int main(int argc, char const *argv[]) {
	#ifdef LOCAL
		ifstream cin("datain.txt");
		ofstream cout("dataout.txt");
	#endif
	string line;
	getline(cin, line);
	
	size_t index = 0;
	int num = 0;
	if (line.size() != 0 && line[0] == ' ' && line[line.size() - 1] == ' ') {
		num--;
	}
	smatch m;
	regex e("\\s+");
	while(regex_search(line, m, e))
	{
		cout << "num" << endl;
		for(auto x:m)
			num++;

		line = m.suffix().str();
			
	}
	cout << num << endl;
	return 0;
}