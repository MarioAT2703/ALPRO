#include <stdio.h>

void InsertionSort(int angka[],int panjang){
    for(int a = 1; a < panjang; a++){
        if(angka[a] < angka[a-1]){
            int b = a;
            while(b > 0 && angka[b] < angka[b-1]){
                int tmp = angka[b];
                angka[b] = angka[b-1];
                angka[b-1] = tmp;
                b--;
            }
        }
    }
}

int main(){
    int angka[] = {1, 9, 4, 5, 6, 7, 2, 3, 8, 1, 9, 4, 5, 6, 7, 2, 3, 8};
    int panjang = sizeof(angka)/ sizeof(angka[0]);
    InsertionSort(angka, panjang);
        printf("baris ke 1 : ");
    for(int a = 0; a < panjang; a++){
        printf("%d", angka[a]);
    }
    
}