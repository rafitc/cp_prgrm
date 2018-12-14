#include<stdio.h>
#include<conio.h>
void main(){
    int num=10,*ptr,i,x,count=0;
    //clrscr();
    int a[10] = {4,2,5,6,3,4,2,2,6,6};
    ptr = a;

    printf("\nPrinting array elements \n");
    for(i=0; i<num; i++){
        printf("%d\n",*(ptr+i));
    }
    printf("Enter a element want to search occurence\n");
    scanf("%d",&x);
    for(i=0; i<num; i++){
        if(*(ptr+i) == x){
            count++;
        }
    }
    if(count>0)
        printf("%d is %d times in the array",x,count);
    else
        printf("%d Not in this array\n",x);
    getch();
}
