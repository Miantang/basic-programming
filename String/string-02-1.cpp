#define LOCAL
#include "fstream"
#include "iostream"
#include "vector"
using namespace std;


int main(int argc, char const *argv[])
{
	#ifdef LOCAL
		ifstream cin("datain.txt");
		ofstream cout("dataout.txt");
	#endif

	string S1, S2, Sout;
	getline(cin, S1);
	getline(cin, S2);
	// if(S2.size() <= 80 && S1.size() <= 80 && S2.size() > 0 && S1.size()>0)
	// {
		while(S1.find(S2) != -1)
			S1.erase(S1.find(S2), S2.size());
	// }
	cout << S1 << endl;
	
	return 0;
}
