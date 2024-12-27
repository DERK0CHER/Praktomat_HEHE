#include <stdio.h>

void Fibonacci_numbers(int limit) {
    int a = 0;       // First Fibonacci number
    int b = 1;       // Second Fibonacci number
    int next;        // To store the next Fibonacci number
    int sumeven = 0; // Sum of even Fibonacci numbers
    int sumodd = 0;  // Sum of odd Fibonacci numbers

    while (1) {
        // Break the loop if adding the current number exceeds the limit
        if (a % 2 == 0) {
            if (sumeven + a > limit) break;
            sumeven += a;
        } else {
            if (sumodd + a > limit) break;
            sumodd += a;
        }

        // Generate the next Fibonacci number
        next = a + b;
        a = b;
        b = next;
    }

    // Print the results
    printf("The sums stopped when one exceeded the limit of %d:\n", limit);
    printf("Even sum: %d\n", sumeven);
    printf("Odd sum: %d\n", sumodd);
}

int main() {
    int limit;

    printf("Please enter the max value for calculating the even and odd sums of Fibonacci numbers:\n");
    scanf("%d", &limit);

    Fibonacci_numbers(limit);

    return 0;
}
