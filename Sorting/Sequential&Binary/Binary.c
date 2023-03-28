#include <stdio.h>

int main()
{
    int angka [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int cari;
    printf("Masukkan data yang ingin dicari : ");
    scanf("%d", &cari);
    int awal = 0, akhir = sizeof(angka) / 4 - 1, tengah = (awal + akhir) / 2;

    while(1)
    {
        tengah = (awal + akhir) / 2;
        if (cari == angka[tengah])
        {
            printf("data %d ditemukan di index ke %d\n", cari, tengah);
            break;
        }else if(awal == akhir)
        {
            printf("data tidak ditemukan");
            break;
        }else if(cari > angka[tengah])
        {
            awal = tengah+1;
        }else if(cari < angka[tengah])
        {
            akhir = tengah-1;
        }      
    }
}