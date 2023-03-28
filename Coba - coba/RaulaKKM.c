#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Mahasiswa {
    char nama[50];
    int nim[10];
    char prodi[50];
    char keterangan[100];
    int jangka_waktu;
};

struct Dosen {
    char nama[50];
    int nip[10];
    char prodi[50];
    char keterangan[100];
    int jangka_waktu;
};

struct Staff {
    char nama[50];
    char divisi[50];
    char keterangan[100];
    int jangka_waktu;
};

int main() {
    
    struct Mahasiswa mhs;
    struct Dosen dsn;
    struct Staff stf;
    int pilihan;
    
    printf("Peminjaman Ruangan Aula\n");
    printf("1. Mahasiswa\n");
    printf("2. Dosen\n");
    printf("3. Staff\n");
    printf("Pilih jenis peminjam: ");
    scanf("%d", &pilihan);
    fflush(stdin);
    system("cls");
    
    FILE *fp;

    if(pilihan == 1) {
            system("cls");
        printf("Masukkan nama: ");
        scanf("%[^\n]s", &mhs.nama);
        fflush(stdin);
        printf("Masukkan NIM: ");
        scanf("%d", &mhs.nim);
        fflush(stdin);
        printf("Masukkan Prodi: ");
        scanf("%[^\n]s", &mhs.prodi);
        fflush(stdin);
        printf("Masukkan Keterangan: ");
        scanf("%[^\n]s", &mhs.keterangan);
        fflush(stdin);
        printf("Masukkan Jangka Waktu: ");
        scanf("%d", &mhs.jangka_waktu);
        fflush(stdin);
    } else if(pilihan == 2) {
            system("cls");
        printf("Masukkan Nama: ");
        scanf("%[^\n]s", &dsn.nama);
        fflush(stdin);
        printf("Masukkan NIP: ");
        scanf("%d", &dsn.nip);
        fflush(stdin);
        printf("Masukkan Prodi: ");
        scanf("%[^\n]s", &dsn.prodi);
        fflush(stdin);
        printf("Masukkan Keterangan: ");
        scanf("%[^\n]s", &dsn.keterangan);
        fflush(stdin);
        printf("Masukkan Jangka Waktu: ");
        scanf("%d", &dsn.jangka_waktu);
        fflush(stdin);
    } else if(pilihan == 3) {
            system("cls");
        printf("Masukkan Nama: ");
        scanf("%[^\n]s", &stf.nama);
        fflush(stdin);
        printf("Masukkan Divisi: ");
        scanf("%[^\n]s", &stf.divisi);
        fflush(stdin);
        printf("Masukkan Keterangan: ");
        scanf("%[^\n]s", &stf.keterangan);
        fflush(stdin);
        printf("Masukkan Jangka Waktu: ");
        scanf("%d", &stf.jangka_waktu);
        fflush(stdin);
    } else {
        printf("Pilihan tidak valid\n");
    }
    fp = fopen("Jadwal.txt", "a");
    if (pilihan == 1) {
        fprintf(fp, "Nama: %s\n", mhs.nama);
        fprintf(fp, "NIM: %d\n", mhs.nim);
        fprintf(fp, "Prodi: %s\n", mhs.prodi);
        fprintf(fp, "Keterangan: %s\n", mhs.keterangan);
        fprintf(fp, "Jangka Waktu: %d\n", mhs.jangka_waktu);
    } else if(pilihan == 2) {
        fprintf(fp, "Nama: %s\n", dsn.nama);
        fprintf(fp, "NIP: %d\n", dsn.nip);
        fprintf(fp, "Prodi: %s\n", dsn.prodi);
        fprintf(fp, "Keterangan: %s\n", dsn.keterangan);
        fprintf(fp, "Jangka Waktu: %d\n", dsn.jangka_waktu);
    } else if(pilihan == 3) {
        fprintf(fp, "Nama: %s\n", stf.nama);
        fprintf(fp, "Divisi: %s\n", stf.divisi);
        fprintf(fp, "Keterangan: %s\n", stf.keterangan);
        fprintf(fp, "Jangka Waktu: %d\n", stf.jangka_waktu);
    }
    fclose(fp);
   
    return 0;
}