#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>
using namespace std;
 class Rad
 {
 public:
    int u, d;
    Rad(){};
    Rad(int x, int y)
    {
        u = x; d = y;
    };
    Rad(Rad& r)
    {
        u = r.u;
        d = r.d;
    };
    Rad(string inT)
    {
       size_t index = inT.find('/');
       // u = atoi( inT.substr(0, index).c_str());
       // d = atoi( inT.substr(index+1, inT.size()-1).c_str());
       u = stoi(inT.substr(0, index));
       d = stoi(inT.substr(index+1, inT.size()-1));
    };
    void gcd() 
    {
        int ul = u, dl = d;
        int res;
        if (dl == 0) 
        {
            res = 0;
            dl = 1;
        }else
            res = ul % dl;
        while(res != 0) 
        {
            ul = dl;
            dl = res;
            res = ul % dl;
        }
        u = u/dl; d = d/dl;
    };
    void div(int n)
    {
        d = d * n;
        gcd();
        return;
    } 
    void print(ostream& cout)
    {
        if (u == 0) 
        {
            cout << u << endl;
            return;
        }
        if(d != 1)
            cout << u << '/' << d;
        else if(d == 1)
            cout << u;
        return;
    }
    void plus(Rad& r)
    {
        u = d * r.u + u * r.d;
        d = d * r.d;
        return;
    }
 };
 
int main() {
    #ifndef ONLINE_JUDGE
        ifstream cin("i.txt");
        ofstream cout("o.txt");
    #endif
    
    int N;
    string temp;
    cin >> N;
    Rad rad("0/1");
    for (int i = 0; i < N; ++i) {
        cin >> temp;
        if(temp == "0")
            temp = "0/1";
        Rad r(temp);
        rad.plus(r);
    }

    rad.div(N);
    rad.print(cout);
    return 0;
}
