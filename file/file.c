#include <conio.h>
<<<<<<< HEAD
#include <stdio.h>
=======
#include <stdio.h
>>>>>>> af52c095a0df984ef95fb5578b4209d4a96179c7
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
