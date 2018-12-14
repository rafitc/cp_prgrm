#include<stdio.h>
#include<conio.h>
void main(){
    int num, a[50],*ptr, i;
    //clrscr();
    ptr = &a[50];
    printf("Enter Size of array\n");
    scanf("%d",&num);
    printf("Enter Elements in array \n");
    for(i=0; i<num; i++){
        scanf("%d",*ptr+i);
    }
    for(i=0; i<num; i++){
        printf("%d",*ptr+i);
    }
    getch();
}
