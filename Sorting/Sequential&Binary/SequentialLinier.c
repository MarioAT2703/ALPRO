#include <stdio.h>

int main()
{
    
    int barisiAngka[] = {1, 3, 4, 2, 5, 6, 7, 9, 8, 10};
    int cari;
    printf("Masukkan angka yang ingin dicari : ");
    scanf("%d", &cari);
   
    for (int a = 0; a <sizeof(barisiAngka)/4; a++){
        if (barisiAngka[a] == cari)
    
        {
            printf("angka %d ditemukan di index ke %d",cari,a);
            break;
        }else if (a == sizeof(barisiAngka) - 1 && barisiAngka [a] != cari){

            printf("data tidak ditemukan\n");
        }
        
        
    }
}