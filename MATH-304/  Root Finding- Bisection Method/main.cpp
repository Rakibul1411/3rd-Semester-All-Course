#include <iostream>
#include <math.h>
#include <iomanip>
#define EPS 10.0e-6
#define f(x) ((x)*(x)*(x)+4*(x)*(x)-10)
using namespace std;
int main() {
    cout<< "Enter the initial guess: "<< endl;
    double a, b, c;
    cin>> a >> b;
    int n, i=0;
    cout<<"Enter the value of Iteration (n): ";
    cin >> n;
    if(f(a)*f(b) < 0) {
        while (i <= n) {
            c = (a+b)/2;
            if (fabs(f(c)) < EPS) {
                cout << "Approximate root: " << fixed << setprecision(6) << c;
                exit(0);
            } else if(f(a)*f(c) < 0) {
                b=c;
            } else if(f(b)*f(c) < 0){
                a = c;
            }
            ++i;
        }
    } else{
        cout<<"NO Root Exist for the Given Intervals.";
        exit(0);
    }

    return 0;
}
