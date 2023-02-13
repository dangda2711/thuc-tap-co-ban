#include<iostream>
#include<cstring>
using namespace std;
int doDaiChuoi(char* &str){
    int count=0;
    for(int i=0;*(str+i)!=NULL ;i++){
        count++;
    }
    return count;
}
int main(){
    char *string1= new char[10];
    char *string2=  new char[10];
    cout<<"nhap chuoi 1:";
    cin.getline(string1, 10);
    cout<<"nhap chuoi 2:";
    cin.getline(string2, 10);

    if(doDaiChuoi(string1)>doDaiChuoi(string2))
        cout<<"string 1: "<<string1<<endl;
    else
        cout<<"string 2: "<<string2<<endl;
    return 0;
}
