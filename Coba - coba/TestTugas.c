#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_USERNAME_LENGTH 11
#define MAX_PASSWORD_LENGTH 20

struct Mahasiswa {
    char username[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];
};


int LoginMahasiswa(char *username, char *password) {
    FILE *login = fopen("login/mahasiswa.txt", "r");
    if (login == NULL) {
        printf("Error!\n");
        return 0;
    }
    
    struct Mahasiswa mahasiswa;
    while (fscanf(login, "%s %s", mahasiswa.username, mahasiswa.password) != EOF) {
        if (strcmp(username, mahasiswa.username) == 0 && strcmp(password, mahasiswa.password) == 0) {
            fclose(login);
            return 1;
        }
    }

    fclose(login);
    return 0;
}

int CekLogin(){
    bool login = true;
    char username[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];
    
    login:
    printf("Username: ");
    scanf("%s", username);
    printf("Password: ");
    scanf("%s", password);

    while (login)
    {
        if (LoginMahasiswa(username, password)) {
            printf("\nSelamat Datang!\n");
            return 0;
        } else {
            printf("Username atau password tidak sesuai!\n\n");
            goto login;
        }
    }

    
}

void TambahData()
{

FILE *TambahData;

int c;
char Nama[100];
char Nim[11];
char Prodi[50];
char Keperluan[200];
char JangkaWaktu[20];

TambahData = fopen("databaseDataPeminjamanMahasiswa.txt", "a+");

printf("Nama Lengkap : ");
fgets(Nama, sizeof(Nama), stdin);
while ((c = getchar()) != '\n' && c != EOF);
fprintf(TambahData, "Nama Lengkap : %s\n", Nama);
printf("Nim : ");
fgets(Nim, sizeof(Nim), stdin);

fprintf(TambahData, "Nim : %s\n", Nim);
printf("Prodi : ");
fgets(Prodi, sizeof(Prodi), stdin);

fprintf(TambahData, "Prodi : %s\n", Prodi);
printf("Keperluan : ");
fgets(Keperluan, sizeof(Keperluan), stdin);

fprintf(TambahData, "Keperluan : %s\n", Keperluan);
printf("Jangka Waktu : ");
while((c = getchar()) != '\n' && c != EOF);
fprintf(TambahData, "Jangka Waktu : %s\n\n", JangkaWaktu);

fclose(TambahData);
}

int MenuMahasiswa(){
    int menu;
    bool loop = true;
    while (loop)
    {
        printf("\n|-------------------------------|\n");
        printf("|------ ITTELKOM SURABAYA ------|\n");
        printf("|------- Peminjaman Aula -------|\n");
        printf("|---------- Mahasiswa ----------|\n");
        printf("|-------------------------------|\n");
        printf("| 1. Lihat Daftar Peminjaman \t|\n");
        printf("| 2. Pinjam Ruangan \t\t|\n");
        printf("| 3. Riwayat Peminjaman Aula \t|\n");
        printf("| 4. Keluar \t\t\t|\n");
        printf("|-------------------------------|\n\n");
        scanf("%d", &menu);
        
        if (menu == 1) //MENU 1
        {
            printf("\n|-------------------------------|\n");
            printf("|------ Daftar Peminjaman ------|\n");
            printf("|---------- Mahasiswa ----------|\n");
            printf("|-------------------------------|\n");
            printf("| 1. Tampilkan Daftar Peminjaman|\n");
            printf("| 2. Cari jadwal peminjaman \t|\n");
            printf("| 3. Filter Jadwal \t\t|\n");
            printf("| 4. Kembali \t\t\t|\n");
            printf("|-------------------------------|\n\n");

        } else if (menu == 2) //MENU 2
        {
            printf("\n|-------------------------------|\n");
            printf("|------ Pinjam Ruang Aula ------|\n");
            printf("|---------- Mahasiswa ----------|\n");
            printf("|-------------------------------|\n\n");
            TambahData();
            // goto LOOP
            
        } else if (menu == 3) //MENU 3
        {
            printf("\n|-------------------------------|\n");
            printf("|--- Riwayat Peminjaman Aula ---|\n");
            printf("|---------- Mahasiswa ----------|\n");
            printf("|-------------------------------|\n");
            // - Tampilkan Riwayat
            // goto LOOP

        } else if (menu == 4) //MENU 4
        {
            loop = false;
            printf("\n|-------------------------------|\n");
            printf("|------- Terimakasih :D --------|\n");
            printf("|-- Tetaplah Bertanggungjawab --|\n");
            printf("|------ Dalam Segala Hal -------|\n");
            printf("|-------------------------------|\n");
        }
        
        
    }
    return 0;
}

int main() {
    //CekLogin();
    MenuMahasiswa();

    return 0;
}