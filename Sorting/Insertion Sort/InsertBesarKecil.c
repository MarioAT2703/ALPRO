#include <stdio.h>

void insertionSortDesc(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i-1;
        while (j >= 0 && arr[j] < key) {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

int main() {
    int data[] = {1, 9, 4, 5, 6, 7, 2, 3, 8, 1, 9, 4, 5, 6, 7, 2, 3, 8};
    int n = sizeof(data)/sizeof(data[0]);
    insertionSortDesc(data, n);
    int i;
    for (i=0; i < n; i++)
        printf("%d ", data[i]);
    return 0;
}
