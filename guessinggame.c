#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD_LENGTH 20
#define MAX_ATTEMPTS 2

int attempts = 0;
char word[MAX_WORD_LENGTH + 1];
char guessed[MAX_WORD_LENGTH + 1];
int score = 0;

/*
 * The start_game function initializes the game state by copying the word "hangman" into the word array and a string of underscores into the guessed array.
 * 
 * The memcpy function is used to copy data from one location to another. In this case, we are copying the string "_" into the guessed array.
 * The first argument is the destination location, which is the guessed array.
 * The second argument is the source location, which is the string "_".
 * The third argument is the number of bytes to copy, which is the length of the string "_" plus one for the null-terminating character.
 * 
 * The memcpy function is then used to copy the word "hangman" into the word array.
 * The first argument is the destination location, which is the word array.
 * The second argument is the source location, which is the string "hangman".
 * The third argument is the number of bytes to copy, which is the length of the string "hangman" plus one for the null-terminating character.
 */
void start_game() {
    memcpy(guessed, "_", MAX_WORD_LENGTH + 1);
    memcpy(word, "hangman", MAX_WORD_LENGTH + 1);
}

void play_round() {
    if (attempts >= MAX_ATTEMPTS) {
        printf("You have used all your attempts. Game over!\n)");
        return;
    }  
    char guess;
    printf("Enter a letter: ");
    scanf("%c", &guess);
    guess = toupper(guess);
    if (strchr(word, guess) == NULL) {
        printf("Wrong guess!\n");
        attempts++;
    } else {
        printf("Correct guess!\n");
        for (int i = 0; i < strlen(word); i++) {
            if (word[i] == guess) {
                guessed[i] = guess;
            }
        }
    }
    if (strcmp(word, guessed) == 0) {
        printf("You guessed the word!\n");
        score += 100;
    }
}

int main() {
    start_game();
    while (1) {
        play_round();
        if (attempts >= MAX_ATTEMPTS || strcmp(word, guessed) == 0) {
            break;
        }
    }
    printf("Score: %d\n", score);
    return 0;
}