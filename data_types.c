#include <stdio.h>    // Required for printf and other standard I/O functions
#include <stdbool.h>  // Required for the bool data type in C99 and later
#include <string.h>   // Required for string functions like strlen

int main() {
    // --- Integer Data Types ---

    // 1. int: Used to store whole numbers. Its size depends on the system (usually 2 or 4 bytes).
    int integerVar = 42;
    printf("1. int: Value = %d, Size = %lu bytes\n", integerVar, sizeof(integerVar));

    // 2. short int (or just short): Smaller integer type, typically 2 bytes.
    short shortIntVar = 100;
    printf("2. short int: Value = %hd, Size = %lu bytes\n", shortIntVar, sizeof(shortIntVar));

    // 3. long int (or just long): Larger integer type, typically 4 or 8 bytes.
    long longIntVar = 1234567890L; // 'L' suffix for long literal
    printf("3. long int: Value = %ld, Size = %lu bytes\n", longIntVar, sizeof(longIntVar));

    // 4. long long int (or just long long): Even larger integer type, guaranteed to be at least 8 bytes.
    long long longLongIntVar = 9876543210987654321LL; // 'LL' suffix for long long literal
    printf("4. long long int: Value = %lld, Size = %lu bytes\n", longLongIntVar, sizeof(longLongIntVar));

    // --- Unsigned Integer Data Types ---
    // These store only non-negative whole numbers (0 and positive values), doubling the positive range.

    // 5. unsigned int:
    unsigned int unsignedIntVar = 2000000000U; // 'U' suffix for unsigned literal
    printf("5. unsigned int: Value = %u, Size = %lu bytes\n", unsignedIntVar, sizeof(unsignedIntVar));

    // 6. unsigned short int:
    unsigned short unsignedShortIntVar = 60000U;
    printf("6. unsigned short int: Value = %hu, Size = %lu bytes\n", unsignedShortIntVar, sizeof(unsignedShortIntVar));

    // 7. unsigned long int:
    unsigned long unsignedLongIntVar = 4000000000UL; // 'UL' suffix for unsigned long literal
    printf("7. unsigned long int: Value = %lu, Size = %lu bytes\n", unsignedLongIntVar, sizeof(unsignedLongIntVar));

    // 8. unsigned long long int:
    unsigned long long unsignedLongLongIntVar = 18000000000000000000ULL; // 'ULL' suffix
    printf("8. unsigned long long int: Value = %llu, Size = %lu bytes\n", unsignedLongLongIntVar, sizeof(unsignedLongLongIntVar));

    // --- Floating-Point Data Types ---
    // Used to store numbers with decimal points.

    // 9. float: Single-precision floating-point number, typically 4 bytes.
    float floatVar = 3.14159f; // 'f' suffix for float literal
    printf("9. float: Value = %f, Size = %lu bytes\n", floatVar, sizeof(floatVar));

    // 10. double: Double-precision floating-point number, typically 8 bytes. More precise than float.
    double doubleVar = 3.1415926535;
    printf("10. double: Value = %lf, Size = %lu bytes\n", doubleVar, sizeof(doubleVar));

    // 11. long double: Extended-precision floating-point number, size varies (e.g., 10 or 16 bytes).
    long double longDoubleVar = 3.141592653589793238L; // 'L' suffix for long double literal
    printf("11. long double: Value = %Lf, Size = %lu bytes\n", longDoubleVar, sizeof(longDoubleVar));

    // --- Character Data Type ---

    // 12. char: Used to store a single character. It's an integer type internally (ASCII value). Typically 1 byte.
    char charVar = 'A';
    printf("12. char: Value = %c (ASCII: %d), Size = %lu byte\n", charVar, charVar, sizeof(charVar));

    // 13. signed char: Explicitly signed character (can store negative values).
    signed char signedCharVar = -10;
    printf("13. signed char: Value = %hhd, Size = %lu byte\n", signedCharVar, sizeof(signedCharVar));

    // 14. unsigned char: Explicitly unsigned character (can store 0 to 255).
    unsigned char unsignedCharVar = 250;
    printf("14. unsigned char: Value = %hhu, Size = %lu byte\n", unsignedCharVar, sizeof(unsignedCharVar));

    // --- Boolean Data Type (C99 onwards) ---

    // 15. _Bool or bool (after including <stdbool.h>): Used to store true (1) or false (0).
    bool boolVarTrue = true;
    bool boolVarFalse = false;
    printf("15. bool: True Value = %d, False Value = %d, Size = %lu byte\n", boolVarTrue, boolVarFalse, sizeof(boolVarTrue));

    // --- String Data Type ---
    // 16. char array: In C, strings are arrays of characters terminated by a null character ('\0').
    char stringVar[] = "Hello, C Data Types!"; // Automatically adds '\0' at the end
    printf("16. String: Value = \"%s\", Length (excluding null) = %lu, Size (including null) = %lu bytes\n",
           stringVar, strlen(stringVar), sizeof(stringVar));

    // --- Void Data Type ---
    // 17. void: Represents the absence of type. Cannot declare variables of type void.
    //    It's used for:
    //    - Function return type (function doesn't return a value).
    //    - Function arguments (function takes no arguments).
    //    - Pointers (void* can point to any data type).
    //    Example usage (not variable declaration):
    void *voidPtr = NULL; // A void pointer can point to any type, but cannot be dereferenced directly.
    printf("17. void: Used as a generic pointer (void*). Size of void* = %lu bytes\n", sizeof(voidPtr));

    printf("\n--- Summary of Data Type Sizes (may vary by system) ---\n");
    printf("int: %lu bytes\n", sizeof(int));
    printf("short: %lu bytes\n", sizeof(short));
    printf("long: %lu bytes\n", sizeof(long));
    printf("long long: %lu bytes\n", sizeof(long long));
    printf("float: %lu bytes\n", sizeof(float));
    printf("double: %lu bytes\n", sizeof(double));
    printf("long double: %lu bytes\n", sizeof(long double));
    printf("char: %lu byte\n", sizeof(char));
    printf("bool: %lu byte\n", sizeof(bool)); // Requires <stdbool.h>
    printf("char[] (string): %lu bytes\n", sizeof(char[21])); // Example size for "Hello, C Data Types!\0"

    return 0; // Indicates successful execution
}
