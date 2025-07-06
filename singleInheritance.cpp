#include<iostream>
using namespace std;

/*
Inherritance 




*/



class Scooty{
public:
      int tospeed;
      float milage;

      void display(){
            cout<<"tospeed: "<<tospeed<<"  milage:  "<<milage;
      }
private:
     int bootspace;
     


};
class Twowheeler{
      public:
            int speed;
};

class Bike: public Scooty,public Twowheeler{
      public:
         int gears;

         

};

// ...existing code...

int main(){
      Bike b1;
      b1.gears = 5;
      b1.tospeed = 100;
      b1.milage = 55.5;      // Set milage before display
      b1.speed = 152;
      b1.display();
      cout << "\nGears: " << b1.gears << "  Speed: " << b1.speed << endl;
      return 0;
}
// ...existing code...