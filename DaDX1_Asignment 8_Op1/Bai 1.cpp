#include<iostream>
using namespace std;
class String
{
    char* str;
    int size;
public:
    String(int n):size(n){str= new char[size];}
    String(String& str1){
        str= new char[sizeof(str1)];
        for(int i=0; *(str1.str+i)!= '\n'; i++){
            *(str+i)=*(str1.str+i);
        }
    }
    friend istream& operator>>(istream &is, String & str1);

    friend ostream& operator<<(ostream &os, String &str1);
    ~String(){
        if(size<=0&& str== nullptr){
            cout<<"Chuoi da trong"<<endl;
        }
        else{
            delete[] str;
            size =0;
            str= nullptr;
        }

    }
    String& operator+(String &str1)
    {
        int i, j;
        for(i=0; *(str+i)!='\0'; ++i);
        for(j=0; *(str1.str+j)!='\0'; ++j, ++i)
        {
                *(str+i)=*(str1.str+j);
        }
        str[i]='\0';
        return *this;
    }
    void daoChuoi()
    {
        char *temp= new char[size];
        for(int i= 0; i<size; i++){
            *(temp+i)= *(str+(size-i));
        }
        for(int j=0; j<size; j++){
            *(str+j)= *(str+j);
        }
    }
    bool soSanh(String &str1)
    {
        if(this->chieuDai()!=str1.chieuDai()){
            return false;
        }
        for(int i=0; i<this->chieuDai(); i++){
            if(*(str+i)!=*(str1.str+i))
                return false;
        }
        return true;
    }
    int chieuDai(){
        int count=0;
       for(int i=0;*(str+i)!=NULL; i++)
            count++;
        return count;
    }
};
istream& operator>>(istream &is, String & str1){
        cout<<"Nhap chuoi:";
        is.getline(str1.str, 100);
        return is;
    }
 ostream& operator<<(ostream &os, String &str1){
     int i;
     for(i=0;str1.str[i]!=NULL; i++){
        os<<*(str1.str+i);
     }
     return os;
 }
int main()
{
    int n=100;
    String *str1= new String(n);
    cin>>*str1;
    cout<<(*str1).chieuDai()<<endl;
    cout<<"Xuat chuoi 1: ";
    cout<<*str1<<endl;
    String *str2= new String(n);
    cout<<"Nhap chuoi so 2"<<endl;
    cin>>*str2;
    cout<<"Loi hai chuoi: "<<*str1+*str2<<endl;
    if(str1->soSanh(*str2)){
        cout<<"hai chuoi giong nhau"<<endl;
    }
    else
        cout<<"hai chuoi khac nhau"<<endl;

    return 0;
}
