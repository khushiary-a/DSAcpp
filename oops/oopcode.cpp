#include<iostream>
using namespace std;
class Vehicle{
     public:
     Vehicle(){
        cout<<"I M V CONST"<<endl;

     }
     ~Vehicle(){
        cout<<"I m a deconstructor"<<endl;
     }
};
class car:public Vehicle{
    public:
    car(){
        cout<<"I m a car cont"<<endl;
    }
};
int main(){
    car obj;

    return 0;
}