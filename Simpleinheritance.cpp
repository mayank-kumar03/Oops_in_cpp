#include<bits/stdc++.h>
using namespace std;
class Rectangle{
      private:
      int length;
      int breadth;
public:
void setLength(int l){
      length=l;
}
void setBreadth(int b){
      breadth=b;
}
int getLength(){
      return length;
}
int getBreadth(){
      return breadth;
}
Rectangle(int l=0,int b=0){
      length=l;
      breadth=b;
}
int area(){
      return length*breadth;
}



};
class Cuboid:public Rectangle{
      private:
      int height;
public:
      Cuboid(int l=0,int b=0,int h=0){
            setLength(l);
            setBreadth(b);
            height=h;
      }
      void setHeight(int h){
            height=h;
      }
      int getHeight(){
            return height;
      }
      int volume(){
            return area()*height;
      }
};

int main(){
      Cuboid c(10,5,2);
      cout<<"Area of Rectangle: "<<c.area()<<endl;
      cout<<"Volume of Cuboid: "<<c.volume()<<endl;
      c.setLength(15);
      c.setBreadth(10);
      c.setHeight(5);
      cout<<"Updated Area of Rectangle: "<<c.area()<<endl;
      cout<<"Updated Volume of Cuboid: "<<c.volume()<<endl;
      return 0;
}