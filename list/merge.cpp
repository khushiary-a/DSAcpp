#include<iostream>
#include<list>
using namespace std;
int main(){
   list<int> li1 = {1,2,3,4};
   list<int> li2 = {4,2,4,5};
    li1.merge(li2);
    li1.sort();
    for(auto i : li1){
        cout<<i<<"  ";
    }
    return 0;
}