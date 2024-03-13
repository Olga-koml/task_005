#include "morse_utils.h"

#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

const char * morse_abc[] = {
    ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",
    "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
    "..-", "...-", ".--", "-..-", "-.--", "--..",
    "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----."
};

void encode_to_morse_and_print(char * str) {
    int len_str = strlen(str);
    for (int i = 0; i < len_str; i++) {
        if (str[i] == ' ') {
            printf("\t");
        } else {
            if (isdigit(str[i])) {
                printf(morse_abc[str[i] - '0' + LEN_ABC]);
            } else {
                printf(morse_abc[toupper(str[i]) - 'A']);
            }
            if (i < len_str - 1) {
                printf(" ");
            } 
        }
    }

}

int find_morse_index(const char * morse) {
   
    for (int i = 0; i < LEN_ABC_DIG; ++i) {
        if (strcmp(morse, morse_abc[i]) == 0) {
            return i;
        }
    }
    return -1;
}

void print_error() {
    fprintf(stderr, "Puck you, Verter!");
    exit(EXIT_FAILURE);
}

void decode_from_morse(char * str) {
    char* token = strtok(str, " \t\n");
    while (token != NULL) {
        int index = find_morse_index(token);

        if (index != -1) {
            if (index >= LEN_ABC) {
                printf("%c", index - LEN_ABC + '0');
            } else {
                printf("%c", index + 'A');
            }
        } else {
            print_error();
        }

        token = strtok(NULL, " \t\n");
    }
}
