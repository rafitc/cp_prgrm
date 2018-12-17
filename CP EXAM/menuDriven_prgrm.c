#include<math.h>
#include<conio.h>
#include<stdio.h>
void main(){
    int i,j,flag=0,x;
    float k;
    //clrscr();
    char ch;
    printf("a.= prime number\nb.= perfect square\n");
    scanf("%c",&ch);

    switch(ch){
        case 'a':
        printf("prime numbers are \n");
        for(i=2; i<=10; i++){
            for(j=1; j<=i; j++){
                if(i%j == 0){
                    flag++;
                    }
                }
                if(flag<=2){
                    printf("%d ",i);
                }
                flag=0;
            }
            break;
        case 'b':
        printf("perfect squares are \n");
        for(i=1; i<=10; i++){
                k=sqrt(i);
                    x=k;
                    if(k==x){
                        printf("%d\n",i);
                    }
                }
                break;
        default :
            printf("Invalid input \n");
            break;
    }
     return 0;
}
