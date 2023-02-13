#include <iostream>
#include <exception>
using namespace std;
int main() {
 long long i = 1000000000000000000000 ;
 try
 {
 char* text =   new char[i] ;
 }
 catch (bad_alloc& e)
 {
 cout << "X";
 }
 catch (exception& e)
 {
 cout << "Y";
 }
 catch (...)
 {
 cout << "Z";
 }
 return 0;
}
