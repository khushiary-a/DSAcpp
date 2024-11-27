#include <iostream>
#include <thread>
using namespace std;

void print_numbers() {
    for (int i = 1; i <= 5; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::thread t(print_numbers);  // Create a new thread
    t.detach();  // Detach the thread from the main thread
    
    cout<<"helo"<<endl;
    cout<<"helo"<<endl;
    cout<<"helo"<<endl;
    cout<<"helo"<<endl;
    cout<<"helo"<<endl;
    cout<<"helo"<<endl;
    cout<<"helo"<<endl;
    cout<<"helo"<<endl;
    cout<<"helo"<<endl;
    cout<<"helo"<<endl;
    cout<<"helo"<<endl;
    cout<<"helo"<<endl;
    cout<<"helo"<<endl;
    cout<<"helo"<<endl;
    cout<<"helo"<<endl;
    cout<<"helo"<<endl;
    cout<<"helo"<<endl;
    cout<<"helo"<<endl;
    cout<<"helo"<<endl;
    cout<<"helo"<<endl;
    cout<<"helo"<<endl;


    
    std::cout << "Main thread is done!" << std::endl;

    
    return 0;
}

