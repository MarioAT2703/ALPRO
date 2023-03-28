#include <stdio.h>

void main(){
    char input = 'y';
    while (input == 'y'){
        printf("Apakah anda ingi mengulang prises? (y/t) :");
        scanf(" %c", &input);
    }
        printf("\n\nPerulangan telah berhrnti! Terimakasih!");
}