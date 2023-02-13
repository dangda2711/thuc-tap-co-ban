#include <iostream>
#include<vector>
using namespace std;


int changeHorses(vector<int> a, int k, int s)
{
    int n= a.size();
    int dem=0;
    vector<int>::iterator i;
    i = a.begin();
    a.insert ( i , 0 );
    a.push_back(s);
    int chamNghi= a.at(0);
    for(i=a.begin(); i<a.end(); i++)
    {
        if((a.at(i+1)-a.at(i))>k)
            return -1;
        if((a.at(i+1)-chamNghi)>k)
        {
            dem ++;
            chamNghi= a.at(i);
        }
        else
            continue;


    }
    return dem;
}
int main(){
vector<int> a = {1,4,7, 12,14};
int k = 6;
int s = 15;
cout << "Result: " << changeHorses(a, k, s);
return 0;
}
