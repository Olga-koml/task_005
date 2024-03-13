CFLAG=-std=c11 -Wall -Werror -Wextra
EXECUTE=../bin

house: 
	gcc $(CFLAG) house.c house_calc.c -o $(EXECUTE)/house

morse:
	clang-format -i *.c
	gcc $(CFLAG) morse.c morse_utils.c -o $(EXECUTE)/morse