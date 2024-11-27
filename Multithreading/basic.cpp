#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
void myfun()
{
    for (int i = 0; i <= 6; i++)
    {
        cout << "hyy khushi" << endl;
    }
}
void myfun2()
{
    for (int i = 0; i <= 6; i++)
    {
        cout << "hyy khushi 2 " << endl;
        // this_thread::sleep_for(chrono::seconds(1));
    }
}
int main()
{
    thread t1(myfun2);
     t1.detach();
    // t1.join();
    //this_thread::sleep_for(chrono::milliseconds(5000));
    thread t2(myfun);
    t2.join();

    return 0;
}