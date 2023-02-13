#include <iostream>
using namespace std;
double U(int n)
{
    if(n==2||n==1)
        return 1;
    else
        return (4*U(n-1)+3*U(n-2));
}
int main()
{
    int n =10;
    cout<<U(n);
    return 0;
}
