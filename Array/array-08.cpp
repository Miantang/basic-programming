#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
        ifstream cin("i.txt");
        ofstream cout("o.txt");
    #endif
    
    string inText, outT;
    getline(cin, inText);
    bool isFirst = true, isM = false;
    for(string::iterator i = inText.begin(); i != inText.end(); ++i) {
        if(*i == '#')
        {
            break;
        }
        if(*i == '-' && isFirst) {
            isM = true;
        }else if( ( *i >= '0' && *i <= '9') || (*i >= 'a' && *i <= 'f')
            || (*i >= 'A' && *i <= 'F') ) {
            outT.push_back(*i);
            isFirst = false;
        }
    }
    int out = stoi(outT,nullptr, 16);
    if(isM)
        out = -out;
    cout << out << endl;
    return 0;
}
