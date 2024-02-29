#include <stdio.h>

// Function to generate multiples of 3 without indices
void generateMultiplesOfThree(int n, FILE *file) {
    int currentMultiple = 3;
    fprintf(file, "Value\n");

    while (n > 0) {
        fprintf(file, "%d\n", currentMultiple);
        currentMultiple += 3;
        n--;
    }
}

int main() {
    // Open file for writing
    FILE *file = fopen("values2.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.");
        return 1; // Exit with an error code
    }

    // Generate and write the first 12 multiples of 3
    generateMultiplesOfThree(12, file);

    // Close the file
    fclose(file);

    printf("Multiples of 3 have been written to values2.txt.\n");

    return 0;
}
