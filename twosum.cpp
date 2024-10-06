#include <iostream>

int* twoSum(int nums[], int n, int target) {
    static int result[2];  // Static array to hold the result

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;  // Return the indices as a static array
            }
        }
    }
    return nullptr;  // Return nullptr if no solution is found
}