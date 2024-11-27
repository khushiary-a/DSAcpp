#include<iostream>
using namespace std;
class Transport{
    public:
    virtual void drive() = 0;
};
class Car : public Transport{
    public:
    void drive() override{
        cout<<"Choosing car"<<endl;
    }
};
class plane : public Transport{
    public:
    void drive() override{
        cout<<"Choosing plane"<<endl;
    }
};
class train : public Transport{
    public:
    void drive() override{
        cout<<"Choosing auto"<<endl;
    }
};
class TransportContext{
 private:
  Transport* transport;//Transport is not intereface so we cannot create obj thats y we are creating obj pointer it will just point to the pointer 
    
  public:
  void setvalue(Transport* transport){
     this->transport = transport;
  }
  void Execute(){
     transport->drive();
  }
};

int main(){
    TransportContext obj ;
    Car* car = new Car();
    obj.setvalue(car);
    obj.Execute();

    
    return 0;
}