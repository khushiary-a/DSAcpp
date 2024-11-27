#include<iostream>
using namespace std;
class shape{
    protected:
    string color;
};
class circle : public shape{
    public:
    void set(){
     color = "red";
   cout<<"the color is : "<<color;
    }
};
int main(){
    circle obj;
    obj.set();
    return 0;
}