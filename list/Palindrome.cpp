#include<iostream>
#include<list>
#include<string>

using namespace std;
int main(){ 
     list<int> li = {1,2,3,2,1};
     for(auto ele : li){
       cout<<ele<<"  ";
    }
    cout<<endl;
   list<int> li1 = li;
   li1.reverse();
   if(li == li1){
    cout<<"true";

   }else{
    cout<<"false";
   }
    return 0;
}