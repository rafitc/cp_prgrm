#include <stdio.h>
#include <conio.h>
void happy(int);
/*A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number either equals 1 (where it will stay), or it loops endlessly in a cycle that does not include 1.
If it is not happy number it will end at '4'. */

void main(){
    int num;
    printf("ENter a number ");
    scanf("%d",&num);
    happy(num);
}
void happy(int num){
    int a,sum=0,number;
    number = num;         //backup number
        while(num != 1 && num != 4){
            while(num != 0){
                a = num % 10;
                sum = sum + (a*a) ;
                num = num/10;
        }
        num = sum;
        sum = 0;
    }
    if(num == 1){
        printf("%d is a Happy Number\n",number);
    }
    else
    {
        printf("%d is not a Happy Number \n",number);
    }
    getch();
}
