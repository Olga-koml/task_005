#include <stdio.h>

#include "morse_utils.h"

int main() {

    char str[250];
    int command;
    char c;
    if (scanf("%d%c", &command, &c) && c == '\n') {
        switch (command) {
            case 1: {
                fgets(str, sizeof(str), stdin);
                encode_to_morse_and_print(str);
                break;
            }
            case 2: {
                fgets(str, sizeof(str), stdin);
                decode_from_morse(str);
                break;
            }
            default: {
                print_error();
            }
        }
    } else { 
        print_error();
    }

    return 0;
}
