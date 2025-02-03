#include <stdio.h>

int main() {
    int a;
    printf("");
    scanf("%d", &a);
    if(a%5 ==0 && a%11 == 0)
        printf("Divisisble");
    else
        printf("Not Divisible");
}