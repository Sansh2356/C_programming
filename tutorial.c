#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
/*
Console I/P-:
Formatted functions-::
scanf,printf,sscanf,sprintf
UNformatted functions-::
getch,getche,getchar,fgetchar
putch,putche,putchar,fputchar
gets and puts functions are used in case of input and putput of strings and to add the string body after enter or space or underscored char

File Input Output:--
1)Creation of a file
2)Opening of a file
3)Seeking from a file
4)Closing a file
5)Reading from a file
6)Writing from a file
*/
FILE*fp1;
FILE*fp2;
char ch;
fp1 = fopen("tut_2.c","r");
if(fp1  == NULL){
exit(1);
}
fp2 = fopen("tut.c","w");
if(fp2 == NULL){
    exit(2);
}
while(1){
    ch = fgetc(fp1);
    if(ch == EOF){
        break;
    }
    else{
        fputc(ch,fp2);
        printf("%c \n",ch);
    }

}
fclose(fp1);
fclose(fp2);




}