#include <stdio.h>

    int main(){
        FILE *fptr;
        fptr = fopen("FileSatu.txt","w");
        fprintf(fptr,"%s","APA KABAR!!!!");
        fclose(fptr);

    }