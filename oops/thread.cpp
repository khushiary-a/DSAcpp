// Online C++ compiler to run C++ program online
#include <iostream>
#include <thread>
using namespace std;
void fun(){
    cout<<"reading"<<endl;
}
int main() {
    thread obj(fun);
    obj.join();
    
   obj.detach();
    return 0;
}