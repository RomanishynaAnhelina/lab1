#include <stdio.h>
#include <math.h>
#include <cstdlib>

long func(long* arr, int length) {
 long x;
 long y = 1;
 for (int i = 0; i < length; i++) {
  y = y * arr[i];
 }
 x = pow(y, 1 / double(length));
 return x;
}

double func(double* arr, int length) {
 double x;
 double y = 1;
 for (int i = 0; i < length; i++) {
  y = y * arr[i];
 }
 x = pow(y, 1 / double(length));
 return x;
}


int main(void) {
 double arr[10];
 long arr1[10];
 long x;
 double y;
 for (int i = 0; i < 10; i++) {
  scanf ("%lf", &arr[i]);
 }
 for (int i = 0; i < 10; i++) {
  arr1[i] = long(arr[i]);
 }
 x = func(arr1, 10);
 y = func(arr, 10);
 printf("%td", x);
 printf("\n%f\n", y);
 system("pause");
 return 0;
}


