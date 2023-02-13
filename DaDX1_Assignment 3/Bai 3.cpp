#include <iostream>

using namespace std;
void input(int *arr, int n){
    for(int i=0; i<n;i++){
        cout<<"arr["<<i<<"]=";
        cin>>*(arr+i);
    }
}
void output(int * arr, int n ){
    cout<<"\narr[i]=";
    for(int i=0; i<n;i++){
        cout<<"\t"<<*(arr+i);
    }
}
void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}
void sapXepTang(int *arr, int n){
    int min;
    for(int i=0;i<n; i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(*(arr+min)>*(arr+j))
                min= j;
        }
        if(min!=i)
            swap(arr[i], arr[min]);
    }
}
void sapXepGiam(int *arr, int n){
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(arr[j]>arr[j-1]){
                swap(arr[j], arr[j-1]);
            }
        }
    }
}
int main(){
    int* arr= new int[100];
    int n;
    cout<<"Nhap so phan tu:";
    cin>>n;
    input(arr, n);
    sapXepTang(arr, n);
    output(arr, n);
    return 0;
}

