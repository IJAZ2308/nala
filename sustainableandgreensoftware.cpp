// Function to calculate the sum of an array using a simple for loop
#include<iostream>
#include<chrono>
using namespace std;
int calculateSum(const int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i]; // Efficient summation
    }
    return sum;
}

int main() {
    // Efficient memory allocation and data initialization
    const int size = 1000000; // 1 million elements
    int* arr = new int[size];

    // Initializing the array with some values in an efficient way
    for (int i = 0; i < size; ++i) {
        arr[i] = i + 1;
    }

    // Start measuring time to calculate energy efficiency
    auto start = std::chrono::high_resolution_clock::now();
    
    // Calling the sum calculation function
    int sum = calculateSum(arr, size);

    // Stop time measurement
    auto stop = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = stop - start;

    // Output results
    cout << "Sum of array elements: " << sum << std::endl;
    cout << "Time taken: " << elapsed.count() << " seconds" << std::endl;

    // Clean up dynamically allocated memory to avoid memory leaks
    delete[] arr;

    return 0;
}