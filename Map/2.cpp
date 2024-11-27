#include <iostream>
#include <map>

using namespace std;

struct detail
{
    string name;
    int phnum;
    int age;
};
void printmap(map<int, detail> mymap)
{

    for (auto i : mymap)
    {
        cout << "-------------------------" << endl;
        detail d = i.second;
        cout << "Detail of student with id : " << i.first << endl;
        cout << "Name of student is : " << d.name << endl;
        cout << "Age of student is : " << d.age << endl;
        cout << "Phone num of student is : " << d.phnum << endl;
    }
}

int main()
{
    map<int, detail> mymap;
    detail obj = {"khushi ", 5678, 22};
    detail obj1 = {"khushi1 ", 56784, 21};
    detail obj3 = {"khushie ", 56784, 227};

    mymap[1] = obj;
    mymap[2] = obj1;
    mymap[3] = obj3;

    printmap(mymap);

    return 0;
}