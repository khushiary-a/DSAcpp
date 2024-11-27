// You are designing an HMI for managing a list of user data in a system. The system should allow you to:
// Iterate through the users and display their details.
// Find a user by ID.
// Count how many users are over the age of 30.
// Modify the list (e.g., replacing a user’s email address or removing users with certain criteria).
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct User{
    int id;
    string name;
    int age ;
};

void display(vector<User> user){
    for_each(user.begin(),user.end(),[](User user){
         cout<<"The id is : "<<user.id<<" Name is "<<user.name<<" Age is "<<user.age<<endl;
    });
}
void findbyid(vector<User> user ,int id){
   auto it =  find_if(user.begin(),user.end(),[id](User user){
      return user.id == id;
    });
    if(it!=user.end()){
      cout<<"The id is : "<<it->id<<" Name is "<<it->name<<" Age is "<<it->age<<endl;
    }
}
void findbyage(vector<User> user ,int age){
    
   int count ;
   auto it =  find_if(user.begin(),user.end(),[age , count](User user){ 
       
      return user.age == age;
    });
    if(it!=user.end()){
      cout<<"The id is : "<<it->id<<" Name is "<<it->name<<" Age is "<<it->age<<endl;
    }
    
}
void getdata(vector<User> user , int id){
    bool it = binary_search(user.begin(), user.end() , id);
    for(auto obj : user){
        if(obj.id == id){
             cout<<"The id is : "<<obj.id<<" Name is "<<obj.name<<" Age is "<<obj.age<<endl;
        }
    }


}
int main(){
 
    vector<User> v1 = {{1 , "A" ,30},{2,"B",22},{3,"M",30},{4,"N" , 42},{5,"P" , 11}};
    display(v1);
    cout<<"data by id: "<<endl;
     findbyid(v1 , 1);
     findbyid(v1 , 1);
     cout<<"the user of age 30 is: "<<endl;
     findbyage(v1 , 30);
     cout<<"find a particular person by id : "<<endl;
     getdata(v1,2);
    return 0; 
}
