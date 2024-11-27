#include<iostream>
using namespace std;
class Bird{
   public: 
   void fly(){
    cout<<"I can fly"<<endl;
   }
};
class fish{
    public:
    void swim(){
        cout<<"I can swim"<<endl;
    }
};
class Pengun : public Bird , public fish{
    
};

int main(){
    Pengun obj;
    obj.fly();
    obj.swim();
    return 0;
}