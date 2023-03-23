#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int arr[5] = {8, 3, 4, 2, 4};
    int index = 0;
    int max = arr[index];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i; j++)
        {
            if (max < arr[j])
            {
                int b = arr[j];
                arr[j] = max;
                max = b;
                index = j;
            }
        }
        index = 0;
    }
    for(int m=0;m<5;m++){
        printf("%d\n",arr[m]);
    }
}