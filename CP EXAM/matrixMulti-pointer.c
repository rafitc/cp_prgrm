#include <stdio.h>
#include <conio.h>
void main(){
    int *ptr1,*ptr2,*ptr3;
    int a[20][20],b[20][20],c[20][20],i,j,k,r1,r2,c1,c2,sum;
    ptr1 = a[0];
    ptr2 = b[0];
    ptr3 = c[0];
    printf("enter ROW and COLUMN of first matrix");
    scanf("%d%d",&r1,&c1);
    printf("enter ROW and COLUMN of second matrix");
    scanf("%d%d",&r2,&c2);
    if(r2 != c1){
        printf("cant perform !");
        //exit(0);
    }
    printf("Enter values of first marix\n");
    for(i=0;i<r1;i++)
        for(j=0; j<c1; j++)
            scanf("%d",(*(ptr1+i)+j));

    printf("Enter values of second marix\n");
    for(i=0; i<r2; i++)
        for(j=0; j<c2; j++)
            scanf("%d",(*(ptr2+i)+j));

    for(i=0; i<r1; i++)
        for(j=0; j<c2; j++)
        sum=0;
            for(k=0; k<c1; k++)
                sum+= *(*(ptr1+i)+k) * *(*(ptr2+k)+j);
        *(*(ptr2+i)+j) = sum;

    for(i=0; i<r1; i++)
        for(j=0;j<c2;j++)
            printf("%d",*(*ptr3+i)+j);

    getch();

}
