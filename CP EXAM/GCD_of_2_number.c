//program to find GCD of 2 number
#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,i,ref,gcd,j;
    printf("enter two number \n");
    scanf("%d%d",&a,&b);
    if(a>b)
        ref=b/2;
    else
        ref=a/2;
    for(j=ref; j>1; j--)
        if(b%j == 0 && a%j == 0){
            gcd = j;
            break;
        }
        printf("GCD of %d and %d = %d",a,b,gcd);
        getch();
}
