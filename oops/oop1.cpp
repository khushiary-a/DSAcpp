#include<iostream>
using namespace std;
class mycls{
    public:
    int a =  10;
    int myfun(){
        return a;
    } 
    public:
    mycls(int a){
        cout<<"i am a constructor"<<a<<endl;
    }
};
int main(){
   // mycls obj = new mycls(2);
   mycls obj(2);
    cout<<obj.myfun();
    return 0;
}