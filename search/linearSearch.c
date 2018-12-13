#include<conio.h>
#include<stdio.h>
void main(){
    int a[50],flag=0,num,n,i,j;
    //clrscr();
    printf("Enter Number of elements \n");
    scanf("%d",&n);
    printf("Enter elements \n");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("enter value to be searched \n");
    scanf("%d",&num);
    for(i=0; i<n; i++){
        if(a[i] == num){
            printf("element found at location %d\n",i+1);
            flag++;
        }
    }
    if(flag == 0){
        printf("element not found !");
    }
    getch();
}
