#include <stdio.h>

int main() {
    int c;
    int prev_char = '\0';
    int has_non_blank_char = 0;

    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\t' && c != '\n') {
            has_non_blank_char = 1;
        }

        if (c != ' ' && c != '\t') {
            if (prev_char == '\n' && has_non_blank_char) {
                putchar(prev_char);
            }
            putchar(c);
        }

        prev_char = c;
    }

    return 0;
}

