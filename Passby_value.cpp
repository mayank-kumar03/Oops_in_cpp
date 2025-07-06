#include<iostream>
#include<string>
using namespace std;
class Car{
public:
    string name;
    int model;
    float price;


};
void changeCar(Car &car) {
    car.name = "Changed Name";
    car.model = 2025;
    car.price = 40000.00;
}

int main(){
    Car car1;
    car1.name = "Toyota";
    car1.model = 2022;
    car1.price = 30000.50;
      changeCar(car1); // This will not change car1's attributes

    Car car2;
    car2.name = "Honda";
    car2.model = 2023;
    car2.price = 32000.75;

    cout << "Car 1 Name: " << car1.name << endl;
    cout << "Car 1 Model: " << car1.model << endl;
    cout << "Car 1 Price: $" << car1.price << endl;

    cout << "Car 2 Name: " << car2.name << endl;
    cout << "Car 2 Model: " << car2.model << endl;
    cout << "Car 2 Price: $" << car2.price << endl;

    return 0;
}     