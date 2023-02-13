#include <iostream>
 using namespace std;
 void get(int *a, int i)
 {
     *(a+i)= i;

 }

 int main()
 {
 int a[] = {0, 0, 0};
 int length = sizeof(a)/sizeof(int);
 for(int i = 0 ; i < length ; i++) {
 get(a, i);
 cout << a[i] << endl;
 }
 // In ra màn hình:
 // 0
 // 1
 // 2
 return 0;
 }
