#define LOCAL
#ifdef LOCAL
    #include <fstream>
#endif
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
#ifdef LOCAL
    ifstream cin("datain.txt");
    ofstream cout("dataout.txt");
#endif
  int a, b, c, d;
  cin >> a >> b >> c >> d;
   int sum = a+b+c+d;
  cout << "Sum = " << a+b+c+d << "; Average = " ;
  cout << setiosflags(ios::fixed) << setprecision(1) << (double)sum/4;
}

/*
//WA for the second
#include <iostream>
#include <cstdio>
using namespace std;
int main(){
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("Sum = %d; Average = %.1f", a+b+c+d, (a+b+c+d)/4);
  
}
*/

/*// AC 
#include <iostream>
#include <cstdio>
using namespace std;
int main(){
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  int sum = a+b+c+d;
  double av = (double)sum / 4;
  printf("Sum = %d; Average = %.1f", sum, av);
  
}*/