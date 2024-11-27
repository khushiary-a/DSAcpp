#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> li = {1,2,3,2,3,6};
    for(auto ele : li ){
        cout<<ele<<"  ";
    }
    cout<<endl;
    int a;
    cout<<"Enter ele to find : "<<endl;
    cin>>a;

    bool ans = false;
    for(auto ele : li){
        if(ele == a){
            cout<<"ele is present in the list";
            ans = true;
            break;
        }
    }
 
    if(!ans){
        cout<<"not in li";
    }
    
    return 0;
}