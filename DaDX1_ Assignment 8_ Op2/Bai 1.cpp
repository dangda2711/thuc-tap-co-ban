class ZooAnimal
 {
 private:
     char* name;
     int cageNumber;
     int weightDate;
     int weight;
 public:
     ZooAnimal (char* name, int cage, int wd, int w); // constructor function
     inline ~ZooAnimal () { delete [] name; }; // destructor function
     void changeWeight (int pounds);
     char* reptName ();
     int reptWeight ();
     int daysSinceLastWeighed (int today);
 };
 class LargeAnimal :public ZooAnimal// class LargeAnimal là lớp dẫn xuất của lớp cơ sở ZooAnimal
 {
 private:
     char* species;
     float cageMinimumVolume;
 public:
     LargeAnimal (char* species, int cageNum, int wd, int w, float):ZooAnimal(species,cageNum, wd,w){} // constructor function
    inline ~LargeAnimal () { delete [] species; }; // destructor function
      float reptCageMinimumVolume ();
 };
