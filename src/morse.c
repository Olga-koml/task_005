#include <stdio.h>

#include "morse_utils.h"

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// #include <stdlib.h>

// #define LEN_ABC_DIG 36
// #define LEN_ABC 26


// const char* morse_abc[] = {
//     ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
//     "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
//     "..-", "...-", ".--", "-..-", "-.--", "--..",
//     "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----."
// };

// void find_arr1_elem_in_arr2(const char** arr1, const char** arr2, const char* elem, char* decod_elem) {
//     for (int i = 0; i < LEN_ABC_DIG; i++) {
//         if (strcmp(arr1[i], elem) == 0) {
//             strcpy(decod_elem, arr2[i]);
//             break;
//         }
//     }
// }

// void encode_to_morse_and_print(char *str) {
//     int len_str = strlen(str);
//     for(int i = 0; i < len_str; i++) {
//         if (str[i] == ' ') {
//             printf("\t");
//         } else {
//             if (isdigit(str[i])) {
//                 printf(morse_abc[str[i]-'0' + LEN_ABC]);
//             } else {
//                 printf(morse_abc[toupper(str[i])-'A']);
//             }
//             if (i < len_str - 1) {
//                 printf(" ");
//             } 
//         }
//     }

// }

// int find_morse_index(const char* morse) {
   
//     for (int i = 0; i < LEN_ABC_DIG; ++i) {
//         if (strcmp(morse, morse_abc[i]) == 0) {
//             return i;
//         }
//     }
//     return -1;
// }

// void print_error() {
//     fprintf(stderr, "Puck you, Verter!");
//     exit(EXIT_FAILURE);
// }

// void decode_from_morse(char* str) {
//     char* token = strtok(str, " \t\n");
//     while (token != NULL) {
//         int index = find_morse_index(token);

//         if (index != -1) {
//             if (index >= LEN_ABC) {
//                 printf("%c", index - LEN_ABC + '0');
//             } else {
//                 printf("%c", index + 'A');
//             }
//         } else {
//             print_error();
//         }

//         token = strtok(NULL, " \t\n");
//     }
// }


int main() {

    char str[250];
    int command;
    char c;
    if (scanf("%d%c", &command, &c) && c =='\n') {
    switch (command) {
        case 1:
            fgets(str, sizeof(str), stdin);
            encode_to_morse_and_print(str);
            break;
        case 2:
            fgets(str, sizeof(str), stdin);
            decode_from_morse(str);
            break;
        default:
            print_error();
    }
    } else print_error();

    return 0;
}
