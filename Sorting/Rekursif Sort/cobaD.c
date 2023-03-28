#include <stdio.h>

    void rekursif(int arr[], int size){
        if (size == 1)
        return;
    for (int i = 0; i < size - 1; i++){
        if (arr[i] < arr[i + 1]){
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            }
        }
    rekursif(arr, size - 1);

    }

    int main()
    {
        int n;
        printf("Masukkan : ");
        scanf("%d", &n);

        int arr[n];
        printf("Masukkan %d baris angka : \n", n);
            for (int i = 0; i < n; i++){
                scanf("%d", &arr[i]);
         }

        rekursif(arr, n);

        printf("Angka urut : ");
            for (int i = 0; i < n; i++){
                printf("%d", arr[i]);
            }
        return 0;
    }