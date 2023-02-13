#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string ten;
    cout<<"Nhap ten nguoi dung: ";
    getline(cin, ten);
    for(int i=0; i<5; i++)
    {
        if(i==0||i==4){
        for(int j=0; j<30;j++ ){
            cout<<"*";
        }
        }
        else if(i==2){
            cout<<"*"<<ten;
            for(int j= 0; j<(28-ten.size()); j++){
                cout<<" ";
            }
            cout<<"*";

        }
        else
        {
            for(int j=0; j<30;j++ ){
                    if(j==0||j==29)cout<<"*";
            else
                cout<<" ";
            }
        }
        cout<<endl;

    }
    return 0;
}
