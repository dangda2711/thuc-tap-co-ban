
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
int weight;
 public:

 Mammal (float, int); // constructor function
 inline ~Mammal () {}; // destructor function
 float reptminimumVolume (){return minimumVolume;}
 int reptWeight ();
 };
 class LargeAnimal : public ZooAnimal, public Mammal
 {
 protected:
 char* species;
 float cageMinimumVolume;
 public:

 LargeAnimal (char*, int, int, int, float, float, int); // constructor
 inline ~LargeAnimal () { delete [] species; }; // destructor function
 float reptCageMinimumVolume ();
 };
 // -------- member function to return the minimum cage volume
 // -------- needed for this large animal
 float LargeAnimal::reptCageMinimumVolume ()
 {
 if (Mammal::weight < 500)       //thêm Mammal :: thuộc tính của lớp Mammal
    return cageMinimumVolume;
 else {return reptminimumVolume ();}
 }
