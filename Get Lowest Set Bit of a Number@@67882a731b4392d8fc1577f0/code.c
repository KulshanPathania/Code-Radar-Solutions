#include <stdio.h>

int main() {
    int a;
    printf("");
    scanf("%d", &a);
    printf("%d", 1 << (a & -a));
    return 0;
}