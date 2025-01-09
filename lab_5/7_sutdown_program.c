#include <stdio.h>
#include <stdlib.h>

int main() {
    char choice;
    printf("Do you want to shut down your computer? (y/n): ");
    scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y') {
        system("C:\\WINDOWS\\System32\\shutdown /s");
    } else {
        printf("Shutdown canceled.\n");
    }

    return 0;
}
