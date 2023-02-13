class ZooAnimal
 {
 protected:
 char* name;
 int cageNumber;
 int weightDate;
 int weight;
 public:
 ZooAnimal (char*, int, int, int); // constructor function
 inline ~ZooAnimal () { delete [] name; }; // destructor function
 void changeWeight (int pounds);
 char* reptName ();
 int reptWeight ();
 int daysSinceLastWeighed (int today);
 };
 class Mammal
 {
 protected:
 float minimumVolume;
 int minimumWeight;
 public:
 Mammal (float, int); // constructor function
 inline ~Mammal () {}; // destructor function
 float reptminimumVolume ();
 int reptminimumWeight ();
 };
 class LargeAnimal:public ZooAnimal, public Mammal// class LargAnimal đa kế thừa 2 lớp ZooAnimail, Mammal
 {
 protected:
 char* species;
 float cageMinimumVolume;
 public:
 LargeAnimal (char*, int, int, int, float, float, int); // constructor
 inline ~LargeAnimal () { delete [] species; }; // destructor function
 float reptCageMinimumVolume ();
 };
