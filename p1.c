#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
    int randomNumber;
    int Number_of_Guesses = 0;
    int Guessed;

    srand(time(0));                    // Seed the random number generator
    randomNumber = (rand() % 100) + 1; // Random number between 1 and 100

    // printf("Random number: %d\n", randomNumber);
    do
    {
        printf("Enter your guess (between 1 and 100): ");
        scanf("%d", &Guessed);
        if (Guessed > randomNumber)
        {
            printf("Lower Number please\n");
        }
        else if (Guessed < randomNumber)
        {
            printf("Higher Number please\n");
        }
        Number_of_Guesses++;
    } while (Guessed != randomNumber);
    printf("Congratulations! You guessed the number %d in %d attempts.\n", randomNumber, Number_of_Guesses);
    return 0;
}
