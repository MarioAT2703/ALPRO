#include <stdio.h>

int main() {
    int i, n;
    float nilai[100];

    printf("Masukkan jumlah siswa: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Masukkan nilai siswa ke-%d: ", i+1);
        scanf("%f", &nilai[i]);
    }

    printf("\nNo.  | Nilai\n");
    for (i = 0; i < n; i++) {
        printf("%d   | %.2f\n", i+1, nilai[i]);
    }

    return 0;
}
