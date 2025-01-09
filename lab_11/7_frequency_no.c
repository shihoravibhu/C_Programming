#include <stdio.h>

void main() { 
    int num, digit;
    int freq0 = 0, freq1 = 0, freq2 = 0, freq3 = 0, freq4 = 0;
    int freq5 = 0, freq6 = 0, freq7 = 0, freq8 = 0, freq9 = 0;

    printf("Enter number n: ");
    scanf("%d", &num);

    for (int n = num; n != 0; n /= 10) {
        digit = n % 10;
        if (digit == 0) freq0++;
        else if (digit == 1) freq1++;
        else if (digit == 2) freq2++;
        else if (digit == 3) freq3++;
        else if (digit == 4) freq4++;
        else if (digit == 5) freq5++;
        else if (digit == 6) freq6++;
        else if (digit == 7) freq7++;
        else if (digit == 8) freq8++;
        else if (digit == 9) freq9++;
    }

    printf("Digit frequency:\n");
    if (freq0) printf("Digit 0: %d times\n", freq0);
    if (freq1) printf("Digit 1: %d times\n", freq1);
    if (freq2) printf("Digit 2: %d times\n", freq2);
    if (freq3) printf("Digit 3: %d times\n", freq3);
    if (freq4) printf("Digit 4: %d times\n", freq4);
    if (freq5) printf("Digit 5: %d times\n", freq5);
    if (freq6) printf("Digit 6: %d times\n", freq6);
    if (freq7) printf("Digit 7: %d times\n", freq7);
    if (freq8) printf("Digit 8: %d times\n", freq8);
    if (freq9) printf("Digit 9: %d times\n", freq9);

   
}
