#include <iostream>
using namespace std;
class A{
  public:
  void dis1(){
    cout<<"hello1"<<endl;
  }
};
class B{
  public:
  void dis2(){
    cout<<"hello2"<<endl;
  }
};
class C : public A , public B{
  public:
  void dis3(){
    cout<<"hello3"<<endl;
  }
};
int main(){
    C obj;
    obj.dis1();
    obj.dis2();
    obj.dis3();
    return 0;
}