// Rock , Paper , Scissors
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void displayChoices() {
    printf("CHOICES :\n");
    printf("--------------\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("Enter your choice: ");
}

const char* Choice(int choice) {
    if (choice == 1) return "Rock";
    if (choice == 2) return "Paper";
    return "Scissors";
}
int main() {
    int user, computer;
    char playAgain;

    srand(time(0)); // Initialize random number generator

    do {
        // User choice
        displayChoices();
        if (scanf("%d", &user) != 1) {
            printf("Invalid input. Please enter a number.\n\n");
            while (getchar() != '\n'); // clearing input buffer
            continue;
        }

        // Validate user input
        if (user < 1 || user > 3) {
            printf("Invalid choice. Please choose a valid option.\n\n");
            continue;
        }

        // Computer's choice
        int random = rand() % 101; // Random number between 0 and 100
        if (random <= 33) {
            computer = 1; // Rock
        } else if (random <= 66) {
            computer = 2; // Paper
        } else {
            computer = 3; // Scissors
        }

        // Display choices
        printf("You chose: %s\n", Choice(user));
        printf("Computer chose: %s\n", Choice(computer));

        if (user == computer) {
            printf("It's a tie!\n");
        } else if ((user == 1 && computer == 3) || 
                   (user == 2 && computer == 1) || 
                   (user == 3 && computer == 2)) {
            printf("YOU WIN!\n");
        } else {
            printf("COMPUTER WINS!\n");
        }

        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &playAgain);
        printf("\n");
    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Thanks for playing!\n");
    return 0;
}
