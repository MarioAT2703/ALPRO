#include <stdio.h>
#include <math.h>

int main()
{
    int data, menu, a, z, b;

    printf ("Masukan jumlah data = ");
    scanf ("%d",&data);

    int nilai[data];
    for (a=0; a < data; a++){
        printf("data ke %d = ", a+1);
        scanf("%d",&nilai[a]);
    }

    printf ("Pilih Menu = ");
    scanf ("%d",&menu);
    

    switch (menu){
        case 1:
            printf("Ascending :");
            for (int a = 0; a < data-1; a++){
                for (int b = 0; b < data-a; b++){
                    if (nilai [b] > nilai [b+1]){
                        int tmp = nilai[b];
                        nilai[b] = nilai[b+1];
                        nilai[b+1] = tmp;
                    }
                }
            }
    
                for (int a = 0; a < data; a++){
                    printf ("[%d]", nilai[a]);
                }
            break;

        case 2:
            printf("Descending");
            for (int a = 0; a < data-1; a++){
                for (int b = 0; b < data-a; b++){
                    if (nilai [b] > nilai [b+1]){
                        int tmp = nilai[b];
                        nilai[b] = nilai[b+1];
                        nilai[b+1] = tmp;
                    }
                }
            }
    
                for (int a = data-1; a >= 0; a--){
                    printf ("[%d]", nilai[a]);
                }
            break;
        
        
    }
}