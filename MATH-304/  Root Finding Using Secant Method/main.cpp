#include <iostream>
#include <math.h>
#include <iomanip>
#define EPS 10.0e-6
#define f(x) ((x)*(x)*(x)+4*(x)*(x)-10)
using namespace std;
int main() {
    cout<< "Enter the initial guess: "<< endl;
    double x0, x1, x2;
    cin>> x0 >> x1;

    int n, i=0;
    cout<<"Enter the value of n (iteration): ";
    cin>> n;
    while (i <=n){

        x2 = (x0*(f(x1)) - x1*f(x0))/(f(x1)-f(x0));
        if(f(x2) < EPS){
            cout<<"Approximate root: "<< fixed << setprecision(6)<< x2;
            exit(0);
        } else{
            x0 = x1;
            x1 = x2;
        }
        ++i;
    }

    return 0;
}
