#include<bits/stdc++.h>
using namespace std;

class ObjectPointer {
public:
int length;
int breadth;



int area() {
    return length * breadth; // Calculate area
}
};

int main(){
      ObjectPointer obj;
      obj.length = 5; // Set length
      obj.breadth = 10; // Set breadth
      cout << "Area of the rectangle: " << obj.area() << endl; // Output area
    
      ObjectPointer *obj1;
      obj1=&obj; // Create a pointer to ObjectPointer
      cout << "Area using pointer: " << obj1->area() << endl; // Output area using pointer
      ObjectPointer *obj2 = new ObjectPointer; // Dynamically allocate memory for ObjectPointer
      obj2->length = 7; // Set length for obj2
      obj2->breadth = 3; // Set breadth for obj2
      cout << "Area of dynamically allocated rectangle: " << obj2->area() << endl;
        return 0; // Return success

}
