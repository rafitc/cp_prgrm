#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
void main(){
    FILE *fp1,*fp2;
//    int i,j;
    char c,ch;
    //clrscr();
    fp1 = fopen("FileOne","r");
    //copy
    fp2 = fopen("FileTwo","w");
    if (fp1 == NULL) {
        printf("Cannot open file 1 \n");
}
    if (fp2 == NULL) {
        printf("Cannot open file 2 \n");
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
    printf("File 1 copied to 2 succesfully \n");
    return 0;
}
