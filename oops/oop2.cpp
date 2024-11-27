#include<iostream>
using namespace std;
class mycls{
    public:
    mycls(){
        cout<<"hello d";
    }
    mycls(int a ){
        cout<<a;
    }
};
int main(){
   // mycls obj = new mycls(2);
  // default constructor is not called if param is called and vice varsa 
   mycls obj(2);
   mycls obj2 = obj;// copy constructor 
   mycls obj3(obj); // copy constructor
    
    
    return 0;
}