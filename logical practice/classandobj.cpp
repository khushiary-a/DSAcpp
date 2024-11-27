#include<iostream>
using namespace std;
class A{
   
 int a;
 public:
  A(int x){
      a = x;
      cout<<"const: "<<a;
  }
  int getval(){
    return a;
  }
 A(int a ){
    cout<<a;
 }
};

int main(){
   A obj(1) ;
   obj.getval();
   obj.getval();
    return 0;
}
