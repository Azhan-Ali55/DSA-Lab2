#include <iostream> 
using namespace std;

// Declare the function
void analyze_pointer(int *ptr);

int main() {
    // Allocate an int on the stack 
    int iValue = 30;

    // Allocate an int on the heap 
    int *p = new int; 
    *p = 40; // Assign a value to it by dereferenicng 

    // Pass the int on stack 
    cout << "int on stack: \n";
    analyze_pointer(&iValue); // Use & operator to pass the memeory location 

    // Pass the int on heap 
    cout << "int on heap: \n";
    analyze_pointer(p);

    // Free the heap memory 
    delete p;
    return 0;
}

// Function defination 
void analyze_pointer(int *ptr) {
    // First to display the pointed loaction 
    cout << "The memory location pointed to by the pointer is: " << ptr << '\n';

    // Secondly dispaly the integer value by dereferencing 
    cout << "The integer value pointed by the pointer is: " << *ptr << '\n';
}