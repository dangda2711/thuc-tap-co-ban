
 class ZooAnimal
 {
 protected:
 char* name;
 int cageNumber;
 int weightDate;
 int weight;
 public:
ZooAnimal();
 ZooAnimal (char*, int, int, int); // constructor function
 inline ~ZooAnimal () { delete [] name; }; // destructor function
 void changeWeight (int pounds);
 char* reptName ();
 int reptWeight ();
 int daysSinceLastWeighed (int today);
 };
 // -------- member function to return the animal's name
 char* ZooAnimal::reptName ()
 {
 return name;
 }

 class LargeAnimal : public ZooAnimal
 {
 private:
 char* species;
 float cageMinimumVolume;
 public:
LargeAnimal();
 LargeAnimal (char*, int, int, int, char*, float); // constructor function
 inline ~LargeAnimal () { delete [] species; }; // destructor function
 float reptCageMinimumVolume ();
 //char* reptName ();// không định nghĩa lại hàm char* reptName()
 };
 // -------- member function to return the large animal's species

#include<iostream>
 // ========== an application to use the LargeAnimal class
 using namespace std;
 int main ()
 {

 ZooAnimal bozo;
 LargeAnimal gonzo;
 cout << bozo.reptName () << endl;
 cout << gonzo.ZooAnimal::reptName () << endl;

 return 0;
 }
