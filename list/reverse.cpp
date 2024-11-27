#include<iostream>
#include<list>

using namespace std;
int main(){ 
     list<int> li = {1,2,3,2,3,6};
    for(auto ele : li ){
        cout<<ele<<"  ";
    }
    cout<<endl;
    li.reverse();
    for(auto ele : li ){
        cout<<ele<<"  ";
    }

    return 0;
}