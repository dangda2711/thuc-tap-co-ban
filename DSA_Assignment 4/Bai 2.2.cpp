#include <iostream>
 using namespace std;
 bool increase(int a, int b)
 {
 return a < b;
 }
 bool decrease(int a, int b)
 {
 return a > b;
 }
 void swap(int &a, int &b)
 {
     int temp= a;
     a=b;
     b=temp;
 }
 void sort(int *arr, int n, bool b(int a, int b))
 {
     for(int i=0; i<n;i++){
        for(int j=n-1;j>i;j-- ){
            if(b((*(arr+j)), (*((arr+(j-1))))))
            {
                swap(*(arr+j), *((arr+(j-1))));
            }
        }
     }
 }
 //{
 // ?
 //}
 int main()
 {
 int a[] = {2, 5, 3, 1, 6};
 int length = sizeof(a)/sizeof(int);
 sort(a , length, increase);
 for(int i = 0 ; i < length ; i++) {
 cout << a[i] << endl;
 }
 // In ra màn hình:
 // 1
 // 2
 // 3
 // 5
 // 6
 cout<<"==========================================="<<endl;
 sort(a , length, decrease);
 for(int i = 0 ; i < length ; i++) {
 cout << a[i] << endl;
 }
 // In ra màn hình:
 // 6
 // 5
 // 3
 // 2
 // 1
 return 0;
 }
