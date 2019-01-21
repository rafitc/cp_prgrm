#include <stdio.h>
#include <conio.h>
void zsum (int a[20][20],int,int);
void main(){
    int r,c,i,j,a[20][20];
    printf("Enter Row and Coloumn of matrix \n");
    scanf("%d",&r);
    scanf("%d",&c);
    if(r != c){
        printf("Not a square matrix \n");
        //delay(1000);
    }
    printf("Enter matrix elements \n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d",&a[i][j]);
        }
    }
    zsum(a,r,c);
    getch();
}
void zsum(int a[20][20],int r,int c){
    int i,j,sum=0;
    for(i=0; i<c-1; i++){
        sum = sum + a[0][i]; //getting Top row sum
    }
    for(i=1; i<c; i++){
        sum = sum + a[c-1][i];  //getting bottom rows sum
    }
    for(i=0,j=r-1; i<c; i++,j--){
        sum = sum + a[i][j];   //getting diagonal matrix sum 
    }
    printf("\nSum = %d",sum);
}
