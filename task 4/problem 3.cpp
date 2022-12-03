#include<iostream>
using namespace std;
int m(int a[], int n, int x, int y) {
   int i = 0;
   int d = INT_MAX;
   int p;
   for (i = 0; i < n; i++) {
      if (a[i] == x || a[i] == y) {
         p = i;
         break;
      }
   }
   while (i < n) {
      if (a[i] == x || a[i] == y) {
         if ( a[p] != a[i] && (i - p) < d ){
            d = i - p;
            p = i;
         } else
            p = i;
      }
      i++;
   }
   return d;
}
int main() {
   int arr[] = {2, 5, 3,  4, 5, 2};
   int n = sizeof(arr) / sizeof(arr[0]);
   int x = 2;
   int y = 3;
   cout <<m(arr, n, x, y);
}
