  ```
    /*
     * fibo.c
     *
     * Calculates the nth Fibonacci number using a recursive approach.
     *
     * Author: [Your Name]
     * Date: [Today's Date]
     */

    #include <stdio.h>

    int fibonacci(int n) {
        if (n <= 1) {
            return n;
        }
        return fibonacci(n - 1) + fibonacci(n - 2);
    }

    int main() {
        int n;
        printf("Enter a positive integer: ");
        scanf("%d", &n);
        printf("The %dth Fibonacci number is %d\n", n, fibonacci(n));
        return 0;
    }
    ```