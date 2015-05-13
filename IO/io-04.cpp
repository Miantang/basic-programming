#define LOCAL
#ifdef LOCAL
    #include <fstream>
#endif
#include <iomanip>
#include <iostream> 
using namespace std;
int main(){
#ifdef LOCAL
    ifstream cin("datain.txt");
    ofstream cout("dataout.txt");
#endif
  double d1;int a; char b; double d2;
  cin >> d1 >> a >> b >> d2;
  cout << b << " " << a 
  << setiosflags(ios::fixed) << setprecision(2) << " " << d1 << " " << d2;
}

/*//AC for printf
#define LOCAL
#ifdef LOCAL
    #include <fstream>
#endif

#include <iostream> 
using namespace std;
int main(){
#ifdef LOCAL
    ifstream cin("datain.txt");
    ofstream cout("dataout.txt");
#endif
  double d1;int a; char b; double d2;
  cin >> d1 >> a >> b >> d2;
  printf("%c %d %.2f %.2f\n", b, a, d1, d2);
}*/
