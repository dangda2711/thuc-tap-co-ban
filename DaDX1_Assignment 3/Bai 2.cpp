#include<iostream>
#include<cstring>
#include<string>

using namespace std;
void daoChuoi(char* c1, char* &c2){
    int n = strlen(c1);
    for(int i=0; i<n; i++){
        c2[i]=c1[n-i-1];
    }
}
int main ()
{
    char* chuoi1= new char[10];
    char* chuoi2= new char[10];
    cout<<"Nhap chuoi ki tu: ";
    cin.getline(chuoi1, 10);
    daoChuoi(chuoi1, chuoi2);
    int n = strlen(chuoi1);
    cout<<"\nChuoi dao cua hello la:"<<endl;
    for(int i=0; i<n; i++){
       cout<<chuoi2[i];
    }


    return 0;

}
