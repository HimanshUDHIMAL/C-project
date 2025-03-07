#include <stdio.h>

int main() {
    int number; 
    int guess;
printf("User 1 put the number to be guessed:");
scanf("%d",&number);

number=number+1;



    printf("Guess the number (between 1 and 100):\n");

   
    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess > number) {
            printf("Too high! Try again.\n");
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the number %d!\n", number);
            break; 
        }
    }

    return 0;
}