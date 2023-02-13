#include<iostream>;
using namespace std;
char doiSo[]={'0', '1', '2', '3','4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
void doiHeHex(int n){
    char arr[10];
    int d;
    int count=0;
    while(n>0){
        d=n%16;
        arr[count]= doiSo[d];
        n=n/16;
        count++;
    }
    for(int i=count-1; i>=0;i--){
        cout<<arr[i];
    }
}
int main(){
int n;
cout<<"nhap so can doi:";
cin>>n;
cout<<"doi sang he hex la :";
doiHeHex(n);

return 0;}
