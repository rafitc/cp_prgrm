//copy one string, without using library 
#include<stdio.h>
#include<conio.h>
void main(){
    char s1[20],s2[20];
    int i,j;
    //clrscr();
    printf("enter a string \n");
    gets(s1);
    for(i=0; s1[i]!='\0'; i++);
    for(j=0; j<i; j++){
        s2[j]=s1[j];
    }
    s2[j]='\0';
    printf("copied string = %s",s2);
    getch();
}
