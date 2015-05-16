#define LOCAL
#include "fstream"
#include "iostream"
#include "string"

using namespace std;
string& trandToc(string& num)
{
	for (string::iterator j = num.begin(); j != num.end(); ++j)
	{
		switch(*j)
		{
			case '0': *j = 'a'; break;
			case '1': *j = 'b'; break;
			case '2': *j = 'c'; break;
			case '3': *j = 'd'; break;
			case '4': *j = 'e'; break;
			case '5': *j = 'f'; break;
			case '6': *j = 'g'; break;
			case '7': *j = 'h'; break;
			case '8': *j = 'i'; break;
			case '9': *j = 'j'; break;
		}
	}
	return num;
}
string addC(string& nc)
{
	string Cenum = "SBQWSBQYSB";
	string::iterator C = Cenum.begin();
	string last;
	for (string::reverse_iterator j = nc.rbegin(); j != nc.rend(); ++j)
	{
        if(j == nc.rbegin())
	    {
	        if(*j != 'a')
	        {
	            last.insert(0, 1, *j);
	        }
            continue;
	    }
        else
        {
        	last.insert(0, 1, *j);
            if(*j != 'a')
    		{
    			last.insert(1, 1, *C);
    		}
    		else
    		{ 
                if(*C == 'W')
                {
                	last.insert(1, 1, *C);
                } 
            } 
    		C++;
        }
	}
	size_t found = 0;
	while(last.find('a', found) != -1)
	{
	    found = last.find('a', found);
	    if(found == last.size()-1)
	    {
	        last.pop_back();
	        break;
	    }
	    if(last[found+1] == 'a'){
	        last.erase(found+1, 1);
	    }else if (last[found+1] == 'W')
	    {
	    	last.erase(found, 1);
	    }
	    else 
	    {
	        found = found + 1; 
	    }
	}
	if(last.find('W') == 2 || last.find('W') == 3)
	{
		if (last[0] == 'b')
			last.erase(0, 1);
	}
	if(last.size() == 2 || last.size() == 3)
	{
		if (last[0] == 'b')
			last.erase(0, 1);
	}
		
	if (last.size() == 0)
		last += 'a';
	return last;
}
int main(int argc, char const *argv[])
{
	#ifdef LOCAL
		ifstream cin("datain.txt");
		ofstream cout("dataout.txt");
	#endif

	string money;
	cin >> money;
	cout << addC(trandToc(money));
	return 0;
}
