/*
 * Sum of first last element in array
 * 
 * Given an integer array nums, return the sum of the 1st and last element of the array.
 */
#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> nums = {2, 4, 6, 8};
    int last = nums.size() - 1;

    return nums[0] + nums[last];

}