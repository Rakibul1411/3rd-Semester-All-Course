#include<stdio.h>
#include<math.h>
#define PI 3.1416
int main(){
int n=100;
double a=0, b=2*PI;
double h=(b-a)/h;
double x=a;
printf("\"x\",\"sin(x)\"\n");
for(int i=0; i<n; i++){
  x=x+h;
printf("%lf,%lf\n", x,sin(x));
}
return 0;
} 