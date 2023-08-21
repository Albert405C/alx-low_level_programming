#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: An array of command line argument strings
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[]) {
    // Check if the number of arguments is not exactly 2 (including program name)
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    // Convert the argument to an integer using atoi
    int cents = atoi(argv[1]);

    // Check if the input is negative
    if (cents < 0) {
        printf("0\n");
        return 0;
    }

    // Initialize variables to keep track of the number of coins
    int num_coins = 0;

    // Calculate the minimum number of coins needed
    while (cents > 0) {
        if (cents >= 25) {
            cents -= 25;
        } else if (cents >= 10) {
            cents -= 10;
        } else if (cents >= 5) {
            cents -= 5;
        } else if (cents >= 2) {
            cents -= 2;
        } else {
            cents -= 1;
        }
        num_coins++;
    }

    // Print the minimum number of coins
    printf("%d\n", num_coins);

    return 0;
}

