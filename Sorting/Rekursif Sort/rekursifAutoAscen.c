#include <stdio.h>

int rekursif(int x){

    if (x == 0) 

        return 0;
     else 
        rekursif(x - 1); 
        printf("%d", x);
   

    
}

int main()
{   
    int a;
    printf("Masukkan : ");
    scanf("%d", &a);
    rekursif(a);
    return 0;
}