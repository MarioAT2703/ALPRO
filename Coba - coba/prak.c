#include <stdio.h>
#include <string.h>

void Login(){
    int a;
    char Nama[100];
    char Absen[50];
    char Kelas[90];


    FILE *fp = fopen("Prak.txt", "a");

    printf("Masukkan nama : ");
    fgets(Nama, sizeof(Nama), stdin);
    fprintf(fp,"%s\n", Nama);

    printf("Masukkan absen : ");
    fgets(Absen, sizeof(Absen), stdin);
    fprintf(fp, "%s\n", Absen);
    while((a = getchar()) != '\n' && a!= EOF);

    printf("Masukkan kelas : ");
    fgets(Kelas, sizeof(Kelas), stdin);
    fprintf(fp, "%s\n", Kelas);

    fclose(fp);
}

int main()
{
    Login();
}