#include<iostream>
#include<math.h>
using namespace std;
void giaiPhuongTrinh(float a, float b, float c)
{
    if(a==0){
        if(b==0){
            if(c==0)
                cout<<"phuong trinh vo so nghiem"<<endl;
            else
                cout<<"Phuong trinh vo nghiem"<<endl;
        }
        else{
            cout<<"Phuong trinh co 1 nghiem duy nhat :"<<(-c/b)<<endl;
        }
    }
    else{
        float delta= b*b-4*a*c;
        if(delta==0){
            cout<<"Phuong trinh co 1 nghiem duy nhat x1=x2= "<<-b/(2*a)<<endl;
        }
        else if(delta>0){
            float x1=(-b+pow(delta, 0.5))/(2*a);
            float x2=(-b-pow(delta, 0.5))/(2*a);
            cout<<"Phuong trinh co 2 nghiem "<<endl;
            cout<<"x1= "<<x1<<endl;
            cout<<"x2= "<<x2<<endl;

        }
        else
            {
                float i= pow(-delta, 0.5);
                cout<<"Phuong trinh co 2 nghiem phuc  "<<endl;
                cout<<"x1= "<<-b/(2*a)<<"+"<<i/(2*a)<<"i"<<endl;
                cout<<"x1= "<<-b/(2*a)<<"-"<<i/(2*a)<<"i"<<endl;
            }
    }
}

int main()
{
    float a, b, c;
    cout<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;
    cout<<"c= ";
    cin>>c;
    giaiPhuongTrinh(a, b, c);
    return 0;
}
