#include<iostream>
#include<list>
#include<string>

using namespace std;
int main(){ 
    list<int> li = {1,2,3,4,5};
     for(auto ele : li){
       cout<<ele<<"  ";
    }
    cout<<endl;
    cout<<"sum of ele : "<<endl;
    int sum =0;
    for(auto ele : li){
      sum=sum+ele;
    }
    cout<<sum;
    return 0;
}