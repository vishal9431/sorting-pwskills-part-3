// Given an array, arr[] containing n integers, the task is to find an integer (say K) such that after
// replacing each and every index of the array by |ai – K| where ( i ∈ [1, n]), results in a sorted
// array. If no such integer exists that satisfies the above condition then return -1.
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

// Helper function to check if a vector is sorted in non-decreasing order
bool isSorted(const std::vector<int>& arr) {
    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

// Function to find the integer K such that |ai - K| results in a sorted array
int findK(const std::vector<int>& arr) {
    if (arr.size() <= 1) {
        return arr[0];  // For single element or empty array, any K will work
    }

    int min_val = *std::min_element(arr.begin(), arr.end());
    int max_val = *std::max_element(arr.begin(), arr.end());

    // Candidates for K: min_val, max_val, and the average of min_val and max_val
    std::vector<int> candidates = {min_val, max_val};
    if ((min_val + max_val) % 2 == 0) {
        candidates.push_back((min_val + max_val) / 2);
    }

    for (int K : candidates) {
        std::vector<int> transformed;
        for (int num : arr) {
            transformed.push_back(std::abs(num - K));
        }
        if (isSorted(transformed)) {
            return K;
        }
    }

    return -1; // No valid K found
}

int main() {
    std::vector<int> arr = {2, 5, 8}; // Example input
    int result = findK(arr);
    std::cout << "The integer K is: " << result << std::endl; // Output the result
    return 0;
}
