
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    std::vector<int> data = {1, 2, 3 ,3, 3,4,4,4, 5,4};

// 1. **`std::for_each`**: Applies a given function to each element in the container.
cout<<"for_each: "<<endl;
for_each(data.begin() , data.end() , [](int n){
    cout<<n <<"  ";
});
 cout<<endl;

 // 2. **`std::find`**: Finds the first occurrence of a specific value in the container.

cout<<"find: ";
auto a = find(data.begin(),data.end() , 2 );//return pointer can be assecc through derefrencing  
cout<<*a<<endl;

// 3. **`std::find_if`**: Finds the first element that satisfies a given predicate (condition).
auto b = find_if(data.begin() , data.end() , [](int n){
   if(n%2!=0){
    return n;
   }
});
if (b != data.end()) {
        // Dereference the iterator to get the value
        std::cout << "First odd number: " << *b << std::endl;
    } else {
        std::cout << "No odd numbers found." << std::endl;
    }

// 4. **`std::adjacent_find`**: Finds the first pair of adjacent elements that are equal.

    auto it = adjacent_find(data.begin(), data.end());
         if (it != data.end()) {
        std::cout << "First adjacent equal pair found: " << *it << " and " << *(it + 1) << std::endl;
    } else {
        std::cout << "No adjacent equal pairs found." << std::endl;
    }

// 5. **`std::count`**: Counts the number of occurrences of a specific value in the container.
auto c = count(data.begin(), data.end() , 7);
cout<<"Count of 4 is: "<<c<<endl;

// 6. **`std::count_if`**: Counts the number of elements that satisfy a given predicate.
cout<<"count-if:  ";
auto value = count_if(data.begin(), data.end() ,[](int n){
         return n%2 == 0;   
      
});
cout<<value<<endl;

// 7. **`std::equal`**: Checks whether two ranges (or containers) are equal.
 std::vector<int> data1 = {1, 2, 3 ,3, 3,4,4,4, 5,4};

 if(equal(data.begin() , data.end() , data1.begin())){
    cout<<"Yess equal";
 }else{
    cout<<"Not equal";
 }
    return 0;
}
