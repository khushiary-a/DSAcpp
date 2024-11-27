#include<iostream>
#include<thread>
#include<chrono>
using namespace std;
void fun(int a )
{
    for(int i = 0 ; i<a ; i++){
        cout<<i<<" times"<<endl;
        this_thread::sleep_for(chrono::seconds(i));
    }
}
int main(){
    thread t (fun , 6);
     t.join();
 


    return 0;
}