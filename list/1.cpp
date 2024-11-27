#include<iostream>
#include<list>
using namespace std;
int main(){
    // list<int> li;
    // li = {1,2,1,4,5,0};
    // cout<<"list 1"<<endl;
    // for(auto el:li){
    //     cout<<el<<"  ";
    // }



    cout<<endl;
     list<int> li1;
    li1 = {1,8,9,6};

    
  cout<<"list 2"<<endl;
  for(auto el:li1){
        cout<<el<<"  ";
    }
  cout<<endl;
 li1.push_back(3);
 li1.push_front(6);
 li1.remove(8);
 cout<<"list 2"<<endl;
  for(auto el:li1){
        cout<<el<<"  ";
    }
 
    return 0;
}