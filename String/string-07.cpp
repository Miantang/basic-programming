#define LOCAL
#include "fstream"
#include "iostream"
#include "string"
#include "vector"

using namespace std;

int main(int argc, char const *argv[])
{
	#ifdef LOCAL
		ifstream cin("datain.txt");
		ofstream cout("dataout.txt");
	#endif
	string word;
	vector<string> v;
	while(cin >> word)
		v.push_back(word);
	for(vector<string>::iterator i = v.end()-1; i != v.begin()-1; i--)
	{
		if (i == v.begin())
		{
			cout << *i << endl;
		}else{
			cout << *i << " ";
		}
	}
	return 0;
}