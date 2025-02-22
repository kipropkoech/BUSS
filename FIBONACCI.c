#include <stdio.h>

// Function to calculate Fibonacci sequence iteratively
void fibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;
    int i;
    printf("Fibonacci Sequence: ");
    
    for ( i = 1; i <= n; ++i) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

int main() {
    int terms;
    printf("Enter the number of terms: "); // Prompt user to enter the number of terms
    scanf("%d", &terms); // Read the number of terms entered by the user
    
    if (terms < 0) { // Check if the number of terms is negative
        printf("Number of terms must be non-negative.\n");
    } else { // Calculate and display the Fibonacci sequence
        fibonacci(terms);
    }
    
    return 0; // Indicate that the program ended successfully
}
