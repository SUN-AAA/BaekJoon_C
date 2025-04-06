#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    int f, s;
    long long int l, o;
    char color1[1000];
    char color2[1000];
    char color3[1000];

    scanf("%s", color1);
    scanf("%s", color2);
    scanf("%s", color3);

    if (strcmp(color1, "black") == 0)
        f = 0;
    else if (strcmp(color1, "brown") == 0)
        f = 1;
    else if (strcmp(color1, "red") == 0)
        f = 2;
    else if (strcmp(color1, "orange") == 0)
        f = 3;
    else if (strcmp(color1, "yellow") == 0)
        f = 4;
    else if (strcmp(color1, "green") == 0)
        f = 5;
    else if (strcmp(color1, "blue") == 0)
        f = 6;
    else if (strcmp(color1, "violet") == 0)
        f = 7;
    else if (strcmp(color1, "grey") == 0)
        f = 8;
    else if (strcmp(color1, "white") == 0)
        f = 9;
    else
        f = 0;

    if (strcmp(color2, "black") == 0)
        s = 0;
    else if (strcmp(color2, "brown") == 0)
        s = 1;
    else if (strcmp(color2, "red") == 0)
        s = 2;
    else if (strcmp(color2, "orange") == 0)
        s = 3;
    else if (strcmp(color2, "yellow") == 0)
        s = 4;
    else if (strcmp(color2, "green") == 0)
        s = 5;
    else if (strcmp(color2, "blue") == 0)
        s = 6;
    else if (strcmp(color2, "violet") == 0)
        s = 7;
    else if (strcmp(color2, "grey") == 0)
        s = 8;
    else if (strcmp(color2, "white") == 0)
        s = 9;
    else
        s = 0;

    if (strcmp(color3, "black") == 0)
        l = 1;
    else if (strcmp(color3, "brown") == 0)
        l = 10;
    else if (strcmp(color3, "red") == 0)
        l = 100;
    else if (strcmp(color3, "orange") == 0)
        l = 1000;
    else if (strcmp(color3, "yellow") == 0)
        l = 10000;
    else if (strcmp(color3, "green") == 0)
        l = 100000;
    else if (strcmp(color3, "blue") == 0)
        l = 1000000;
    else if (strcmp(color3, "violet") == 0)
        l = 10000000;
    else if (strcmp(color3, "grey") == 0)
        l = 100000000;
    else if (strcmp(color3, "white") == 0)
        l = 1000000000;
    else
        l = 0;

    o = (f * 10 + s) * l;
    printf("%lld", o);

    return 0;
}
