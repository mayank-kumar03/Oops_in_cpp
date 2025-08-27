#include<bits/stdc++.h>
using namespace std;


class Student{
      public:
      string name;
      int rollno;
      string branch;

      friend ofstream & operator<<(ofstream & ofs,Student &s);
      friend ifstream & operator>>(ifstream & ifs,Student &s);
      

};
ofstream & operator<<(ofstream & ofs,Student & s){
      ofs<<s.name<<endl;
      ofs<<s.branch<<endl;
      ofs<<s.rollno<<endl;
      return ofs;
}
ifstream & operator>>(ifstream & ifs,Student & s){
     ifs >> s.name>>s.branch>>s.rollno;
     return ifs;

}

int main(){
      Student s;
      ifstream ifs("student.txt");
     
      //ofs<<s<<endl;
      Student s2;
      ifs>>s2;
      cout<<s2.name<<endl;
    
      
      ifs.close();
      //ofs<<s2<<endl;
      
}