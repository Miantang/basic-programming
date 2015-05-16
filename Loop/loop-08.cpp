#define LOCAL
#include <fstream>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
double a3, a2, a1, a0;

double f(double x)
{
	return pow(x, 3.0)*a3 + pow(x, 2.0)*a2 + x*a1 + a0;
}
// void diverge(double& a, double& b)
// {
// 	if(fabs(f(a))<= 1e-3)
// 	{
// 		b = a;
// 		return;
// 	}
// 	if(fabs(f(b))<= 1e-3)
// 	{
// 		return;
// 	}
// 	if(fabs(f((a+b)/2)) <= 1e-3 || b - a <= 1e-3)
// 	{
// 		b = (a+b)/2;
// 		return;
// 	}

// 	if( f(a)*f((a+b)/2) > 0)
// 	{
// 		a = (a+b)/2;
// 		diverge(a, b);
// 	}
// 	else if( f(a)*f((a+b)/2) <= 0)
// 	{
// 		b = (a+b)/2;
// 		diverge(a, b);
// 	}
// 	return;
// }
int main() {
    #ifdef LOCAL
        ifstream cin("datain.txt");
        ofstream cout("dataout.txt");
    #endif
    double a, b;  
    cin >> a3 >> a2 >> a1 >> a0;  
    cin >> a >> b;  
    while(b - a >= 1e-3)
    {  
        if(f((a+b)/2) * f(a) > 0)  
            a = (a+b)/2;  
        else  
            b = (a+b)/2;  
    }  
    // if(f((a+b)/2) != 0)  
        cout << setiosflags(ios::fixed) << setprecision(2) << (a+b)/2 << endl;  
    return 0;  
}  