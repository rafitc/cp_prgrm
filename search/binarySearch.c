#include <stdio.h>
#include<conio.h>
void main(){
    int a[20],founde=0,i,num,m,f,l,search;
    //clrscr();
    printf("Enter size of array\n");
    scanf("%d",&num);
    printf("Enter array elements\n");
    for(i=0; i<num; i++){
        scanf("%d",&a[i]);
    }
    printf("enter element to be searched\n");
    scanf("%d",&search);
    f=0;
    l=num-1;
    m=(f+l)/2;
    while(f<=l){
        if(a[m] == search){
            printf("founded at location %d",m+1);
            founde++;
            break;
        }
        else if(a[m] >= search){
            l=m-1;
        }
        else if(a[m] <= search){
            f=m+1;
            m=(f+l)/2;
        }
    }
    if(founde== 0){
        printf("element not found\n");
    }
    getch();
}
