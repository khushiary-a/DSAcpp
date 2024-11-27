#include<iostream>
using namespace std;
class Employee{
    public: 
   virtual void salary() =0;
};
class Parttime : public Employee{
   public: 
  void salary(){
    cout<<"Part itme : 600"<<endl;
  }
};
class Fulltime : public Employee{
   public: 
  void salary(){
    cout<<"Part itme : 1,200"<<endl;
  }
};
int main(){

   Parttime obj1;
   obj1.salary();
   Fulltime obj2;
   obj2.salary();
  return 0;
}