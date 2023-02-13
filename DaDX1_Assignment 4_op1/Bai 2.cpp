#include<iostream>
using namespace std;
bool ngTo(int n){
    if(n<2)
        return false;
    for(int i=2; i<(n/2+1);i++){
        if(n%i==0)
            return false;
    }
    return true;
}
int nguyenToLonNhat(int n){
        for(int j=n; j>2;j-- ){
            if(ngTo(j)==true)
                return j;
        }
}
int main(){
    int n;
    cout<<"Nhap so n:";
    cin>>n;
    if(n>=0&&n<100000){
        cout<<nguyenToLonNhat(n);
        return 0;
    }

    else
        return -1;
}
