#define LOCAL
#ifdef LOCAL
    #include "fstream"
#endif
#include "iostream"
#include "iomanip"
#include "cmath"

using namespace std;
int main() {
    #ifdef LOCAL
        ifstream cin("datain.txt");
        ofstream cout("dataout.txt");
    #endif
    double a, b, c;
    cin >> a >> b >> c;
    if (a == 0.0 && b == 0.0 && c == 0.0)
    {
        cout << "Zero Equation" << endl;
    }else if (a == 0.0 && b == 0.0 && c != 0.0)
    {
        cout << "Not An Equation" << endl;
    }else if(a == 0.0 && b != 0.0)
    {
        cout << setiosflags(ios::fixed) << setprecision(2);
        cout << -c/b << endl;
    }
    else
    {
        double delta = pow(b, 2.0) - 4*a*c;
        cout << setiosflags(ios::fixed) << setprecision(2);
        if (delta >= 0.0)
        {
            double x1 = (-b+sqrt(delta))/2/a, x2 = (-b-sqrt(delta))/2/a;
            if (fabs(x1-x2) <= 1e-7)
            {
                cout << x1 << endl;
            }else{
                if(x1 >= x2)
                    cout << x1 << "\n" << x2 << endl;
                else
                    cout << x2 << "\n" << x1 << endl;
            }
            
        }else
        {
            if(fabs(b) <= 1e-7)
            cout << 0.00 << "+"<< sqrt(-delta)/2/a << "i" << "\n"
                 << 0.00 << "-"<< sqrt(-delta)/2/a << "i" << endl;
                 else
              cout << -b/2/a << "+"<< sqrt(-delta)/2/a << "i" << "\n"
                 << -b/2/a << "-"<< sqrt(-delta)/2/a << "i" << endl;      
        }
    }
    return 0;
    
}