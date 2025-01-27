#include <stdio.h>

int main() {
    int a;
    printf("");
    scanf("%d", &a);
    if (a != a/2)
        printf("Set");
    else
        printf("Not Set");
}