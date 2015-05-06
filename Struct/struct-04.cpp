#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
class info
{
public:
    string arg[5];
    void prints(ostream& cout) {
        cout << arg[0] << ' ';
        cout << arg[3] << ' ';
        cout << arg[4] << ' ';
        cout << arg[2] << ' ';
        cout << arg[1] << endl;
    }
};
int main() {
    #ifndef ONLINE_JUDGE
        ifstream cin("i.txt");
        ofstream cout("dataout.txt");
    #endif
    
    int N;
    cin >> N;
    info infos[N];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> infos[i].arg[j];
        }
    }

    int M, index;
    cin >> M;
    for (int i = 0; i < M; ++i) {
        cin >> index;
        if (index >= 0 && index < N) {
            infos[index].prints(cout);
        }else{
            cout << "Not Found" << endl;
        }
    }
    return 0;
}
