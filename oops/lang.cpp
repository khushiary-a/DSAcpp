#include<iostream>
using namespace std;
enum ms{braek,lunch , dinner};
auto a = [](){
 cout<<"heelo lambada";
};
int main(){
    tuple <int, string , char>mytuple(1,"one" , 'o');
    //cout<<get<0>(mytuple);
    // ms cc = braek;
    // if(cc == braek){
    //     cout<<"OK";
    // }else{
    //     cout<<"not ok";
    // }

    //  a();

    //  auto a = 10;
    //  cout<<typeid(a).name();

    int ARR[] = {1,2,3,4,4593,4392,423,34,234,234,234,234,234,234,234,234};
     for(int a : ARR){
        cout<<" "<<a;
     }
    return 0;
}