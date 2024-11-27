#include<iostream>
#include<thread>
using namespace std;
//function pointer
// void fun1(){
//     cout<<"hello fun 1"<<endl;
// }
// void fun2(){
//     cout<<"hello fun 2"<<endl;
// }

//Lambda function
// auto f = [](){
//     cout<<"hello Lambda";
// };

//function object
class A{
    public: 
    void operator()(){
    cout<<"hello";
    }
};

int main(){
    A obj;
    thread t1(obj);
    t1.join();

//   thread t1(f);
//   t1.join();

    // thread t1(fun1);    
    //    thread t2(fun2);
    //    t1.join();
    //    t2.join();

    // fun1();
    // fun2();
    return 0;
}