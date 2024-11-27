#include<iostream>
using namespace std;
bool prime(int a ){
     bool val = false;
    for(int i = 2 ; i<a ;i++){
        if(a % i != 0){
          val = true;
        }else{
            val = false;
            break;
        }
    } 
      if(val == true){
       return val;
    }else{
       return val;
    }
}
int main(){
    int a ;
    cout<<"enter: ";
    cin>>a;
    bool val = false;
    for(int i = 1 ; i<a ;i++){
      bool vall1 =  prime(i);
       if(vall1 == true){
       cout<<i<<" is prime"<<endl;
       }else{
        cout<<i<<" is not prime"<<endl;
       }
    } 
   
    
    return 0;
}