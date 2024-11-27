// #include <iostream>
// #include <thread>
// #include <chrono>

// class MyClass {
// public:
//     void memberFunction(int id) {
//         for (int i = 0; i < 5; ++i) {
//             std::cout << "Thread " << id << " is running, iteration " << i << std::endl;
//             // std::this_thread::sleep_for(std::chrono::milliseconds(500)); // Simulate work
//         }
//     }
// };

// int main() {
//     MyClass obj;

//     // Create a thread using a non-static member function
//     std::thread t1(&MyClass::memberFunction, &obj, 1); // Pass the instance and additional arguments

//     // Create another thread
//     std::thread t2(&MyClass::memberFunction, &obj, 2); // Same instance, different thread ID

//     // Join the threads to ensure they complete before exiting
//     // t1.join();
//      std::cout<<"khushi1"<<std::endl;
//     // t2.join();
//    std::cout<<"khushi";

//     return 0;
// }
#include <iostream>
#include <thread>

#include <mutex>
using namespace std;
mutex mtx;

void run(int a){
  mtx.lock();
  for(int i =1 ; i<6 ; i++){
    cout<<"My "<<a<<" thread"<<" is on "<<i<<endl;
  }
  mtx.unlock();

}

// void task(int id) {
//     std::cout << "Thread " << id << " is starting." << std::endl;
//     std::this_thread::sleep_for(std::chrono::seconds(2)); // Simulate some work
//     std::cout << "Thread " << id << " is finished." << std::endl;
// }

int main() {
    

    thread t1(run,1);
    thread t2(run,2);
    t1.join();
    t2.join();
    // // Create a thread and detach it
    // std::thread t1(task, 1);
    // t1.detach(); // The main thread will not wait for t1 to finish

    // std::cout << "Main thread continues running..." << std::endl;

    // // Sleep for a short time to let the detached thread complete its work
    // std::this_thread::sleep_for(std::chrono::seconds(1));

    // std::cout << "Main thread is done." << std::endl;
    return 0;
}
