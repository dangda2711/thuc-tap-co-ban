#include <iostream>
using namespace std;
//Ta tìm ra được giải thuật của bài toán
/*ta thấy số phần bánh cắt ra nhiều nhất của lần cắt bánh thứ n thì bằng n cộng với số phần bánh
cắt ra ở lần cắt thứ n-1
*/
int cakeCutting(int n)
{
    if(n==1){
        return 2;
    }
    return (n+cakeCutting(n-1)); // Thuật toán ta sử dụng đệ quy để tính số phần bánh nhiều nhất
}
int main(){
    int n;
    while(true){
        cout<<"Nhap so lan cat banh: "; cin>>n;
        if(n>=0&&n<=100){break;}
        else{
            cout<<"Nhap lai gia tri 0<=n<=100"<<endl;
            continue;
        }
    }
    cout<<"So phan cat duoc nhieu nhat sau "<<n<<" lan cat : "<<cakeCutting(n)<<" phan"<<endl;
    return 0;
}
