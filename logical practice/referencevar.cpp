#include<iostream>
using namespace std;

int main(){
    int age = 2;
    int &age1 = age;
    cout<<"age: "<<age<<endl;
    cout<<"age1: "<<age1<<endl;
    age1 = 10;
     cout<<"age: "<<age<<endl;
    cout<<"age1: "<<age1<<endl;
    return 0;
}