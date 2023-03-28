#include <stdio.h>

int pangkat(int y, int n){

    if(n > 0 ){
        return y * pangkat(y,n-1);   
    }else{
        return 1;
    }
    }

int main(){
    
    printf("%d", pangkat(4,2));
}