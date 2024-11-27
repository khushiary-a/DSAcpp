#include <iostream>
using namespace std;

class bird
{
public:
   virtual void fly(){
  cout<<"I can fly";
   }
};
class sparow : public bird
{
public:
 
    void fly()
    {
        cout << "i can fly" << endl;
    }
};
class penguin : public bird
{
public:
    void fly()
    {
        throw logic_error("Ostriches can't fly!");
    }
};
int main()
{ 
   
    bird* obj1 = new sparow(); 
    obj1->fly();
   
    return 0;
}