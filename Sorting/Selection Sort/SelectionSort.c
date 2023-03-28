#include <stdio.h>

int main () 
{
    int angka[] = {5, 3, 1, 7, 9, 8, 2, 4, 6};
    int panjang = sizeof(angka) / sizeof(angka[0]);
    int min , tmp;
    for (int i = 0; i < panjang; i++){
        min = i;
        for (int j = i; j < panjang; j++){
            if(angka[j] < angka[min]){
                min = j;
            }
        }
        tmp = angka[i];
        angka[i] = angka[min];
        angka[min] = tmp;
    }
    for (int i = 0; i < panjang; i++){
        printf("[%d]", angka[i]);
    }
}