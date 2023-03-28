#include <stdio.h>

void quicksort(int x, int y, int z[])
{

    int start, finish, pivot, temp;
    start = x;
    finish = y;
    pivot = finish;

    if (start <= finish)
    {
        while (start < finish)
        {
            while (z[start] < z[pivot]) // --> Mencari nilai yang lebih besar dari pivot
            {
                start++;
            }
            while (z[finish] > z[pivot]) // --> Mencari nilai yang lebih kecil dari pivot
            {
                finish--;
            }
            if (start < finish) // --> Memastikan bahwa pencarian nilai lebih besar dan lebih kecil belum saling bertemu
            {
                // Menukar nilai yang lebih besar dengan pivot dengan nilai yang lebih kecil dari pivot
                temp = z[finish];
                z[finish] = z[start];
                z[start] = temp;
            }
        
        }
        // Menukar nilai pivot dengan nilai pencarian nilai lebih kecil
        temp = z[finish]; 
        z[finish] = z[pivot];
        z[pivot] = temp;

        quicksort(x, finish - 1, z);
        quicksort(finish + 1, y, z);
    } else
    {
        return;
    }
}

void tampil(int x[], int y)
{
    for (int a = 0; a < y; a++)
{
printf("%d ", x[a]);
}
puts(" ");
}

int main()
{
int baris;
printf("Berapa baris yang di inginkan : ");
scanf("%d", &baris);
int arr[baris];
for (int i = 0; i < baris; i++){
printf("Masukkan angka ke-%d : ", i+1);
scanf("%d", &arr[i]);
}

int jumlah = sizeof(arr) / sizeof(arr[0]);

printf("ARRAY SEBELUM SORTING : ");
tampil(arr, jumlah);

quicksort(0, jumlah - 1, arr);

printf("ARRAY SESUDAH SORTING : ");
tampil(arr, jumlah);

return 0;
}