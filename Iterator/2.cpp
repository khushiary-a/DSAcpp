// Iterator Interface:
// Implement an Iterator that will allow sequential traversal through each media source's list of items.
// The Iterator should support the following operations:
// hasNext(): Returns true if there is another item to display in the current media list.
// next(): Returns the next item in the current media list.
// reset(): Resets the iterator to the start of the current media list.
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
class Iterator
{
private:
    list<int> li;
    size_t ci;

public:
    Iterator(list<int> lit)
    {
        li = lit;
        ci = 0;
    }
    void display()
    {
        cout << "The list is: ";
        for (auto it = li.begin(); it != li.end(); it++)
        {
            cout << *it << "  ";
        }
        cout<<endl;
    }
    void hasNext()
    {
        if(ci < li.size()){
            cout<<"There is a next song present"<<endl;
        }else{
            cout<<"There is no next song present"<<endl;
        }
    }

    void next()
    {
        if (ci < li.size())
        {
             auto it = li.begin();
            it++;
            cout << "the next to current index is:  " << *it++ << endl;
        }
        else
        {
           cout<<"No next"<<endl;
        }
    }
    void nextto(int item)
    {
        std::list<int>::iterator it;
        it = find(li.begin(), li.end(), item);
        auto value = it;

        if (it != li.end())
        {
            it++;
            cout << "the next song of " << *value << " is : " << *it << endl;
        }
        else
        {
            cout << "There is no next song" << endl;
        }
    }
    void reset()
    {
        ci = 0;
        cout << "the iterator is reset" << endl;
    }
};

int main()
{
    list<int> lit = {1, 2, 3, 4, 5};
    Iterator obj(lit);
    obj.display();
    obj.hasNext();
    obj.next();
    obj.nextto(2);
    return 0;
}