#include<stdio.h>
#include<conio.h>
struct student{
    int regNo;
    char name[20];
    int m1,m2,m3;
    int total;
    float percent;
    char grade;
}s[100];
void main(){
    int i,num;
    printf("Enter Number of student = ");
    scanf("%d",&num);
    //Reading student data
    for(i=0; i<num; i++){
        printf("Enter regNo and name of %dth student \n",i+1);
        scanf("%d",&s[i].regNo);
        scanf("%s",&s[i].name);
        printf("Enter marks 3 subjects marks\n");
        scanf("%d",&s[i].m1);
        scanf("%d",&s[i].m2);
        scanf("%d",&s[i].m3);
        s[i].total = (s[i].m1+s[i].m2+s[i].m3);
        s[i].percent = (s[i].total)*0.66;
        if(s[i].percent >= 91)
            s[i].grade = 'A';
        else if(80<= s[i].percent <=90)
            s[i].grade = 'B';
        else
            s[i].grade = 'C';
        printf("Succesfully entered %s's details\n",s[i].name);
}
    printf("\n Printing student details\n");
    for(i=0; i<num; i++){
        printf("Reg No = %d Name = %s\n",s[i].regNo,s[i].name);
        printf("Marks in physics= %d chemistry = %d maths = %d\n",s[i].m1,s[i].m2,s[i].m3);
        printf("total mark = %d\n",s[i].total);
        printf("percentage =%3f and GRADE = %c\n",s[i].percent,s[i].grade );
    }
    getch();
}
