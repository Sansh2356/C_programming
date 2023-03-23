#include <stdio.h>
int main(int args, char *argv[])
{
    printf("Enter numbers in a string to be added \n");
    int sum = 0;
    for (int m = 1; m < args; m++)
    {
         argv[m];
        int number = atoi( argv[m]);
        sum += number;
    }
    printf("%d", sum);
}