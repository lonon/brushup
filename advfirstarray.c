#include <stdio.h>
#include <stdlib.h>

int main() {
    char c;
    const int no_chars = 12; // number of characters
    int count = 0;

    char *string = (char *)malloc(no_chars + 1); // allocate memory for string
    if (string == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter your string, followed by enter: ");

    while (count < no_chars && (c = getchar()) != '\n' && c != EOF) {
        string[count] = c;
        ++count;
    }
    string[count] = '\0'; // null-terminate the string

    int i = 0; // for iterating the for loop
    for (i = 0; i < count; ++i) {
        printf("%c", string[i]);
    }
    printf("\n");

    free(string); // free dynamically allocated memory

    return 0;
}

