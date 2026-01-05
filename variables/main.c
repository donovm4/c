#include <stdio.h>

int main() 
{
    // VARIABLE is a collection of characters or data

    int number = 2026; // variable of int type for integer number
    printf("The year is %d.\n", number); // %d is for integers

    char fruit[] = "apple"; // variable of char type for string of characters
    printf("My favorite fruit is %s.\n", fruit); // %s is for string of characters

    double gpa = 3.85; // variable of double type for floating-point number
    printf("Her GPA was %f in 2025.\n", gpa); // %f is for floating-point numbers
    
    char initial = 'D'; // variable of char type for single character
    printf("My name starts with the letter %d.\n", initial); // %c is for single character
    return 0;
}