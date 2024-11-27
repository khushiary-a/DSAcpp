#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1,2, 3, 5, 7, 9, 11};
    int target = 3;
    bool found = std::binary_search(v.begin(), v.end(), target);

    if (found) {
        std::cout << target << " is in the vector." << std::endl;
    } else {
        std::cout << target << " is not in the vector." << std::endl;
    }
    auto it = std::lower_bound(v.begin(), v.end(), target);
     if (it != v.end()) {
        std::cout << "First element greater than or equal to " << target << " is " << *it << std::endl;
    } else {
        std::cout << "No element greater than or equal to " << target << std::endl;
    }
auto it2 = std::upper_bound(v.begin(), v.end(), target);

    if (it2 != v.end()) {
        std::cout << "First element strictly greater than " << target << " is " << *it2 << std::endl;
    } else {
        std::cout << "No element strictly greater than " << target << std::endl;
    }

    return 0;
}
