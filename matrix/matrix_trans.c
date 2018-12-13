#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10],b[10][10],r,c,i,j;
    //clrscr();
    printf("number Row and column of matrix \n");
    scanf("%d%d",&r,&c);

    printf("enter a matrix \n");

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d",&a[i][j]);
        }
    }
    //Transporse of matrix
    for(i=0; i<c; i++){
        for(j=0; j<r; j++){
            b[i][j] = a[j][i];
        }
    }
    printf("transporsed matrix \n");
    //printing trans matrix
    for(i=0; i<c; i++){
        for(j=0; j<r; j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    getch();
}
