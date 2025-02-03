#include <stdio.h>

int main() {
    int a, b, c;
    printf("");
    scanf("%d %d %d", &a,&b,&c );
    if((a + b) > c)
        printf("Valid");
    else
        printf("Invalid");
}