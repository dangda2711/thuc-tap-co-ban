// in ra ket qua 3 vì incr2 không thực thi x++
#include<iostream>
void incr1(int& x){ // increase 1
 x++;
 }
 int incr2(int x){ // increase 1
 return x++;
 }
 int main(){
     int v = 2;
 incr1(v);
 v = incr2(v);
std::cout<<v<<std::endl;
 return 0;}
// bài 4: chọn C không tham chiếu được con trỏ null là sai vì vẫn có thể tham chiếu được con trỏ null
// Bài 5: chọn D vì giá trị của tham chiếu có thể thay đổi sau khi khởi tạo
