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

    if(n%2 !=0){
        n +=1;
    }
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

    double odd = 0.0, even = 0.0;
    for (int i = 1; i < n; ++i) {
        if(i%2==0) {
            even += y[i] * 2;
        } else{
            odd += y[i]*4;
        }
    }

    double sum;
    sum = odd + even + y[0]+y[n];
    double area;
    area = (h/3)*sum;

    cout <<"Integral Value is: "<< fixed << setprecision(6) <<area<< endl;

    return 0;
}
