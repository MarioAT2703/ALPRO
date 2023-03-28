#include <stdio.h>
#include <string.h>

int main() 
{

    char ch;
    scanf("%c", &ch);
    printf("%c\n", ch);
    
    char s[50];
    scanf(" %[^\n]%*c", s);
    printf("%s\n", s);
    
    char sen[50];
    scanf(" %[^\n]%*c", sen);
    printf("%s", sen);
       
    return 0;
}
