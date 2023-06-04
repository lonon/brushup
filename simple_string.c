#include <stdio.h>

#define MAX_LENGTH 100

int main() {
    char string[MAX_LENGTH];

    printf("Enter a string: ");
    scanf("%s", string);

    printf("The entered string is: %s\n", string);

    return 0;
}

