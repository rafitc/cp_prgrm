#include <stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char s1[20][20], temp[20];
    int i,j,num;
    //clrscr();
    printf("Enter Number of strings \n");
    scanf("%d",&num);
    printf("Enter strings one by one\n");
    for(i=0; i<=num; i++){
        gets(s1[i]);
        strcpy(s2[i],s1[i]);
    }

    for(i=0; i<=num; i++){
        for(j=i+1; j<=num; j++){
            if(strcmp(s1[i], s1[j]) > 0){
                strcpy(temp, s1[i]);
                strcpy(s1[i], s1[j]);
                strcpy(s1[j], temp);
            }
        }
    }
    printf("\nSorted array \n");
    for(i=0; i<=num; i++){
        puts(s1[i]);
    }
    getch();
}
