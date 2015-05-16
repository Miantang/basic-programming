#define LOCAL
#include "fstream"
#include "iostream"
#include "string"

using namespace std;
string transToStrs(string& num) {
	for (string::iterator i = num.begin(); i != num.end(); ++i) {
		switch(*i)
		{
			case '0' : *i = 'a'; break;
			case '1' : *i = 'b'; break;
			case '2' : *i = 'c'; break;
			case '3' : *i = 'd'; break;
			case '4' : *i = 'e'; break;
			case '5' : *i = 'f'; break;
			case '6' : *i = 'g'; break;
			case '7' : *i = 'h'; break;
			case '8' : *i = 'i'; break;
			case '9' : *i = 'j'; break;
		}
	}
	return num;
}

string addC(string strs) {
	string newStr;
	string Cenum = "GSBQWSBQYS";
	string::iterator C = Cenum.begin();
	for (string::reverse_iterator i = strs.rbegin(); i != strs.rend(); ++i) {
		newStr.insert(0, 1, *i);
		newStr.insert(1, 1, *C);
		C++;
	}
	return newStr;
}
string delC(string strs) {
	if (strs.size() == 0) {
		return "";
	}
	strs.pop_back();
	if (strs.size() > 1 && strs[0] == 'b' && strs[1] == 'S') {
		strs.erase(0, 1);
	}
	size_t index = 0;
	while(strs.find('a', index))
	{
		index = strs.find('a', index);
		if(strs.size() - 1 == index) {
			strs.erase(index, 1);
			break;
		}
		if (strs[index+1] == 'a') {
			strs.erase(index+1, 1);
			continue;
		}else if(strs[index+1] != 'a'){
			strs.erase(index+1, 1);
			index++;
		}else if (strs[index+1] == 'W') {
			index++;
		}

	}
	return strs;
}
int main(int argc, char const *argv[])
{
	#ifdef LOCAL
		ifstream cin("datain.txt");
		ofstream cout("dataout.txt");
	#endif

	string num;
	cin >> num;
	cout << delC(addC(transToStrs(num))) << endl;

	return 0;
}