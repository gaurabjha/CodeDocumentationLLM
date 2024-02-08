#include <stdio.h>
#include "twosum.h"

int main() {
    int num1 = 5, num2 = 7;
 
 
    // Get the Sum of the numbers
    int result = sum(num1, num2);
 
    // Print the Sum of the numbers.
    printf("The sum of %d and %d is: %d\n", num1, num2, result); // inline comment
 
    return 0;
}

// Dummy Function
int sum2(int num1, int num2) {
    return num1 + num2;
}
