//prime Number between 0-100
#include <stdio.h>
#include <conio.h>
void main(){
    int i,j,k,flag=0;
    //clrscr();
    for(i=2; i<=100; i++){
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
    return 0;
}
