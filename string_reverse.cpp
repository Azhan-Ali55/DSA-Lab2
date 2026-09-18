#include <iostream>
#include <cstring>
using namespace std;

// Declare the function to reverse the string 
void reverse_string(char *input);

int main() {
    int size;

    cout << "Enter size for the string: ";
    cin >> size;
    cin.ignore(); // flush leftover newline from previous cin >> size

    // Dynamically allocate memory for input string.
    // We add 1 to size because we need extra position for null terminator
    char *str = new char[size + 1]; 

    // Take the input 
    cout << "Enter String: ";
    cin.getline(str, size + 1);

    // Pass the input to the function 
    reverse_string(str);

    // Free the memory 
    delete[] str;
    return 0;
}

// Function definition 
void reverse_string(char *input) {
    // Store the length
    int length = strlen(input);

    // Use loop to reverse the string 
    for (int i = 0;  i < length / 2; i++) {
        char temp = input[i];

        // This stores the character from the opposite end at i index 
        // and then stores the i index character at he opposite end 
        // this just reverse the string until middle is reached switching
        // characters at the opposite ends 
        input[i] = input[length - 1 - i];
        input[length - 1 -i] = temp;
    }

    // Display the reversed string 
    cout << "Reversed string is: " << input << endl;
}
