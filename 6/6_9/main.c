#include <stdio.h>
#include <string.h>

int main() {
    printf("Welcome to the game Besenica!\n");

    char secretWord[] = "programming";
    int wordLen = strlen(secretWord);
    char guessed[wordLen + 1];
    int i;

    for(i = 0; i < wordLen; i++)
        guessed[i] = '-';
    guessed[wordLen] = '\0';

    int attempts = 0;
    char letter;
    int found;

    printf("Try to guess the secret word letter by letter.\n");

    while(strcmp(guessed, secretWord) != 0) {
        printf("\nWord: %s\n", guessed);
        printf("Enter a letter: ");
        scanf(" %c", &letter);

        attempts++;
        found = 0;

        for(i = 0; i < wordLen; i++) {
            if(secretWord[i] == letter && guessed[i] != letter) {
                guessed[i] = letter;
                found = 1;
            }
        }

        if(!found)
            printf("Letter '%c' is not in the word.\n", letter);
    }

    printf("\nCongratulations! You guessed the word: %s\n", guessed);
    printf("Total letters entered: %d\n", attempts);

    if(attempts <= wordLen + 2) {
        printf("You win! You guessed within allowed attempts.\n");
    } else {
        printf("You lose! Too many attempts.\n");
    }

    return 0;
}