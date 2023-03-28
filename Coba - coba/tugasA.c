#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_USERNAME_LENGTH 11
#define MAX_PASSWORD_LENGTH 20

#define MAX_Nama 100
#define MAX_Prodi 100
#define MAX_KeperluanPeminjaman 100
#define MAX_TanggalPeminjaman 100 
#define MAX_WaktuMulai 100
#define MAX_WaktuSelesai 100
#define MAX_JumlahPeminjam 100

// struct Mahasiswa {
//     char username[MAX_USERNAME_LENGTH];
//     char password[MAX_PASSWORD_LENGTH];
// };

typedef struct
{
    char Nama[MAX_Nama]; 
    int Nim; 
    char Prodi[MAX_Prodi];
    char KeperluanPeminjaman[MAX_KeperluanPeminjaman]; 
    char TanggalPeminjaman[MAX_TanggalPeminjaman];
    char WaktuMulai[MAX_WaktuMulai];
    char WaktuSelesai[MAX_WaktuSelesai]; 
}PeminjamanAula;


// int LoginMahasiswa(char *username, char *password) {
//     FILE *login = fopen("login/mahasiswa.txt", "r");
//     if (login == NULL) {
//         printf("Error!\n");
//         return 0;
//     }
    
//     struct Mahasiswa mahasiswa;
//     while (fscanf(login, "%s %s", mahasiswa.username, mahasiswa.password) != EOF) {
//         if (strcmp(username, mahasiswa.username) == 0 && strcmp(password, mahasiswa.password) == 0) {
//             fclose(login);
//             return 1;
//         }
//     }

//     fclose(login);
//     return 0;
// }

// void CekLogin(){
//     bool login = true;
//     char username[MAX_USERNAME_LENGTH];
//     char password[MAX_PASSWORD_LENGTH];
    
//     login:
//     printf("Username: ");
//     scanf("%s", username);
//     printf("Password: ");
//     scanf("%s", password);

//     while (login)
//     {
//         if (LoginMahasiswa(username, password)) {
//             printf("\nSelamat Datang!\n");
//         } else {
//             printf("Username atau password tidak sesuai!\n\n");
//             goto login;
//         }
//     }
    
// }


void TambahData(PeminjamanAula a[],int total){         
    for(int b = 0; b < total; b++){
        fflush(stdin);
        printf("Nama Lengkap Peminjam ke-%d : ", b + 1);
        scanf("%[^\n]s", a[b].Nama);
        fflush(stdin);
        printf("Nomor Induk Mahasiswa : ");
        scanf("%d", &a[b].Nim);
        fflush(stdin);
        printf("Prodi : ");
        scanf("%[^\n]s", a[b].Prodi);
        fflush(stdin);
        printf("Keperluan Peminjaman : ");
        scanf("%[^\n]s", a[b].KeperluanPeminjaman);
        fflush(stdin);
        printf("Tanggal Peminjaman (dd/mm/yyyy) : ");
        scanf("%[^\n]s", a[b].TanggalPeminjaman);
        fflush(stdin);
        printf("Dari Pukul (hh:mm) : ");
        scanf("%[^\n]s", a[b].WaktuMulai);
        fflush(stdin);
        printf("Hingga Pukul (hh:mm) : ");
        scanf("%[^\n]s", a[b].WaktuSelesai);

    }
}


void LihatData(PeminjamanAula* a, int* total) {
    FILE* Aula = fopen("database-aula.txt", "r");
    if (Aula == NULL) {
        perror("Gagal membuka File: ");
        return;
    }
    *total = 0;
    
    while
    (fscanf(Aula, "%[^,], %d, %[^,], %[^,], %[^,], %[^,], %[^,]", 
    a[*total].Nama, &a[*total].Nim, a[*total].Prodi, a[*total].KeperluanPeminjaman, a[*total].TanggalPeminjaman, a[*total].WaktuMulai, a[*total].WaktuSelesai) == 7) {
      (*total)++;  
    }
    fclose(Aula);
}

void TampilkanData(PeminjamanAula a[], int c){
    for(int b = 0; b < c; b++){
        printf("Nomor Peminjaman : %d\n", b+1);
        printf("Nama : %s\n", a[b].Nama);
        printf("Nim : %d\n", a[b].Nim);
        printf("Prodi : %s\n", a[b].Prodi);
        printf("Keperluan Peminjaman : %s\n", a[b].KeperluanPeminjaman);
        printf("Tanggal Peminjaman (dd/mm/yyyy) : %s\n", a[b].TanggalPeminjaman);
        printf("Dari Pukul (hh:mm) : %s\n", a[b].WaktuMulai);
        printf("Hingga Pukul (hh:mm) : %s\n", a[b].WaktuSelesai);
        printf("\n");
    }
}

void SimpanData(PeminjamanAula* a, int total){
    FILE* Aula = fopen("database-aula.txt", "a");
    if(Aula == NULL){
        perror("Gagal membuka File: ");
    }

    for(int b = 0; b < total; b++){
        fprintf(Aula, "%s, %d, %s, %s, %s, %s, %s\n",
        a[b].Nama, a[b].Nim, a[b].Prodi, a[b].KeperluanPeminjaman, a[b].TanggalPeminjaman, a[b].WaktuMulai, a[b].WaktuSelesai);
    }
    fclose(Aula);
    printf("\nData Peminjaman tersimpan!");
}

void Edit(PeminjamanAula a[], int c){
    int row;
    fflush(stdin);
    printf("Masukkan Nomor Peminjaman Aula : ");
    scanf("%d", &row);
    fflush(stdin);

    // ganti data

    printf("Ubah Nama : ");
    scanf("%[^\n]s", a[row - 1].Nama);
    fflush(stdin);
    printf("Ubah Nim : ");
    scanf("%d", &a[row - 1].Nim);
    fflush(stdin);
    printf("Ubah Prodi : ");
    scanf("%[^\n]s", a[row - 1].Prodi);
    fflush(stdin);
    printf("Ubah Keperluan Peminjaman : ");
    scanf("%[^\n]s", a[row - 1].KeperluanPeminjaman);
    fflush(stdin);
    printf("Ubah Tanggal Peminjaman (dd/mm/yyyy) : ");
    scanf("%[^\n]s", a[row - 1].TanggalPeminjaman);
    fflush(stdin);
    printf("Ubah Dari Pukul (hh:mm) : ");
    scanf("%[^\n]s", a[row - 1].WaktuMulai);
    fflush(stdin);
    printf("Ubah Hingga Pukul (hh:mm) : ");
    scanf("%[^\n]s", a[row - 1].WaktuSelesai);
    fflush(stdin);
}

void Cari(PeminjamanAula a[], int total){
    fflush(stdin);
    int CariNim, found = 0;
    printf("Cari Berdasarkan Nomor Induk Mahasiswa : \n");
    scanf("%d", &CariNim);

    for(int b = 0; b < total; b++){
        if(CariNim == a[b].Nim){
            printf("Data ditemukan pada Peminjaman Aula ke : %d\n", b+1);
            printf("Nama : %s\n", a[b].Nama);
            printf("Nim : %d\n", a[b].Nim);
            printf("Prodi : %s\n", a[b].Prodi);
            printf("Keperluan Peminjaman : %s\n", a[b].KeperluanPeminjaman);
            printf("Tanggal Peminjaman (dd/mm/yyyy) : %s\n", a[b].TanggalPeminjaman);
            printf("Dari Pukul (hh:mm) : %s\n", a[b].WaktuMulai);
            printf("Hingga Pukul (hh:mm) : %s\n", a[b].WaktuSelesai);
            found = 1;
        }
    }
    if(!found){
        printf("Data yang anda cari tidak ada, mohon cek kembali Nomor Induk Mahasiswa!");
    }
}


void Urutkan(PeminjamanAula a[], int total){
    for(int b = 0; b < total; b++){
        for(int d = 1 + b; d < total; d++){
            if(strcmp(a[b].Nama, a[d].Nama) > 0){
                PeminjamanAula temp = a[b];
                a[b] = a[d];
                a[d] = temp;
            }
        }
    }
    for(int b = 0; b < total; b++){
        printf("Data ditemukan pada Peminjaman Aula ke : %d\n", b+1);
        printf("Nama : %s\n", a[b].Nama);
        printf("Nim : %d\n", a[b].Nim);
        printf("Prodi : %s\n", a[b].Prodi);
        printf("Keperluan Peminjaman : %s\n", a[b].KeperluanPeminjaman);
        printf("Tanggal Peminjaman (dd/mm/yyyy) : %s\n", a[b].TanggalPeminjaman);
        printf("Dari Pukul (hh:mm) : %s\n", a[b].WaktuMulai);
        printf("Hingga Pukul (hh:mm) : %s\n", a[b].WaktuSelesai);
        printf("\n");
    }
}

int JumlahPeminjam(char* jumlahpeminjam){
    FILE* Aula = fopen(jumlahpeminjam, "r");
    if (Aula == NULL) {
        perror("Gagal membaca data: ");
        return 0;
    }
    int count = 0;
    char maxJumlahPeminjam[MAX_JumlahPeminjam];
    while(fgets(maxJumlahPeminjam, MAX_JumlahPeminjam, Aula) != NULL){
      count++;  
    }
    fclose(Aula);
    return count;
}

int main() {
    bool loop = true;
    PeminjamanAula pinjam[MAX_JumlahPeminjam];
    FILE* Aula;
    int menu, jumlah, jumlahpeminjam;
    // while (loop)
    // {
        // printf("\n|-------------------------------|\n");
        // printf("|------ ITTELKOM SURABAYA ------|\n");
        // printf("|------- Peminjaman Aula -------|\n");
        // printf("|---------- Mahasiswa ----------|\n");
        // printf("|-------------------------------|\n");
        // printf("| 1. Pinjam Ruang Aula \t|\n");
        // printf("| 2. Lihat Daftar Peminjaman \t\t|\n");
        // printf("| 3. Edit Data \t\t\t|\n");
        // printf("| 4. Cari Data \t\t\t|\n");
        // printf("| 5. Urutkan Data \t\t|\n");
        // printf("| 6. Keluar \t\t\t|\n");
        // printf("|-------------------------------|\n\n");
        // scanf("%d", &menu);
    //     if (menu == 1) //MENU 1
    //     {
    //         printf("\n|-------------------------------|\n");
    //         printf("|------ Daftar Peminjaman ------|\n");
    //         printf("|---------- Mahasiswa ----------|\n");
    //         printf("|-------------------------------|\n\n");
            
    //     } else if (menu == 2) //MENU 2
    //     {
    //         printf("\n|-------------------------------|\n");
    //         printf("|------ Pinjam Ruang Aula ------|\n");
    //         printf("|---------- Mahasiswa ----------|\n");
    //         printf("|-------------------------------|\n\n");
            

    //     } else if (menu == 3) //MENU 3
    //     {
    //         loop = false;
    //         printf("\n|-------------------------------|\n");
    //         printf("|------- Terimakasih :D --------|\n");
    //         printf("|-- Tetaplah Bertanggungjawab --|\n");
    //         printf("|------ Dalam Segala Hal -------|\n");
    //         printf("|-------------------------------|\n");
    //     }
        
        
    // }
    do{
        printf("\n\t|---------------------------------------|\n");
        printf("\t|---------- ITTELKOM SURABAYA ----------|\n");
        printf("\t|----------- Peminjaman Aula -----------|\n");
        printf("\t|-------------- Mahasiswa --------------|\n");
        printf("\t|---------------------------------------|\n");
        printf("\t| 1. Pinjam Ruang Aula \t\t\t|\n");
        printf("\t| 2. Lihat Daftar Peminjaman \t\t|\n");
        printf("\t| 3. Edit Data Peminjaman \t\t|\n");
        printf("\t| 4. Cari Data Peminjaman \t\t|\n");
        printf("\t| 5. Urutkan Data Peminjaman \t\t|\n");
        printf("\t| 6. Hitung Data Peminjaman \t\t|\n");
        printf("\t| 7. Keluar \t\t\t\t|\n");
        printf("\t|---------------------------------------|\n\n");
        scanf("%d", &menu);
                printf("Press any key to continue");
                getchar();
                system("cls");

            switch (menu){
            case 1:
                system("cls");
                printf("\nMau pinjam Ruangan berapa kali : ");
                scanf("%d", &jumlah);
                fflush(stdin);
                TambahData(pinjam, jumlah);
                SimpanData(pinjam, jumlah);
            break;
            case 2:
                system("cls");
                LihatData(pinjam, &jumlah);
                TampilkanData(pinjam, jumlah);
                break;
            case 3:
                system("cls");
                Aula = fopen("database-aula.txt", "w");
                Edit(pinjam, jumlah);
                    if(Aula == NULL){
                        perror("Data tidak ada!");
                    }
                    for(int b = 0; b < jumlah; b++){
                        fprintf(Aula, "%s, %d, %s, %s, %s, %s, %s\n",
                        pinjam[b].Nama, pinjam[b].Nim, pinjam[b].Prodi, pinjam[b].KeperluanPeminjaman, pinjam[b].TanggalPeminjaman, pinjam[b].WaktuMulai, pinjam[b].WaktuSelesai);
                    }
                    fclose(Aula);
                break;
            case 4:
                system("cls");
                Cari(pinjam, jumlah);
                break;
            case 5:
                system("cls");
                LihatData(pinjam, &jumlah);
                Urutkan(pinjam, jumlah);
                Aula = fopen("database-aula.txt", "w");
                if(Aula == NULL){
                    printf("Data tidak ada!");
                }
                for(int b = 0; b < jumlah; b++){
                    fprintf(Aula, "%s, %d, %s, %s, %s, %s, %s\n",
                    pinjam[b].Nama, pinjam[b].Nim, pinjam[b].Prodi, pinjam[b].KeperluanPeminjaman, pinjam[b].TanggalPeminjaman, pinjam[b].WaktuMulai, pinjam[b].WaktuSelesai);
                    }
                    fclose(Aula);
                break;
            case 6:
                system("cls");
                jumlahpeminjam = JumlahPeminjam("database-aula.txt");
                printf("Jumlah Orang yang meminjam Aula : %d Peminjam", jumlahpeminjam);
                break;
            default:
                printf("Pilih salah satu Menu diatas!");
                break;
            }
        }while (menu != 7);
    
    return 0;
}