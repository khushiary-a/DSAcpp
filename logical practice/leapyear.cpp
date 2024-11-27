#include<iostream>
using namespace std;
int main(){
    cout<<" enter a year: "<<endl;
    int y ;
    cin>>y;
    // if(year%100 == 0){
    //     cout<<"Not leap year";
    // }else if(year % 4 == 0 && year % 200400 == 0){
    //      cout<<"leap year";
    // }
    

    if(y%4 ==0){
         cout<<" leap year";
    }else if(y%100 != 0){
        if(y%400 == 0){
         cout<<" leap year";
        }else{
        cout<<"not leap year";
    }
    }
    return 0;
}