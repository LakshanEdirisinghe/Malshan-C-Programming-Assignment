#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random_number, user_guess;
    int attempts = 0;

    // Initialize random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    random_number = rand() % 100 + 1;

    printf("Welcome to the Guess the Number game!\n");
    printf("I have selected a random number between 1 and 100.\n");
    printf("Try to guess the number.\n");

    // Keep asking the user for a guess until they get it right
    do {
        printf("Enter your guess: ");
        scanf("%d", &user_guess);

        attempts++;
        //attempts=attempts+1

        if (user_guess > random_number) {
            printf("Too high! Try again.\n");
        } else if (user_guess < random_number) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the correct number in %d attempts.\n", attempts);
        }
    } while (user_guess != random_number);

    return 0;
}