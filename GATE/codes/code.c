#include <stdio.h>

// Function to generate Fibonacci sequence without indices
void fibonacci(int n, int firstTerm, int secondTerm, FILE *file) {
    int nextTerm;
    fprintf(file, "Value\n");
    
    fprintf(file, "%d\n", firstTerm);
    fprintf(file, "%d\n", secondTerm);

    while (n > 2) {
        nextTerm = firstTerm + secondTerm;
        fprintf(file, "%d\n", nextTerm);
        firstTerm = secondTerm;
        secondTerm = nextTerm;
        n--;
    }
}

int main() {
    // Initial terms
    int firstTerm = 4, secondTerm = 5;

    // Open file for writing
    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.");
        return 1; // Exit with an error code
    }

    // Generate and write the first 8 terms of the Fibonacci sequence
    fibonacci(8, firstTerm, secondTerm, file);

    // Close the file
    fclose(file);

    printf("Fibonacci sequence has been written to data.txt.\n");

    return 0;
}
