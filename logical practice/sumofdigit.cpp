#include<iostream>
using namespace std;
int main(){
    int a = 333;
    int ans = 0;
    while(a!= 0){
     int r = a%10;
     //ans = ans*10+r; //
      ans = ans+r;
     a = a/10;

    }
    cout<<ans;
    return 0;
}