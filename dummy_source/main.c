#include <stdio.h>
#include "twosum.h"

int main() {
    int num1 = 5, num2 = 7;

    
    int result = sum(num1, num2);

    printf("The sum of %d and %d is: %d\n", num1, num2, result);

    return 0;
}

int sum2(int num1, int num2) {
    return num1 + num2;
}
