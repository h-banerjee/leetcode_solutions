#include <iostream>
#include <algorithm>

void threeSum(int nums[], int size) {
    std::sort(nums, nums + size);  // Sort the array

    for (int i = 0; i < size - 2; i++) {
        // Skip duplicates for the first element
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }

        int left = i + 1;
        int right = size - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum < 0) {
                left++;  // Move the left pointer to the right to increase the sum
            } else if (sum > 0) {
                right--;  // Move the right pointer to the left to decrease the sum
            } else {
                // Found a triplet
                std::cout << "[" << nums[i] << ", " << nums[left] << ", " << nums[right] << "]\n";

                // Skip duplicate elements for left pointer
                while (left < right && nums[left] == nums[left + 1]) {
                    left++;
                }

                // Skip duplicate elements for right pointer
                while (left < right && nums[right] == nums[right - 1]) {
                    right--;
                }

                left++;
                right--;
            }
        }
    }
}
