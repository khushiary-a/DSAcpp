#include <iostream>
#include <thread>
#include <list>
#include <functional>
#include <chrono>

using namespace std;

class TaskScheduler {
public:
    TaskScheduler() : stop(false) {}

    void addTask(std::function<void()> task) {
        taskList.push_back(task);
    }

    void start() {
        workerThread = std::thread([this] { this->run(); });
    }

    void stopScheduler() {
        stop = true;
        if (workerThread.joinable()) {
            workerThread.join();
        }
    }

private:
    void run() {
        while (!stop) {
            if (!taskList.empty()) {
                auto task = taskList.front();
                taskList.pop_front();
                try {
                    task();
                } catch (const std::exception& e) {
                    std::cerr << "Task failed: " << e.what() << std::endl;
                }
            }
        }
    }

    list<std::function<void()>> taskList;
    bool stop; 
    thread workerThread;
};

void taskRendering() {
   this_thread::sleep_for(std::chrono::seconds(1));
    cout << "Rendering task completed." << std::endl;
}

void taskInputHandling() {
    this_thread::sleep_for(std::chrono::seconds(1));
    cout << "Input handling task completed." << std::endl;
}

void taskDataUpdate() {
    this_thread::sleep_for(std::chrono::seconds(1));
   cout << "Data update task completed." << std::endl;
}

int main() {
    TaskScheduler scheduler;
    scheduler.start();

    scheduler.addTask(taskRendering);
    scheduler.addTask(taskInputHandling);
    scheduler.addTask(taskDataUpdate);

  
    this_thread::sleep_for(std::chrono::seconds(5));

    scheduler.stopScheduler();
    return 0;
}
