#include <stdio.h>

int main() {
    int a;
    printf("");
    scanf("%d", &a);
    if ((a & 1) == 1)
        printf("Set");
    if((a & 1) == 0)
        printf("Not Set");
}