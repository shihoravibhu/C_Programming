#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a character to find: ");
    scanf("%c", &ch);

    // Find the first occurrence of the character
    char *pos = strchr(str, ch);

    if (pos) { // pos !=0
        printf("Character '%c' found at position %ld.\n", ch, pos - str + 1);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }

    return 0;
}
