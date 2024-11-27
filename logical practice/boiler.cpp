#include<iostream>
#include<thread>
using namespace std;
void run(){
    cout<<"hello";
}
int main(){
    thread t1(run);
    t1.join();
    return 0;
}