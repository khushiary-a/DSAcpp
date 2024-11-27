#include<iostream>
using namespace std;
class Person{
     int age;
     string name;
     string country;

     public:
     void set(int a ){
      age = a;
     }
     int get(){
       return age;
     }
};
int main(){
     Person obj;
     obj.set(3);
  cout<<  obj.get();
    return 0;
}
