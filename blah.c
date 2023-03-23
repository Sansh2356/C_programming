#include <stdio.h>
#include <math.h>
#include <string.h>
int rec(int a, int count)
{
    // printf("%d \n",a);
    int digit = a % 10;
//    printf("%d \n", digit);1
    int product = 0;
    // Base case//
    if (count == 1)
    {
        return (digit * pow(2, count-1));
    }
    product = product + pow(2, count-1) * digit + rec(a / 10, count - 1);
    return product;
}
int main(){
    // Q)Binary to decimal.
    int number;
    printf("Enter the binaray equivalent of a number \n");
    scanf("%d", &number);
    int count = 1;
    int gg = number;
    while (gg >= 10)
    {
        gg = gg / 10;
        count++;
    }
    printf("%d \n", count);
    int ans = rec(number, count);
    printf("%d", ans);
    
}