 #include<iostream>
 class ZooAnimal
 {
 private:
 char* name;
 int cageNumber;
 int weightDate;
 int weight;
 public:
ZooAnimal();
 ZooAnimal (char*, int, int, int); // constructor function
 inline ~ZooAnimal () { delete [] name; }; // destructor function
 void changeWeight (int pounds);
 virtual char* reptName ();                                // Dùng hàm ảo có thể được định nghĩa lại ở các lớp dẫn xuất
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
 char* reptName ();// định nghĩa lại hàm char* reptName()
 };
 // -------- member function to return the large animal's species
 char* LargeAnimal::reptName ()                        // hàm thay thế có tên giống với hàm ảo của lớp cơ sơ
 {
 return species;
 }

