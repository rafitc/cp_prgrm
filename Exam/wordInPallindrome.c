#include <stdio.h>
#include <conio.h>
#include <string.h>
// To check string Pallindrome // s
void main(){
    int i,j,a=0;
    char s[20],s1[20];
    printf("Enter a word\n");
    gets(s);
    //strcpy(s1,s);
    i = strlen(s); //getting string length
    i= i-1;
    for(j=i; j>=0; j--){
        s1[a] = s[j];
        a++ ;
    }
    s1[a] = '\0';
    if(strcmp(s1,s) == 0){
        printf("String %s Is a Pallindrome \n",s);
    }
    else{
        printf("String %s Is not a Pallindrome\n",s);
    }

    getch();
}
