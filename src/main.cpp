// main.cpp
#include "squares.hpp"
#include <memory>
#include <algorithm>
#include <cassert>
#include <iostream>

int main() {
    int a1[]{-5, -3, -1, 3, 5};
    int n = std::size(a1);

    auto a1_copy = std::make_unique<int[]>(n);
    std::copy(a1, a1+n, a1_copy.get());

    sorted_squares(a1, n);
    square_then_sort(a1_copy.get(), n);
    assert(equal_arr(a1, a1_copy.get(), n));

    for(auto const &elt : a1)
        std::cout << elt << " ";
    std::cout << "\n";

    
}
//1 9 9 25 25