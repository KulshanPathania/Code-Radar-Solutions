#include <stdio.h>

int main() {
    int i, j, n;
    printf("");
    scanf("%d", &n);
    for (i = i; i >= n; i++){
        for (j = i; j <= n - 1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}