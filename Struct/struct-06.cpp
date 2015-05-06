#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;
 class IR
 {
 public:
    double i, r;
    IR(double _r, double _i)
    {
        i = _i;
        r = _r;
    }
    IR& operator=(IR& ir)
    {
        i = ir.i;
        r = ir.r;
        return *this;
    };
    friend IR operator+(IR& left, IR& right)
    {
        double i = left.i + right.i;
        double r = left.r + right.r;
        return IR(r, i);
    }
    friend IR operator-(IR& left, IR& right)
    {
        double i = left.i - right.i;
        double r = left.r - right.r;
        return IR(r, i);
    }
    friend IR operator/(IR& left, IR& right)
    {
        double r = (left.r * right.r + left.i * right.i) / (right.r*right.r + right.i*right.i);
        double i = (-left.r * right.i + left.i * right.r) / (right.r*right.r + right.i*right.i);
        return IR(r, i);
    }
    friend IR operator*(IR& left, IR& right)
    {
        double r = left.r * right.r - left.i * right.i;
        double i = left.r * right.i + left.i * right.r;
        return IR(r, i);
    }
    void print(ostream& cout)
    {
        cout << setiosflags(ios::fixed) << setprecision(1);
        if(i >= 0)
            cout << r << '+' << i << 'i';
        else
            cout << r << i << 'i';
    }
    void printr(ostream& cout)
    {
        cout << setiosflags(ios::fixed) << setprecision(1);
        if ((i >= -0.05 && i < 0.05) && (r >= -0.05 && r < 0.05)) 
        {
            cout << 0.0;
        }else if(!(i >= -0.05 && i < 0.05) && (r >= -0.05 && r < 0.05))
        {
            cout << i << 'i';
        }
        else if((i >= -0.05 && i < 0.05) && !(r >= -0.05 && r < 0.05))
        {
            cout << r;
        }
        else if(!(i >= -0.05 && i < 0.05) && !(r >= -0.05 && r < 0.05))
        {
            if(i >= 0)
                cout << r << '+' << i << 'i';
            else
                cout << r << i << 'i';
        }
    }
 };
 void leftprint(IR& left, IR& right, string oper, ostream& cout)
 {
    cout << '(';
    left.print(cout);
    cout << ')' << ' ' << oper << ' ' <<'(';
    right.print(cout);
    cout << ')' << ' ' << '=' << ' ';

 };
int main() {
    #ifndef ONLINE_JUDGE
        ifstream cin("i.txt");
        ofstream cout("o.txt");
    #endif
    
    double a, b, c, d;
    cin >> a>> b>> c>> d;
    IR x(a, b), y(c, d);
    leftprint(x, y, "+", cout);
    (x + y).printr(cout); cout << endl;
    leftprint(x, y, "-", cout);
    (x - y).printr(cout); cout << endl;
    leftprint(x, y, "*", cout);
    (x * y).printr(cout); cout << endl;
    leftprint(x, y, "/", cout);
    (x / y).printr(cout); cout << endl;
    return 0;
}
