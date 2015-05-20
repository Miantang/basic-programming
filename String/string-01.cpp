#define LOCAL
#include "fstream"
#include "iostream"
#include "string"

using namespace std;
int main(int argc, char const *argv[])
{
	#ifdef LOCAL
		ifstream cin("datain.txt");
		ofstream cout("dataout.txt");
	#endif

	string line;
	char inChar;
	getline(cin, line);
	cin >> inChar;
	for (string::iterator it = line.begin(); it != line.end(); ++it)
	{
		cout << *it;
	}
	return 0;
}

/*//Use string container
#include "fstream"
#include "iostream"
#include "string"

using namespace std;
int main(int argc, char const *argv[])
{
	#ifdef LOCAL
		ifstream cin("datain.txt");
		ofstream cout("dataout.txt");
	#endif

	string line;
	char inChar;
	getline(cin, line);
	cin >> inChar;
	size_t index = line.find(inChar);
	if(index == -1)
	{
		cout << "Not found" << endl;
	}else
	{
		cout << line.substr(index) << endl;
	}
	return 0;
}*/