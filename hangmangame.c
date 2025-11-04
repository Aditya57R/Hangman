#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_INVALID_GUESSES 6

// Declaring functions needed later
void drawhangman(int invalid_guesses);
void displaywordstatus(const char *answer, char *display);

int main() {

    const char *answer = "BLAST";
    int word_length = strlen(answer);

    char display[40] = "";
 
}
