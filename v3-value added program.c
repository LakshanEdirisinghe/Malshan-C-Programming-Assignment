#include <stdio.h>
#include <stdlib.h>

#include <time.h>
#include <stdbool.h>

bool check_guess(int secret_num, int user_guess);

int main()
{

    int random_number;
    int user_givenNum;

    srand(time(0));

    random_number = rand() % 10 + 1;

    printf("Welcome to the Guess the Number game!\n");
    printf("select a random number between 1 and 10.\n\n");

    //
    while (true)
    {
        printf("Enter your guess: ");
        scanf("%d", &user_givenNum);

        if (check_guess(random_number, user_givenNum))
        {
            printf("Congratulations! You've guessed the correct number \n");
            break;
        }
        else
        {

            if (user_givenNum < random_number)
            {
                printf("Too low. Try again.\n");
            }
            else
            {
                printf("Too high. Try again.\n");

                
            }
        }
    }
}


bool check_guess(int secret_num, int user_guess)
{

    if (user_guess == secret_num)
    {
        return true;
    }

    return false;
}
