#include<iostream>
#include<list>
#include<set>
using namespace std;
int main(){ 
   list<int> li1 = {1,2,3,4,5,5};
     set<int> s ;
     s.insert(li1.begin() , li1.end());
  for(auto i :  s){
    cout<<i<<"  ";
  }

  
    return 0;
}