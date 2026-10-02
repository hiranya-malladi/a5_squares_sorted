#include "squares.hpp"

#include <algorithm>
#include <memory>

// must be of O(n)
void sorted_squares(int *nums, int n){
    auto temp = std::make_unique<int[]>(n);

    int left{0};
    int right{n - 1};
    int position{n - 1};

    while (left <= right){
        int left_square{nums[left] * nums[left]};
        int right_square{nums[right] * nums[right]};

        if (left_square > right_square){
            temp[position] = left_square;
            left++;
        }
        else{
            temp[position] = right_square;
            right--;
        }

        position--;
    }

    for (int i{0}; i < n; i++){
        nums[i] = temp[i];
    }
}

//Complexity O(nlogn)
// Given to compare
void square_then_sort(int* nums, int n) {
    for (int i{0}; i<n; i++)
        nums[i] = nums[i] * nums[i];

    std::sort(nums, nums + n);
}

//compares two array
bool equal_arr(const int* a, const int* b, int n) {
    for (int i{0}; i < n; i++){
        if (a[i] != b[i]){
            return false;
        }
    }

    return true;
}