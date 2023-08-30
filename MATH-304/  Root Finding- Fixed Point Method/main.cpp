#include <iostream>
#include <math.h>
#include <iomanip>
#define EPS 10.0e-6
#define f(x) ((x)*(x)*(x)+4*(x)*(x)-10)
#define g(x) (sqrt((10-(x)*(x)*(x))/4))
using namespace std;
int main() {
    cout<< "Enter the initial guess: "<< endl;
    double x0, x1;
    cin>> x0;

    int n, i=0;
    cout<<"Enter the value of n (iteration): ";
    cin>> n;
    while (i <=n){

        x1 = g(x0);
        if(fabs(f(x1)) < EPS){
            cout<<"Approximate root: "<< fixed << setprecision(6)<< x1;
            exit(0);
        }
        x0 = x1;
        ++i;
    }

    return 0;
}
