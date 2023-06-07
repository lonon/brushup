#include <stdio.h>

void reverse(char *s) {
    int i = 0;
    int j = 0;
    while (s[j] != '\0') {
        j++;
    }
    j--;

    while (i < j) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char line[100];
    while (fgets(line, sizeof(line), stdin) != NULL) {
        reverse(line);
        printf("%s", line);
    }
    return 0;
}

