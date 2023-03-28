#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main()
{
    int menu;
    int x = 1;
    int pilih;
    int c;
    int i;
    char Jawab[100];
    char enter;
    bool loop = true;


    while (loop)
    mnu:
    {
        printf("==== Pilih soal ====\n");
        printf("\t Soal 1 \n");
        printf("\t Soal 2 \n");
        printf("\t Soal 3 \n");
        printf("\t Soal 4 \n");
        printf("\t Soal 5 \n");
        printf("\t \n");
        printf("\t Keluar (tekan 6)\n");
        printf("\t \n");
        printf("Masukkan nomer soal yang di pilih: ");
        scanf("%d", &menu);
        system("cls");

        if (menu == 1)
        {   
            TanyaI:
            printf("1. Nama hewan yang makan tumbuhan adalah?\n",x);
            x++;
            printf("\tJawab : ");
            scanf("%s", Jawab);

                for (i = 3; i >= 1; i--)
                {
                    printf("%d\n", i);
                    sleep(1);
                }
            
                system("cls");

            if (strcmp(Jawab, "herbifora") == 0 || strcmp(Jawab, "Herbifora") == 0 )
            {
                printf("\t==== Benar !!! ====\n\n");
                printf("tekan ENTER untuk melanjutkan\n");
                scanf("%c", &enter);
                    while (c = (getchar()) != '\n' && c != EOF);
                system("cls");
                goto TanyaII;    
            } else
            {
                printf("\t \n");
                printf("\t==== Salah !!! ====\n");
                printf("\n");
            }
                printf("apakah anda ingin mengulang soal?\n");
                printf("1. Ya\n");
                printf("2. Tidak\n");
                scanf("%d", &pilih);
                system("cls");

                    if (pilih == 1) 
                    {
                        goto TanyaI;
                    }

        }
        else if (menu == 2)
        {   
            TanyaII:
            printf("2. Sebutkan negara paling kecil di Asia Tenggara!\n");
            printf("\tJawab : ");
            scanf("%s", Jawab);

                for(i = 3; i >= 1; i--)
                {
                    printf("%d\n", i);
                    sleep(1);
                }
            
                system("cls");
            
            if (strcmp(Jawab, "Singapore") == 0 )
            {
                printf("\t==== Benar !!! ====\n\n");
                printf("tekan ENTER untuk melanjutkan\n");
                scanf("%c", &enter);
                    while(c = (getchar()) != '\n' && c != EOF);
                system("cls");
                goto TanyaIII;
            } else
            {
                printf("\t \n");
                printf("\t==== Salah  !!! ====\n");
                printf("\n");
                printf("\t=== Perhatikan penggunaan huruf kapital juga!!! ===\n\n");
            }
                printf("apakah anda ingin mengulang soal?\n");
                printf("1. Ya\n");
                printf("2. Tidak\n");
                scanf("%d", &pilih);
                system("cls");

                    if (pilih == 1) 
                    {
                        goto TanyaII;
                    }

        }
        else if (menu == 3)
        {
            TanyaIII:
            printf("3. Apa nama buah makanan favorite monyet?\n");
            printf("\tJawab : ");
            scanf("%s", Jawab);

                for (i = 3; i >= 1; i--)
                {
                    printf("%d\n", i);
                    sleep(1);
                }

                system("cls");

            if (strcmp(Jawab, "Pisang") == 0 || strcmp(Jawab, "pisang") == 0 )
            {
                printf("\t==== Benar !!! ====\n\n");
                printf("tekan ENTER untuk melanjukan\n");
                scanf("%c", &enter);
                    getchar();
                system("cls");
                goto TanyaIV;
            } else
            {
                printf("\t\n");
                printf("\t==== Salah !!! ====");
                printf("\n");
            }
                printf("apakah anda ingin mengulang soal?\n");
                printf("1. Ya\n");
                printf("2. Tidak\n");
                scanf("%d", &pilih);
                system("cls");

                    if (pilih == 1)
                    {
                        goto TanyaIII;
                    }
                
        }
        else if (menu == 4)
        {
            TanyaIV:
            printf("4. Gunung tertinggi di bumi adalah gunung?\n");
            printf("\tJawab : ");
            scanf("%s", Jawab);

            for (i = 3; i >= 1; i--)
                {
                    printf("%d\n", i);
                    sleep(1);
                }

                system("cls");


            if (strcmp(Jawab, "Everest") == 0 || strcmp(Jawab, "everest") == 0 || strcmp(Jawab, "Mount everest") == 0 ||
             strcmp(Jawab, "mount everest") == 0 || strcmp(Jawab, "Gunung everest") == 0 || strcmp(Jawab, "gunung everest") == 0 )

            {
                printf("\t==== Benar !!! ====\n\n");
                printf("tekan ENTER untuk melanjukan\n");
                scanf("%c", &enter);
                    getchar();
                system("cls");
                goto TanyaV;
            } else
            {
                printf("\t\n");
                printf("\t==== Salah !!! ====");
                printf("\n");
            }
                printf("apakah anda ingin mengulang soal?\n");
                printf("1. Ya\n");
                printf("2. Tidak\n");
                scanf("%d", &pilih);
                system("cls");

                    if (pilih == 1)
                    {
                        goto TanyaIV;
                    }
        }
        else if (menu == 5)
        {
            TanyaV:
            printf("5. Nama lain dari singa adalah?\n");
            printf("\tJawab : ");
            scanf(" %[^\n]%*c", Jawab);

                for (i = 3; i >= 1; i--)
                {
                    printf("%d\n", i);
                    sleep(1);
                }

                system("cls");

        if (strcmp(Jawab, "raja hutan") == 0 || strcmp(Jawab, "Raja hutan") == 0 )
            {
                printf("\t==== Benar !!! ====\n\n");
                printf("tekan ENTER untuk melanjukan\n");
                scanf("%c", &enter);
                
                system("cls");
                goto mnu;
            } else
            {
                printf("\t\n");
                printf("\t==== Salah !!! ====");
                printf("\n");
            }
                printf("apakah anda ingin mengulang soal?\n");
                printf("1. Ya\n");
                printf("2. Tidak\n");
                scanf("%d", &pilih);
                system("cls");

                    if (pilih == 1)
                    {
                        goto TanyaV;
                    }
        }
        else if (menu == 6)
        {
            loop = false;
            printf("\t === TERIMA KASIH ====\n");
        }
        else
        {
            printf("Masukkan nomor soal antara 1 hingga 6\n");
        }
    }
    return 0;
}
