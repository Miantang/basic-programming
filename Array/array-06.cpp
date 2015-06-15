#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		ifstream cin("datain.txt");
		ofstream cout("dataout.txt");
	#endif

	bool issingleInM = true,isInM = false, isInN = false;
	int M, N, temp;
	cin >> M;
	std::vector<int> vecM, vecN, vecLast;
	for (int i = 0; i < M; ++i) {
		cin >> temp;
		for(vector<int>::iterator v = vecM.begin(); v != vecM.end(); ++v ) {
		    if(*v == temp )
		      isInM = true;
		}
		if(!isInM) {
		    vecM.push_back(temp);
		}
		isInM = false;
		  
	}
	
	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> temp;
		
		for (vector<int>::iterator i = vecN.begin(); i != vecN.end(); ++i) {
		    if(temp == *i)
		      isInN = true;
		}
		if(!isInN) {
		    vecN.push_back(temp);
		    for (vector<int>::iterator i = vecM.begin(); i != vecM.end(); ++i) {
    			if (temp == *i) {
    				issingleInM = false;
    				*i = 3154632;
    			}
    		}
    		if(issingleInM)
    			vecLast.push_back(temp);
    
    		issingleInM = true;
		}
		isInN = false;
	}

	for (vector<int>::reverse_iterator i = vecM.rbegin(); i != vecM.rend(); ++i) {
		if (*i != 3154632) {
			vecLast.insert(vecLast.begin(), *i);
		}
	}

	for (vector<int>::iterator i = vecLast.begin(); i != vecLast.end(); ++i) {
		cout << *i;
		if (i != vecLast.end() - 1) {
			cout << ' ';
		}else{
			cout << endl;
		}
	}

	return 0;
}

