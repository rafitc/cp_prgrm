#include<stdio.h>
#include<conio.h>
void main(){
    int num,*ptr,i,x,count=0;
    //clrscr();
    int a[50];
    ptr = a;
    printf("Enter size of array\n");
    scanf("%d",&num);
    printf("Enter array elements\n");
    for(i=0; i<num; i++){
        scanf("%d",(ptr+i));
    }
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
