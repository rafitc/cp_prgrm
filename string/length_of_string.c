//length of a string without using function:A 
#include<stdio.h>
#include<conio.h>
void main()
{
    char s1[20];
    int i=0,count=0;
    //clrscr();
    printf("enter a string\t");
    gets(s1);
    while(s1[i] != '\0'){
        count++;
        i++;
    }
    printf("length of string is %d",count);
    getch();
}
