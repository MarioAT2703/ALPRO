#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void rekursif (int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        rekursif (arr, low, pi - 1);
        rekursif (arr, pi + 1, high);
    }
}

int main() {
    int n, c;
    printf("Masukkan jumlah baris angka : ");
    scanf("%d", &n);
    int arr[n];
        for (int i = 0; i < n; i++) {
            while((c=getchar()) != '\n' && c != EOF);
    printf("Masukkan baris ke-%d: ", i+1);
        scanf("%d", &arr[i]);
    }
    rekursif (arr, 0, n-1);
    printf("\nArray setelah diurutkan: ");
    for (int i=0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
