#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "irregular.h"

void sep() {
    printf("+%.*s+",  WORD_SIZE + 2, "-------------------------------------------------------------------" );
    printf("%.*s+",   WORD_SIZE + 2, "-------------------------------------------------------------------" );
    printf("%.*s+\n", WORD_SIZE + 2, "-------------------------------------------------------------------" );
}

int main() {
    int rnd = 0;

    system("clear");

    printf("This simple software created for memorize irregular verbs. Please press ENETER to get the answer\n");
    printf("Number of words: %d\n\n", number_of_words);

    srand(time(NULL));

    for (;;) {
        rnd = rand() % number_of_words;
        printf("?: %s ", words[rnd][0] );

        if (getchar() == '\n') {
            sep(); printf("| %-20s | %-20s | %-20s |\n", "1st", "2nd", "3rd");
            sep(); printf("| %-20s | %-20s | %-20s |\n", words[rnd][0], words[rnd][1], words[rnd][2]);
            sep();

            if (getchar())
                system("clear");
        }
    }

    return 0;
}
