#include<conio.h>
#include<stdio.h>
void main()
{
    char s1[20],s2[20];
    int i,j,flag=0,k;
    //clrscr();
    printf("Enter a string\n");
    gets(s1);
    printf("enter next string\n");
    gets(s2);
    for(i=0; s1[i]!='\0'; i++);
    for(j=0; s2[j]!='\0'; j++);
    if(i == j){
        for(k=0; k<i; k++){
            s1[k] == s2[k];
            flag++;
        }
        if(flag == i){
            printf("Same string\n");
        }
        else{
            printf("Not same\n");
        }
    }
    else{
        printf("different \n");
    }
}
