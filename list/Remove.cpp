#include<iostream>
#include<list>

using namespace std;
void removeduplicate(list<int> &list){
    list.sort();
    list.unique();
}
int main(){
    list<int> li = {1,2,2,3,3,4,4};
    for(auto ele : li){
       cout<<ele<<"  ";
    }
    cout<<endl;
    removeduplicate(li);
    cout<<"List after operation: "<<endl;
      for(auto ele : li){
       cout<<ele<<"  ";
    }
    return 0;
}