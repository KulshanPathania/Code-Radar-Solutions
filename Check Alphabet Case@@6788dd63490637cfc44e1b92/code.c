#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("");
    scanf("%c", &ch);  
    if(isupper(ch))
        printf("Uppercase");
    else
        printf("Lowercase");
}