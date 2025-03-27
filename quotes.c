// quotes.c
#include "quotes.h"
#include <stdio.h>
#include <stdlib.h>

void print_quote(char ** quotes, int index) {
    printf("%s\n", quotes[index]);
}

void print_random_quote(char ** quotes) {
    int index = rand() % MAX_QUOTES;
    print_quote(quotes, index);
}