#include <stdio.h>
#include <time.h>

int main() {
    
    time_t currentTime;

    time(&currentTime);

    printf("Current Date and Time: %s", ctime(&currentTime));

    return 0;
}
