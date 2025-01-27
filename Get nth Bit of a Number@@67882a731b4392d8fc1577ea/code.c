#include <stdio.h>

int main() {
    int a, b;
    printf("");
    scanf("%d %d", &a,&b);
    if (a & (1 << b))
        printf("%d",b);
    else
        printf("%d",b);
}