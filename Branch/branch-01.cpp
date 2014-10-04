#define LOCAL
#ifdef LOCAL
    #include "fstream"
#endif
#include "iostream"

using namespace std;
int main() {
    #ifdef LOCAL
        ifstream cin("datain.txt");
        ofstream cout("dataout.txt");
    #endif
    unsigned int speed;
    cin >> speed;
    if(speed <= 500 && speed >=0){
        if (speed <= 60)
        {
            cout << "Speed: "<< speed << " - OK" << endl;
        }else
        {
            cout << "Speed: "<< speed << " - Speeding" << endl;
        }
    }
}
//并不需要对0和500判别

/*//WA  部分正确 0 和500 
#ifdef LOCAL
    #include "fstream"
#endif
#include "iostream"
#include "cassert"

using namespace std;
int main() {
    #ifdef LOCAL
        ifstream cin("datain.txt");
        ofstream cout("dataout.txt");
    #endif
    int speed;
    cin >> speed;
    assert(speed <= 500 && speed >=0);
    if (speed < 60)
    {
        cout << "Speed: "<< speed << " - OK" << endl;
    }else
    {
        cout << "Speed: "<< speed << " - Speeding" << endl;
    }
}*/
