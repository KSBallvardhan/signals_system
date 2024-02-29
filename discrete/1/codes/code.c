#include <stdio.h>

// Function to generate multiples of 2 and 5 without indices
void generateMultiples(FILE *file) {
    int currentNumber = 2;

    fprintf(file, "Value\n");

    while (currentNumber <= 100) {
        if (currentNumber % 2 == 0 || currentNumber % 5 == 0) {
            fprintf(file, "%d\n", currentNumber);
        }

        currentNumber++;
    }
}

int main() {
    // Open file for writing
    FILE *file = fopen("values.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.");
        return 1; // Exit with an error code
    }

    // Generate and write multiples of 2 and 5
    generateMultiples(file);

    // Close the file
    fclose(file);

    printf("Multiples of 2 and 5 have been written to values.txt.\n");

    return 0;
}
