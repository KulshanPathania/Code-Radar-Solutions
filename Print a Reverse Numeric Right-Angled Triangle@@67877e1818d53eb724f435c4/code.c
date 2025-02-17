#include <stdio.h>

int main() {
    int i, j, n;
    printf("");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        for (j = i; j <= n; j++){
            printf("%d", (i+j)+n-1);
        }
        printf("\n");
    }
    return 0;
}