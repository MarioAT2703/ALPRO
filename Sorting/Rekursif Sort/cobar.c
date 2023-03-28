#include <stdio.h>

void rek(int n) {
    if (n == 0) {
        return;
    }
    rek(n-1);
    printf("%d ", n);
}

int main() {
    int i;
    printf("Masukkan: ");
    scanf("%d", &i);
    rek(i);
    return 0;
}
