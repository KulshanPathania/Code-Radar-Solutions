#include <stdio.h>

int main() {
    int a;
    printf("");
    scanf("%d", &a);
    printf("%d", a & (a - 2));
    return 0;
}