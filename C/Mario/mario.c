#include <stdio.h>
void main() {
    int height, i, j;
    do {
        printf("Height: ");
        if (scanf("%d", &height) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); // This is done to remove uhh the stuff input from buffer ( basically eats up the excess input from alphabets)
            height = 0; 
        }
        else if (height < 1 || height > 8) {
            printf("Please enter a height between 1 and 8.\n");
        }
    } while (height < 1 || height > 8);
    for (i = 0; i < height; i++) {
        for (j = 0; j < height - i - 1; j++) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("#");
        }
        printf("  ");
        for (j = 0; j <= i; j++) {
            printf("#");
        }
        for (j = 0; j < height - i - 1; j++) {
            printf(" ");
        }
        printf("\n");
    }
}
// Slight note, it doesn't encompass the detect when user only inputs Enter from Cs50's assignment because I am not going to use fgets() for that, its just annoying.