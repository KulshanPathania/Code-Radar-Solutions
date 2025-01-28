#include <stdio.h>

int main() {
    int a;
    printf("");
    scanf("%d", &a);
    printf("%d", a & (1 << 31));
    return 0;
}