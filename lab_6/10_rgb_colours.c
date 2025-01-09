#include <stdio.h>

void main()
{

    float white, cyan, magenta, yellow, k, red, green, blue, a, b, c;

    printf("enter red , green and blue (0-255) : ");
    scanf("%f %f %f", &red, &green, &blue);

    if (red == 0 && green == 0 && blue == 0)
    {

        cyan = 0;
        magenta = 0;
        yellow = 0;
        k = 1;
    }
    else
    {
        a = red / 255, b = green / 255, c = blue / 255;

        (a > b) ? ((a > c) ? (white = a) : (white = c)) : ((b > c) ? (white = b) : (white = c));

        cyan = (white - red / 255) / white;
        magenta = (white - green / 255) / white;
        yellow = (white - blue / 255) / white;
        k = 1 - white;
    }

    printf("%.2f %.2f %.2f %.2f\n", cyan, magenta, yellow, k);
}