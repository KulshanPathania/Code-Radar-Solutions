#include <stdio.h>

int main() {
    int a;
    printf("");
    scanf("%d", &a);
    if (a != a/2)
        printf("Set");
    if (a == a/2)
        printf("Not Set");
}