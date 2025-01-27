#include <stdio.h>

int main() {
    int a;
    printf("");
    scanf("%s", &a);
    if ((a >> (sizeof(a) * 8 - 1)) == 1)
        printf("Set");
    if ((a >> (sizeof(a) * 8 - 1)) == 0)
        printf("Not Set");
}