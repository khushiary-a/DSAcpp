#include <iostream>
#include <thread>
#include <chrono>
#include<windows.h>
using namespace std;

void fun()
{
    for (int i = 0; i <= 5; i++)
    {
        cout << "hy mashuu" << endl;
        Sleep(2000); // Add a delay to slow down the output
    }
}

int main()
{
    thread t(fun);  // Start the thread t with function fun()
    
    // Wait for the thread to complete
    t.join();  
    
    // After the thread completes, now sleep for 5 seconds
    //this_thread::sleep_for(chrono::seconds(5));  
    
    
    cout<<"hello";
    return 0;
}
