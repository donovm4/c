#include <stdio.h>
#include <math.h>

int main()
{
    // exponential 
    printf("2^3 = %.1f\n", pow(2, 3)); // MUST to be %f for double/float
    
    // square root
    printf("Square Root of %d is %.1f\n", 16, sqrt(16)); // MUST to be %f for double/float
    
    // ceiling (rounding up)
    printf("%.1f rounded up is %.1f\n", 3.3, ceil(3.3)); // MUST to be %f for double/float
    
    // floor (rounding down)
    printf("%.1f rounded down is %.1f\n", 3.3, floor(3.3)); // MUST to be %f for double/float
    return 0;
}