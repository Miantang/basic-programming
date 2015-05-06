#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
        ifstream cin("i.txt");
        ofstream cout("dataout.txt");
    #endif
    
    string L, R;
    cin >> L >> R;
    char flag;

    size_t pos1 = L.find('/'), pos2 = R.find('/');
    int L1 = stoi(L.substr(0, pos1)), L2 = stoi(L.substr(pos1+1, L.size()-pos1-1));
    int R1 = stoi(R.substr(0, pos2)), R2 = stoi(R.substr(pos2+1, R.size()-pos2-1));

    double res = (double)L1/(double)L2 - (double)R1/(double)R2;
    if (res > 0) 
    	flag = '>';
    else if(res < 0)
    	flag = '<';
    else if (res == 0) {
    	flag = '=';
    }
    cout << L1 << '/' << L2 << ' ' << flag << ' ' << R1 << '/'  << R2 << endl;
    return 0;
}
