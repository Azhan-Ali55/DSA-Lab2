#include <iostream>
#include <cassert>
using namespace std;

// Function declaration (not impplemented initialy) 
bool isSorted(const int* arr, const int size);

// Sorted array in ascending order
void testSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};
    // Pass the array to the function and store it 
    bool result = isSorted(arr, 5);
    
    // Now check using assert 
    assert(result == true);
    cout << "Sorted array test in ascending order passed.\n";
}

// Unsorted array 
void testUnsortedArray() {
    int arr[] = {1, 5, 4, 3, 2};
    // Pass the array to the function and store it 
    bool result = isSorted(arr, 5);
    
    // Now check using assert 
    assert(result == false);
    cout << "Unsorted array test passed.\n";
}

// Sorted array containing duplicate values  
void testSortedDuplicateArray() {
    int arr[] = {1, 2, 3, 3, 5};
    // Pass the array to the function and store it 
    bool result = isSorted(arr, 5);
    
    // Now check using assert 
    assert(result == true);
    cout << "Sorted array with duplicate element test passed.\n";
}

// Array containing only one element
void testSingleElementArray() {
    int arr[] = {1};
    // Pass the array to the function and store it 
    bool result = isSorted(arr, 5);
    
    // Now check using assert 
    assert(result == true);
    cout << "Single Element array test passed.\n";
}

// Sorted array in descending order
void testDescendingArray() {
    int arr[] = {5, 4, 3, 2, 1};
    // Pass the array to the function and store it 
    bool result = isSorted(arr, 5);
    
    // Now check using assert 
    assert(result == false);
    cout << "Sorted array test in descending order passed.\n";
}

// Array with negative values 
void testNegativeValues() {
    int arr[] = {-5, -4, 1, 2, 3};
    // Pass the array to the function and store it 
    bool result = isSorted(arr, 5);
    
    // Now check using assert 
    assert(result == true);
    cout << "Array with negative values test passed.\n";
}

// All elements are the same
void testAllSameValues() {
    int arr[] = {7, 7, 7, 7};
    // Pass the array to the function and store it 
    bool result = isSorted(arr, 4);

    // Now check using assert 
    assert(result == true);
    cout << "Array with all the same values test passed.\n";
}

// Empty array 
void testEmptyArray() {
    int arr[] = {};
    // Pass the array to the function and store it 
    bool result = isSorted(arr, 0);

    // Now check using assert 
    assert(result == true); // This would be true because nothing is violated
    cout << "Empty array test passed.\n";
}

int main() {
    testSortedArray();
    testUnsortedArray();
    testSortedDuplicateArray();
    testSingleElementArray();
    testDescendingArray();
    testNegativeValues();
    testAllSameValues();
    testEmptyArray();

    cout << "\nAll tests passed!\n";
    return 0;
}

// Function defination 
bool isSorted(const int* arr, const int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}