#include <stdio.h>
#include <stdlib.h>

#include <time.h>
#include <stdbool.h>

int main() {

    int random_number;
    int user_givenNum;

    srand(time(0));

    random_number = rand()% 10+1;

    printf("Welcome to the Guess the Number game!\n");
    printf("select a random number between 1 and 10.\n\n");

    while (true){

        printf("Enter your guess: ");
        scanf("%d", &user_givenNum);

        if (user_givenNum == random_number){
            printf("Congratulations! You've guessed the correct number \n");

            break;
        }else{
            printf("Try again.\n");

        }

    }

    return 0;

}

