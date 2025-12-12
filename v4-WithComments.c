// importing necessary libraries 
#include <stdio.h>    
#include <stdlib.h>   
#include <time.h>     
#include <stdbool.h>  

// This function checks if the user's guess matches the secret number.

bool check_guess(int secret_num, int user_guess);

int main()
{
    // Variable declarations for the main game to store user guessed number and system generated number
    int random_number;
    int user_givenNum;

    // Seed the random number generator
    srand(time(0));

    // Generate the secret number between 1 and 10 (it could be enhanced anay range)
    random_number = rand() % 10 + 1;

    // Print welcome messages and game instructions to the console
    printf("Welcome to the Guess the Number game!\n");
    printf("select a random number between 1 and 10.\n\n");

    // Main game loop. It runs indefinitely until the 'break' statement is executed.
    while (true){

        // Read the integer guess from the user and store it in user_givenNum
        printf("Enter your guess: ");
        scanf("%d", &user_givenNum);

        // Call the custom function 'check_guess' to see if the user's guess is correct.
        
        if (check_guess(random_number, user_givenNum)){
            // Success Block (Guess is Correct) 
            printf("Congratulations! You've guessed the correct number \n");
            
            // Exit the 'while' loop to end the game
            break; 
        }
        else{
            //Failure Block (Guess is Incorrect)
            
            // Nested if-else structure to provide specific feedback (Too low/Too high)
            if (user_givenNum < random_number){
                printf("Too low. Try again.\n");
            }
            else{
                
                printf("Too high. Try again.\n");
            }
        }
    }
    

    return 0; 
}


// Function Definition
// Purpose: Compares the secret number against the user's guess.
bool check_guess(int secret_num, int user_guess){
    if (user_guess == secret_num)
    {
        return true; // Return true on a match
    }

    return false; // Return false if no match
}