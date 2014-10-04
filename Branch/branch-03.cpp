#define LOCAL
#ifdef LOCAL
	#include "fstream"
#endif
#include "iostream"

using namespace std;
int main(int argc, char const *argv[])
{
	#ifdef LOCAL
		ifstream cin("datain.txt");
		ofstream cout("dataout.txt");
	#endif

	unsigned int day;
	cin >> day;
	if (day <= 1000)
	{
		int inDay = day % 5;
		if (inDay <= 3 && inDay > 0)
		{
			cout << "Fishing in day " << day << endl;
		}else
		{
			cout << "Drying in day " << day << endl;
		}
	}
	
	return 0;
}