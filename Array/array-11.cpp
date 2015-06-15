#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
        ifstream cin("i.txt");
        ofstream cout("dataout.txt");
    #endif
    
    int N;
    cin >> N;
    std::vector<int> v;
    for (int i = 0; i < N; ++i) 
    {
        v.push_back(i);
    }
    vector<int>::iterator index = v.begin();
    int count = 1;
    while(v.begin() != v.end() - 1)
    {
        if(count == 3)
        {
            count = 1;
            
        }
    }
    return 0;
}
