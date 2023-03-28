#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nProgram Matrix\n");
    int A[3] [5], B[2] [5];
    printf("Input Elemen Matriks A\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<5; j++){
            printf("Input elemen [%d][%d] =",i ,j);
            scanf("%d", &A[i][j]);
        }
        break;
    }
    printf("\nInput Elemen Matriks B\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<5; j++){
            printf("Input elemen [%d][%d] =",i ,j);
            scanf("%d", &B[i][j]);
        }
        break;
    }
    printf("\nHasil Input Matriks A\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<5; j++){
            printf("\t%d", A[i][j]);
        }
        break;
    }
    printf("\nHasil Input Matriks B\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<5; j++){
            printf("\t%d", B[i][j]);
        }
        break;
    }
    printf("\nHasil Input Matriks A+B\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<5; j++){
            printf("\t%d", A[i][j]+ B[i][j]);
        }
        break;
    }
}