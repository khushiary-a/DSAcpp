#include<iostream>
using namespace std;

class university{ /// interface
     public: 
     virtual void description() = 0;
};
class Maths:public university{
    public:
    void description(){
        cout<<"linear algebra"<<endl;
    }
};
class Science:public university{
    public:
    void description(){
        cout<<"frequency and vibration"<<endl;
    }
};
class English:public university{
    public:
    void description(){
        cout<<"Story & Poem"<<endl;
    }
};
class universityfactory{
    public : 
  static university &unifactory(string type){
    static Maths maths;
    static Science sci;
    static English eng;
        if(type == "Maths"){
            return  maths;
        }else if(type == "science"){
            return sci;
        }else{
            return eng;
        }
  }
};
int main(){

    university& uni1 = universityfactory::unifactory("Maths");
    uni1.description();  // Output: linear algebra

    university& uni2 = universityfactory::unifactory("Science");
    uni2.description();  // Output: frequency and vibration

    university& uni3 = universityfactory::unifactory("English");
    uni3.description();  // Output: Story & 
    return 0;

}