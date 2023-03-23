#include<stdio.h>
int main(){
    FILE*ptr;
    ptr = fopen("text.txt","r");
    char ch[100];
    int max = -1;
    while(fgets(ch,99,ptr) != NULL){
        printf("%s",ch);
        if (max < atoi(ch)){
            max = atoi(ch);
        }
    }
    fclose(ptr);
    printf("HEHEHEHEHE\n");
    printf("\nLargest Number in file is %d",max);
}