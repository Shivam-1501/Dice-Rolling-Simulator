#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dice, rollAgain;

    // Seed the random number generator with the current time
    srand(time(0));

    printf("🎲 Welcome to the Dice Rolling Simulator! 🎲\n");

    do {
        dice = (rand() % 6) + 1; // Generates a random number between 1 and 6
        printf("\nYou rolled: %d\n", dice);

        printf("\nRoll again? (1 = Yes, 0 = No): ");
        scanf("%d", &rollAgain);

    } while (rollAgain == 1);

    printf("\nThanks for playing! Goodbye!\n");
    return 0;
}
