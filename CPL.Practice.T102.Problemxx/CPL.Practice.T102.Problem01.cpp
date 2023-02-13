#include<iostream>
#include<math.h>
using namespace std;
class TamGiac
{
private:
    float *threePointCoordinates;
public:
    TamGiac()
    {
        threePointCoordinates= NULL;
    }
    ~TamGiac()
    {
        delete [] threePointCoordinates;
    }
    void nhap()
    {
        threePointCoordinates = new float[6];
        cout<<"Nhap toa do 3 diem cua tam giac lan luot A, B, C: ";
        for(int i=0; i<6; ++i){
            cin>>*(threePointCoordinates+i);
        }
    }
    void typeOfTriangle(){
        // gia trị a , b, c la độ dài 3 canh cua tam giác
    float a= sqrt(pow((threePointCoordinates[0]-threePointCoordinates[2]),2)+pow((threePointCoordinates[1]-threePointCoordinates[3]),2));
    float b= sqrt(pow((threePointCoordinates[2]-threePointCoordinates[4]),2)+pow((threePointCoordinates[3]-threePointCoordinates[5]),2));
    float c= sqrt(pow((threePointCoordinates[0]-threePointCoordinates[4]),2)+pow((threePointCoordinates[1]-threePointCoordinates[5]),2));
    //kiểm tra 3 cạnh của tam giác có phải tam giác hay không
    if((a<b+c) && (b<a+c) && (c<a+b)){
            // kiểm tra xem 3 điểm A B C có phải 3 điểm của tam giác Vuông
        if((pow(a, 2)==pow(b, 2)+pow(c, 2))||(pow(b, 2)==pow(a, 2)+pow(c, 2))||(pow(c, 2)==pow(b, 2)+pow(a, 2)))
        {
            //Kiểm tra tam giac vuong can
            if(a==b||a==c||b==c)
                cout<<"Right-Isoscel Triangle";
            else
                cout<<"Right Triangle";
        }
        //Kiểm tra tam giác đều
        else if( a==b&&b==c)
        {
            cout<<"Equilateral Triangle ";
        }
        //kiểm tra tam gíac cân
        else if(a==b||a==c||b==c)
        {
            cout<<"Isoscel Triangle";
        }
        else
        {
            cout<<"Normal Triangle"<<endl;
        }
    }
    // A B C không phải 3 điểm của 1 tam giác
    else
    {
        cout<<"Not a Triangle";
    }
    }
};
int main()
{
    TamGiac tg;
    tg.nhap();
    cout<<"Kieu cua tam giac vua nhap"<<endl;
    tg.typeOfTriangle();
    return 0;
}
