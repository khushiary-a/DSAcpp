#include<iostream>
using namespace std;
int main(){
    // char a = 'a';
    // int b = a;
    //  cout<<a<<endl;
    // cout<<b<<endl;
    
    bool hasLower = false;
    bool hasUpper = false ;
    
    string str ;
    cout<<"enter: ";
    cin>>str;
      for (int i = 0; i < str.length(); i++) {
        int a = str[i];
        if (a >= 97 && a <= 122) {
            hasLower = true;
        } else if (a >= 65 && a <= 90) {
            hasUpper = true;
        }
    }
    if(hasLower){
        cout<<"Its in LOWER case ";
    }
    if(hasUpper){
        cout<<"Its in Upper case ";
    }
    if(!hasUpper && !hasLower){
        cout<<"Its not LOWER case not upper case";
    }
    return 0;
}