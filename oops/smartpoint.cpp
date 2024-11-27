#include <iostream>
#include <memory> // Required for std::unique_ptr

using namespace std;

class MyClass {
public:
    MyClass(int value) : value(value) {
        cout << "MyClass constructor called with value: " << value << endl;
    }
    ~MyClass() {
        cout << "MyClass destructor called!" << endl;
    }
    void display() {
        cout << "Value: " << value << endl;
    }

private:
    int value;
};

int main() {
    // Create a unique_ptr to manage a MyClass instance
    unique_ptr<MyClass> ptr(new MyClass(10));

    // Use the object managed by the unique_ptr
    ptr->display();

    // No need to explicitly delete the object; it will be deleted when ptr goes out of scope

    return 0; // MyClass destructor will be called automatically here
}
