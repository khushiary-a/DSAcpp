
#include<iostream>
using namespace std;
template <typename t>
//function
t fun(t a , t b){
    return a+b;
}
//class
template <class t>
class Myclass{
    public: 
    t fun2(t a){
      return a;
    }
};
char fun3(char a){
    return a;
}
int main(){
    cout<<fun(1,2);
   Myclass<int> obj;
  cout<<obj.fun2(1);
  cout<<fun3('A');
    return 0;
}