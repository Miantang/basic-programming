#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
        ifstream cin("i.txt");
        ofstream cout("dataout.txt");
    #endif
    
    int N, temp;
    bool notIn = false;
    cin >> N;
    std::vector<int> nums, maxs, times;
    for (int i = 0; i < N; ++i) {
        cin >> temp;

        for (size_t j = 0; j < maxs.size(); ++j) 
        {
            if (maxs[j] == temp) {
                times[j]++;
                notIn = false;
            }else{
                notIn = true;
            }
        }
        
        if (notIn || i == 0) {
            maxs.push_back(temp);
            times.push_back(1);
            notIn = false;
        }
        
    }
    int maxNum;
    size_t order;
    if(times.size() != 0) {
        maxNum = times[0];
        order = 0;
    }
         
    for (size_t i = 0; i < times.size(); ++i) {
        if (times[i] >= maxNum) {
            maxNum = times[i];
            order = i;
        }
    }
    cout << maxs[order] << " " <<  maxNum  ;
    return 0;
}
