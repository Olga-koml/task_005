#ifndef MORSE_UTILS_H
#define MORSE_UTILS_H

#define LEN_ABC_DIG 36
#define LEN_ABC 26

void encode_to_morse_and_print(char * str);
int find_morse_index(const char * morse);
void print_error();
void decode_from_morse(char * str);

#endif