#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100
#define MAX_JADWAL 10

struct Jadwal {
    char nama[MAX_LEN];
    char tanggal[MAX_LEN];
    char waktu[MAX_LEN];
};

struct Jadwal jadwal[MAX_JADWAL];
int jadwal_count = 0;

void tampil_jadwal() {
    printf("Jadwal Peminjaman Aula:\n");
    for (int i = 0; i < jadwal_count; i++) {
        printf("%d. %s %s %s\n", i+1, jadwal[i].nama, jadwal[i].tanggal, jadwal[i].waktu);
    }
}

void cari_jadwal() {
    char keyword[MAX_LEN];
    printf("Masukkan hari/tanggal: ");
    scanf("%s", keyword);
    printf("Hasil pencarian:\n");
    for (int i = 0; i < jadwal_count; i++) {
        if (strstr(jadwal[i].nama, keyword) || strstr(jadwal[i].tanggal, keyword) || strstr(jadwal[i].waktu, keyword)) {
            printf("%d. %s %s %s\n", i+1, jadwal[i].nama, jadwal[i].tanggal, jadwal[i].waktu);
        }
    }
}

void filter_jadwal() {
    char keyword[MAX_LEN];
    printf("Masukkan hari/tanggal: ");
    scanf("%s", keyword);
    printf("Hasil filter:\n");
    for (int i = 0; i < jadwal_count; i++) {
        if (strstr(jadwal[i].nama, keyword)) {
            printf("%d. %s %s %s\n", i+1, jadwal[i].nama, jadwal[i].tanggal, jadwal[i].waktu);
        }
    }
}

int main() {
    
    jadwal_count = 3;
    strcpy(jadwal[0].nama, "Kegiatan A");
    strcpy(jadwal[0].tanggal, "01/01/2022");
    strcpy(jadwal[0].waktu, "09:00-11:00");
    strcpy(jadwal[1].nama, "Kegiatan B");
    strcpy(jadwal[1].tanggal, "02/01/2022");
    strcpy(jadwal[1].waktu, "14:00-16:00");
    strcpy(jadwal[2].nama, "Kegiatan C");
    strcpy(jadwal[2].tanggal, "03/01/2022");
    strcpy(jadwal[2].waktu, "19:00-21:00");

int pilihan;
do {
    printf("Menu:\n");
    printf("1. Tampil Jadwal\n");
    printf("2. Cari Jadwal\n");
    printf("3. Filter Jadwal\n");
    printf("4. Kembali\n");
    printf("Pilihan: ");
    scanf("%d", &pilihan);
    switch (pilihan) {
        case 1:
            tampil_jadwal();
            break;
        case 2:
            cari_jadwal();
            break;
        case 3:
            filter_jadwal();
            break;
        case 4:
            break;
        default:
            printf("Pilihan salah.\n");
            break;
    }
} while (pilihan != 4);

return 0;
}
