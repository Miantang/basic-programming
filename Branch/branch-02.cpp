#define LOCAL
#include "fstream"
#include "iostream"
#include "cmath"
#include "iomanip"
using namespace std;
int main(int argc, char const *argv[])
{
	#ifdef LOCAL
		ifstream cin("datain.txt");
		ofstream cout("dataout.txt");
	#endif
	double x1, x2, y1, y2, z1, z2;
	cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;
	double s[3];
	s[0] = sqrt(pow(x1-y1, 2.0)+pow(x2-y2, 2.0));
	s[1] = sqrt(pow(x1-z1, 2.0)+pow(x2-z2, 2.0));
	s[2] = sqrt(pow(z1-y1, 2.0)+pow(z2-y2, 2.0));
	double maxS = s[0];
	double L = s[0] + s[1] +s[2];

	for(int i = 0; i < 3; ++i)
	{
		if (maxS < s[i])
		{
			maxS = s[i];
		}
	}
	if((L-maxS) > maxS)
	{
		cout << setiosflags(ios::fixed) << setprecision(2) 
			 << "L = " << L
			 << ", A = " << sqrt((L/2) * (L/2-s[0]) * (L/2-s[1]) * (L/2-s[2])) << endl;
	}else
	{
		cout << "Impossible" << endl;
	}
	return 0;
}