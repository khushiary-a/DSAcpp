#include <iostream>
using  namespace std;
int main(){
    // fibonacc series 
    // int f = 0 , s = 1;
    // int fact = 0;
    // for(int i = 0 ; i<=10 ; i++){
    //     fact = f+s;
    //     cout<<fact<<endl;
    //     f = s;
    //     s = fact;
    // }

    // factorial 
    int a;
    cout<<"Enter "<<endl;
    cin>>a;
    int fact =1 , i= 1;

    for(int i = 1 ; i<=a ; i++ ){
         fact = fact * i;
        
    }
    cout<<fact;

    // while(i<=a){
    //     fact= fact*i;
    //     i++;
    // }
    // cout<<fact;




    return 0;
}