#include<iostream>
#include<list>

using namespace std;
int main(){ 
    cout<<"List 1 : "<<endl;
    list<int> li = {1,2,3,6};
    for(auto ele : li ){
        cout<<ele<<"  ";
    }
    cout<<endl;

     cout<<"List 2 : "<<endl;
    list<int> li2 = {1,7,8,5};
    for(auto ele : li ){
        cout<<ele<<"  ";
    }
    cout<<endl;

    li.sort();
    li2.sort();
    li.merge(li2);
    cout<<"The two merge sorted list :    "<<endl;
    for(auto ele : li ){
        cout<<ele<<"  ";
    }
    cout<<endl;

    return 0;
}