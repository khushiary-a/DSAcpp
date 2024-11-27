#include<iostream>
#include<list>
#include <algorithm>
using namespace std;
int is_even(int n){
    return n % 2 != 0;
}
int main(){
    list<int> li1 = {1,2,3,4};
    //list<int> li(1);// list is intilaized with two zeros ;

    list<int> li2  ={6,7,8};
    copy(li1.begin() , li1.end() , li2.begin());

    for(auto li : li2){
        cout<<li<<"  ";
    }
     cout<<endl;
    fill(li2.begin() , li2.end() , 5);

    for(auto li : li2){
        cout<<li<<"  ";
    }
    cout<<endl;
   generate(li2.begin(), li2.end(),[](){
         return 2;
   });
    for(auto li : li2){
        cout<<li<<"  ";
    }
    cout<<endl;
    replace(li2.begin() , li2.end() , 2,10);
    for(auto li : li2){
        cout<<li<<"  ";
    }
    cout<<endl;

    auto new_end =  remove_if(li2.begin() , li2.end(), is_even);// it does not shrink the container but returns an iterator to the 
    //new end  this ele is stroed in diff container and manuallyy we have to those ele from the container 
    li2.erase(new_end ,li2.end() );
    for(auto li : li2){
        cout<<li<<"  ";
    }
    cout<<endl;
    partition(li1.begin() , li1.end() ,is_even ); 
    
    for(auto i :  li1){
        cout<<i;
    }
    return 0;
}