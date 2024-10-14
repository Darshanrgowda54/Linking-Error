#include <stdio.h>

// Function declaration without a definition (will cause linking error)
void function1();

// Variable declared but not defined (will cause linking error)
extern int globalVariable;

// Function with conflicting declaration in another file (will cause linking error)
void conflictingFunction();

int main() {
    // Call an undefined function
    function1();

    // Access an undefined global variable
    printf("Value of globalVariable: %d\n", globalVariable);

    // Call a conflicting function with different signature
    conflictingFunction();

    return 0;
}
