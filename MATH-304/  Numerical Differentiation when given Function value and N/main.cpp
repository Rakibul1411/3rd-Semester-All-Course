#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
using namespace std;
int main() {
    ifstream file ("input.txt");
    int n;
    file >> n;
    double x[n+1];
    double y[n+1];
    for (int i = 0; i <= n; ++i) {
        file >> x[i];
    }
    for (int i = 0; i <= n; ++i) {
        file >> y[i];
    }
    file.close();

    double F[n+1];
    for (int i = 0; i <= n; ++i) {
        if(i==0) {
            F[i] = (y[i + 1] - y[i]) /  (x[i+1]-x[i]); // forward
        }
        else if(i==n) {
            F[i] = (y[i] - y[i - 1]) / (x[i]-x[i-1]); // backward
        }
        else {
            F[i] = (y[i + 1] - y[i - 1]) / (x[i+1]-x[i-1]) ; // center
        }
    }

    for (int i = 0; i <= n; ++i) {
        cout << fixed << setprecision(6) <<F[i]<< endl;
    }

    return 0;
}
