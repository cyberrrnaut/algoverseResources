#include <iostream>
using namespace std;

int main() {
    int a = 5;        // Declare an integer variable and initialize it with 5
    int *p = &a;      // Declare a pointer to an integer and assign it the address of 'a'

    cout << "Value of a: " << a << endl;         // Output: 5
    cout << "Address of a: " << &a << endl;      // Output: address of 'a' (e.g., 0x7ffee4b20b3c)
    cout << "Value stored in p: " << p << endl;  // Output: address of 'a' (e.g., 0x7ffee4b20b3c)
    cout << "Value pointed to by p: " << *p << endl;  // Output: 5

    *p = 10;          // Change the value at the address stored in p (i.e., change the value of 'a' to 10)
    cout << "New value of a: " << a << endl;     // Output: 10

    return 0;
}
