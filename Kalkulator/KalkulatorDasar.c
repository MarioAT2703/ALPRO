#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
        
        printf("Masukkan nilai a : ", &a);
        scanf("%d", &a);
        printf("Masukkan nilai b : ", &b);
        scanf("%d", &b);

            printf("pilih : \n");
            printf("1. Tambah(+)\n");
            printf("2. Kurang(-)\n");
            printf("3. kali(x)\n");
            printf("4. Bagi(%)\n");
            scanf("%d", &c);

                if (c == 1 ) {
                    printf("Hasil dari a + b = %d ", a + b);
                } else if ( c == 2 ) {
                   printf("Hasil dari a - b = %d ", a - b);
                } else if ( c == 3 ) {
                    printf("Hasil dari a x b = %d ", a * b);
                } else if ( c == 4 ) {
                    printf("Hasil dari a / b = %d ", a / b);
                }
    return 0;
}