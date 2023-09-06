#include <iostream>
int l[100];
int l_prime[100];
int previ[100];

void print_LIS(int a[], int i);

#include <fstream>
using namespace std;
int main() {
    ifstream file ("input.txt");
    int n;
    file >> n;
    int a[n+1];
    for (int i = 0; i <=n; ++i) {
        if(i==0){
            a[i] = 0;
        } else{
            file >> a[i];
        }
    }
    file.close();

    l[0] = - INT_MAX;
    l_prime[0] = -1;
    previ[0] = -1;
    int len = 0;
    for (int i = 1; i <=n; ++i) {
        if(l[len] < a[i]){
            ++len;
            l[len] = a[i];
            l_prime[len] = i;
            previ[i] = l_prime[len-1];
        } else{
            int s = 0, h = len;
            while (s < h){
                int mid;
                mid = (s + h) / 2;
                if(l[mid] < a[i]){
                    s = mid+1;
                } else{
                    h = mid;
                }
            }

            l[s] = a[i];
            l_prime[s] = i;
            previ[i] = l_prime[s-1];
        }
    }

    cout<< "Longest Increasing Subsequence Length is: " << len << endl << "Longest Increasing Subsequence is: ";

    print_LIS(a, l_prime[len]);
    return 0;
}

void print_LIS(int a[], int n) {


    if(n ==-1) {
        return;
    }
        else print_LIS(a, previ[n]);
        cout << a[n] << " ";
}
