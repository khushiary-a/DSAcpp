#include<iostream>
using namespace std;
// Create a base class Shape with a virtual method area(). Derive classes Rectangle and Triangle, 
// each overriding the area() method. Write a function that takes a pointer 
// to Shape and prints the area of any derived class.
class shape{
   public: 
   virtual void area(){
    cout<<"I m from sphpe";
   }
};
class rec:public shape{
   public:
   virtual void area(){
    cout<<"I m from rec"<<endl;
   }
};
class tri:public shape{
    public:
    virtual void area(){
        cout<<"I from tri"<<endl;
    }
};





int main(){
    shape *obj1 = new rec();
    shape *obj2 = new tri();
    obj1->area();
    obj2->area();
    
    // shape *obj2 = new rec();
    // obj2->area();
    // rec obj;
    // obj.area();
    // tri obj1;
    // obj1.area();
    return 0;
}