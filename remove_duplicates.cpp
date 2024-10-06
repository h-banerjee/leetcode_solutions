#include <iostream>

int removeDuplicates(int nums[], int size) {
    if (size == 0) return 0;  // If the array is empty, return 0

    int uniqueIndex = 0;  // Pointer to track the position of unique elements

    for (int i = 1; i < size; i++) {
        if (nums[i] != nums[uniqueIndex]) {
            uniqueIndex++;  // Move to the next position for unique element
            nums[uniqueIndex] = nums[i];  // Update the array with the unique element
        }
    }

    return uniqueIndex + 1;  // Return the length of the array with unique elements
}

int main() {
    int nums[] = {0, 0, 1, 1, 2, 2, 3, 4};  // Example input
    int size = sizeof(nums) / sizeof(nums[0]);

    int newLength = removeDuplicates(nums, size);

    std::cout << "Length of the array after removing duplicates: " << newLength << "\n";
    std::cout << "Modified array: ";
    for (int i = 0; i < newLength; i++) {
        std::cout << nums[i] << " ";  // Print the modified array
    }
    std::cout << std::endl;

    return 0;
}
