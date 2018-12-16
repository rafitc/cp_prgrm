#include <conio.h>
#include <stdio.h
#include <stdlib.h>
void main(){
    FILE *fp1,*fp2;
//    int i,j;
    char c,ch;
    //clrscr();
    fp1 = fopen("FileOne","w");
    if (fp1 == NULL) {
        printf("Cannot open file \n");
}
    printf("Enter charcters to save in file \n");
    while((c=getchar()) != 'Z')
        putc(c,fp1);
    fclose(fp1);
    //copy
    fp1 = fopen("FileTwo","r");
    fp2 = fopen("FileTwo","w");
    if (fp1 == NULL) {
        printf("Cannot open file \n");
}
    else if (fp2 == NULL) {
        printf("Cannot open file \n");
}
    while (1) {
        ch = fgetc(fp1);

        if (ch == EOF)
	       break;
        else
	       putc(ch, fp2);
}
    fclose(fp1);
    fclose(fp2);
    return 0;
}
