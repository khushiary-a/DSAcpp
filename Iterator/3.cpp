#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Partition the vector such that all even numbers come first
    auto it = std::partition(vec.begin(), vec.end(), [](int x) { return x % 2 == 0; });
std::cout<<*it<<std::endl;
  auto it1 = distance(vec.begin() , it);
  cout<<it1;
    // Print the rearranged vector
    for (int num : vec) {
        std::cout << num << " ";  // Outputs: 2 4 6 8 1 3 5 7 9
    }
    std::cout << std::endl;
    return 0;
}
