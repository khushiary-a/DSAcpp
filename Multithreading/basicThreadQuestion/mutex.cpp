#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
mutex m;
void fun(string str ){
   for(int i = 0 ; i<8 ; i++){
    m.lock();
    cout<<i<<"  times for "<<str<<endl;
    m.unlock();
   }
   cout<<"      "<<endl;
}
int main(){

      thread t1(fun , "t1");
      thread t2(fun , "t2");
      thread t3(fun , "t3");
      
      t1.join();

      t2.join();
      t3.join();
    return 0;
}