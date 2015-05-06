#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
        ifstream cin("i.txt");
        ofstream cout("dataout.txt");
    #endif
    
    double x, y, a, b, outx, outy;
    cin >> x >> y >> a >> b;

    outx = (x+a);
    outy = (y+b);
    if(outx<0 && outx>-0.05) outx=0.0;  
    if(outy<0 && outy>-0.05) outy=0.0; 
    cout << '(' << setiosflags(ios::fixed) << setprecision(1) << outx ;
        cout << ',' << ' ';
        cout << setiosflags(ios::fixed) << setprecision(1) << outy << ')' << endl;
    return 0;
}
