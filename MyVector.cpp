#include<iostream>
#include<string>
using namespace std;    
class MyVector {
public:
      int* arr; // Pointer to hold the array
      int size; // Size of the vector
      int capacity; // Capacity of the vector (not used in this simple implementation)
      // Default constructor
      MyVector() {
            size = 0; // Initialize size to 0
            capacity=1;
            arr = new int[1]; 
      }
     void push_back(int value) {
            if (size == capacity) {
                  // If size equals capacity, we need to resize the array
                  int* newArr = new int[capacity * 2]; // Create a new array with double the capacity
                  for (int i = 0; i < size; i++) {
                        newArr[i] = arr[i]; // Copy old elements to the new array
                  }
                  delete[] arr; // Free the old array memory
                  arr = newArr; // Point arr to the new array
                  capacity *= 2; // Update capacity
            }
            arr[size] = value; // Add the new value at the end of the array
            size++; // Increment size
      }

     
      
      // Destructor to free the allocated memory
      ~MyVector() {
            delete[] arr; // Free the dynamically allocated memory
      }
      void print() {
            for (int i = 0; i < size; i++) {
                  cout << arr[i] << " "; // Print each element
            }
            cout << endl;
      }
      int getvalue(int index) {
            if (index >= 0 && index < size) {
                  return arr[index]; // Return the value at the specified index
            } else {
                  cout << "Index out of bounds!" << endl; // Handle out of bounds access
                  return -1; // Return an invalid value
            }
      }
      void pop_back() {
            if (size > 0) {
                  size--; // Decrease size to remove the last element
            } else {
                  cout << "Vector is empty!" << endl; // Handle pop on empty vector
            }
      }
};
      
     

int main() {
      MyVector vec; // Create an instance of MyVector
      cout<<vec.size<<" "<<vec.capacity<<endl; // Print initial size and capacity
      vec.push_back(10); // Add elements to the vector
      vec.push_back(20);
      vec.push_back(30);
      cout<<vec.size<<" "<<vec.capacity<<endl; // Print size and capacity after adding elements
      vec.print(); // Print the elements in the vector
      vec.push_back(40);
      vec.push_back(50);
        vec.print(); // Print the elements in the vector again
      cout<<vec.size<<" "<<vec.capacity<<endl; // Print size and capacity after adding more elements
      cout << "Value at index 2: " << vec.getvalue(2) << endl; // Get value at index 2
      cout << "Value at index 5: " << vec.getvalue(5) << endl; // Attempt to get value at an out-of-bounds index


      vec.pop_back(); // Remove the last element
      cout << "After pop_back:" << endl;
      vec.print(); // Print the elements after popping back
      cout<<vec.size<<" "<<vec.capacity<<endl; // Print size and capacity after popping
      vec.pop_back(); // Remove another element
      cout << "After another pop_back:" << endl;
      vec.print(); // Print the elements after another pop
      cout<<vec.size<<" "<<vec.capacity<<endl; // Print size and capacity after another
     
    
      return 0;
}