#include <stdio.h>

int main()
{
    FILE *FileBaru;
    char IsiFile[1000];
    FileBaru = fopen("task 1.txt", "r");
    
    if (FileBaru == NULL){
        printf("Filenya gaada");}
    else {
    while (fgets(IsiFile, sizeof(IsiFile), FileBaru)){
        printf("%s", IsiFile);
    }
    fclose(FileBaru);}
    }