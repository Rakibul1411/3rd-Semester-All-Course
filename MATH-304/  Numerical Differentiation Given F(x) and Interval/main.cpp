#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
#define EPS 10.0e-6
#define f(x) ((x)*(x)+1)
int main() {
    cout<<"Enter the value of a: ";
    double a;
    cin >> a;
    cout <<"Enter the value of b: ";
    double b;
    cin >> b;
    cout<<"Enter the value of n: ";
    int n;
    cin>> n;

    double h = (b-a)/n;
    double x[n+1];
    double y[n+1];
    x[0] = a;
    x[n] = b;

    for (int i = 1; i < n ; ++i) {
        x[i] = x[i-1]+h;
    }

    for (int i = 0; i <=n ; ++i) {
        y[i] = f(x[i]);
    }

    double F[n+1];
    for (int i = 0; i <= n; ++i) {
        if(x[i]==a) {
            F[i] = (y[i + 1] - y[i]) /  h; // forward
        }
        else if(x[i]==b) {
            F[i] = (y[i] - y[i - 1]) / h; // backward
        }
        else {
            F[i] = (y[i + 1] - y[i - 1]) / (2*h) ; // center
        }
    }

    for (int i = 0; i <= n; ++i) {
        cout << fixed << setprecision(6) <<F[i]<< endl;
    }

    return 0;
}
