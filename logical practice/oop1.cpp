#include<iostream>
#include<thread>
using namespace std;
class A{
   public:
//    static void fun(){
//     cout<<"heelo static";
//    }
   void fun(){
        cout<<"hello";
   }
  
};
int main(){
    A obj;
    thread  t1(&A::fun , &obj);
    t1.join();
    return 0;
}