#include<stdio.h>
#include<conio.h>
int fact(int);
void main(){
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("factorial of %d \n",num);
    printf("%d",fact(num));
    getch();
}
int fact(int n){
    if (n >= 1)
        return(n*fact(n-1));
    else
        return 1;
}
