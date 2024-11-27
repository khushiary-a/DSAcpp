#include<iostream>
#include <memory> 
using namespace std;
int main(){
    unique_ptr<int> p(new int(10));
       
       // cout << *p << endl; // Optional: Print the value to verify
        cout << *p <<endl;
         cout<< p.get();
    return 0;
}