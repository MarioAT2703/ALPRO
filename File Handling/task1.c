#include <stdio.h>
    int main(){

        FILE *fptr;
        fptr = fopen("task 1.txt","w");
        char kalimat[1000];
        printf("masukkan kalimat :");
        gets(kalimat);
        fprintf(fptr,"%s",kalimat);
        fclose (fptr);
    }