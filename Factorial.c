#include <stdio.h>

// Function to calculate the factorial of a number recursively
int factorial(int n) {
    if (n == 0 || n == 1) { // Base case: Factorial of 0 or 1 is 1
        return 1;
    } else { // Recursive case: n * factorial of (n-1)
        return n * factorial(n - 1);
    }
}

int main() {
    int number;
    printf("Enter a number: "); // Prompt user to enter a number
    scanf("%d", &number); // Read the number entered by the user
    
    if (number < 0) { // Check if the number is negative
        printf("Factorial is not defined for negative numbers.\n");
    } else { // Calculate and display the factorial of the number
        printf("Factorial of %d is %d.\n", number, factorial(number));
    }
    
    return 0; // Indicate that the program ended successfully
}
