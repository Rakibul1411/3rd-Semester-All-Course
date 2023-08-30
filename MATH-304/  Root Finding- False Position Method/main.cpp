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

    if(f(a)*f(b) < 0) {
        while (1) {
            c = (a * (f(b)) - b * f(a)) / (f(b) - f(a));
            if (f(c) < EPS) {
                cout << "Approximate root: " << fixed << setprecision(6) << c;
                exit(0);
            } else if(f(a)*f(c) < 0) {
                b=c;
            } else if(f(b)*f(c) < 0){
                a = c;
            }
        }
    } else{
        cout<<"NO Root Exist for the Given Intervals.";
        exit(0);
    }

    return 0;
}
