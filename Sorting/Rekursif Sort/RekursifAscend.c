#include <stdio.h>
int i;
int n;

void rekursif(int arr[], int x)
{
    if ( x == 1 )
    return;

    for (i = 0; i < x - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
        rekursif( arr, x - 1);
}

int main()
{
    printf("Masukkkan baris angka : ");
    scanf("%d", &n);

    int arr[n];
        for (i = 0; i < n; i++)
        {
            printf("Masukkan angka ke %d : ", i + 1);
            scanf("%d", &arr[i]);
        }
        rekursif(arr, n);
    
    printf("Angka yang sudah diurutkan : ");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
        return 0;
}