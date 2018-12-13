#include<math.h>
#include<stdio.h>
#include<conio.h>
int mean(int a[], int);
int varience(int a[],int,int);
void main(){
    int i,num,a[50],stanDev;
    float m,varien;
    //clrscr();
    printf("Enter Number of elements\n");
    scanf("%d",&num);
    printf("Enter your numbers\n");
    for(i=0; i<num;i++){
        scanf("%d",&a[i]);
    }
    m=mean(a,num);
    printf("Mean =%f\n",m);
    varien = varience(a,num,m);
    printf("varience = %f\n",varien);
    stanDev = sqrt(varien);
    printf("Standard Deviation = %d",stanDev);

    getch();
}
int mean(int a[],int num){   //finding mean
    int i,sum=0;
    float x;
    for(i=0; i<num; i++){
        sum+=a[i];
    }
    x=sum/num;
    return(x);
}
int varience(int a[],int num,int m){
    int i,diff,sqDiff,sumDiff=0;
    for(i=0; i<num; i++){
        diff = (a[i] - m);  //difference b/w mean and value
        sqDiff = diff*diff; //square difference
        sumDiff = sumDiff + sqDiff; //sum difference
    }
    return(sumDiff/num);
}
