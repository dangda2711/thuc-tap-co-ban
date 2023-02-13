#include <iostream>

using namespace std;

unsigned long long Pow(int a, int n_pow){
    unsigned long long M=1;
    for(int i=0; i<n_pow;++i){
        M= M*a;
    }
    return M;
}

int main()
{

    short int si;
    int myNum= 50;
    int myNum1= 19;
    myNum =myNum+myNum1;
    short int X=(Pow(2, sizeof(si)*8)/2-1)-myNum;
    short int Y=-(Pow(2, sizeof(si)*8)/2)-myNum1;
    cout << "X= "<<X << endl;
    cout<<"Y= "<<Y<<endl;

    return 0;
}
