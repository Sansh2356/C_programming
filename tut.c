#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#define macros(a, b) (a > b)
int main()
{
    FILE *fp;
    FILE *fc;
    fp = fopen("tut.c", "r");
    char ch;
    if (fp == NULL)
    {
        printf("No such file exists");
        exit(1);
    }
    fc = fopen("tutorial.c", "w");
    if (fc == NULL)
    {
        printf("No such file exists");
        exit(2);
    }
    while (ch != EOF)
    {
        ch = fgetc(fp);
        fputc(ch, fc);
    }
    fclose(fp);
    fclose(fc);
    return 0;

    /*
    gets,puts,getc,getch,getche,putchar,putch
    fgetch
    */
}