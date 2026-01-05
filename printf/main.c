#include <stdio.h>

int main()
{
    // integer example
    printf("I have %d siblings.\n", 4);

    // char example
    char string[] = "brothers";
    printf("I have 2 %s and 2 %s.\n", "sisters", string);

    // double or float example
    printf("Together we have $ %.2f.\n", 237.56);

    // arithmetic examples
    printf("5 + 10 = %d\n", 5 + 10);
    printf("5 + 10.0 = %.1f\n", 5 + 10.0);
    printf("5.0 + 10.0 = %.1f\n", 5.0 + 10.0);
    printf("10 / 5 = %d\n", 10 / 4);
    printf("10.0 / 5 = %.1f\n", 10.0 / 5);

    return 0;
}