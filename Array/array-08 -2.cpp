#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
#define STRING_SIZE 1000
int main(){
	string str;
	int i, sum = 0;
	int flag = 0, f = 0;
	getline(cin, str);
	for(i = 0; str[i] != '#'; ++i) {
		if(str[i] == '-' && !flag)
			f = 1;	/* 标记数字前的第一个-，表示负数 */ 
		else if(str[i] >= '0' && str[i] <= '9') {
			sum = sum * 16 + str[i] - '0';
			flag = 1;
		} 
		else if(str[i] >= 'a' && str[i] <= 'f') {
			sum = sum * 16 + str[i] - 'a' + 10;
			flag = 1;
		}
		else if(str[i] >='A' && str[i] <= 'F') {
			sum = sum * 16 + str[i] - 'A' + 10;
			flag = 1;
		}
	}
	if(f)
		sum = -sum;
	printf("%d\n", sum);
	return 0;
}
