//string concatination
#include<stdio.h>
#include<conio.h>
void main()
{
    char s1[20],s2[20];
    int i,j;
    //clrscr();
    printf("enter first string \n");
    gets(s1);
    printf("enter second string \n");
    gets(s2);

    for(i=0; s1[i]!='\0'; i++);
                
    for(j=0; s2[j]!='\0'; i++,j++){
        s1[i]=s2[j];
    }
    s2[i]='\0';
    printf("congatinated string is %s",s1);
    getch();

}
