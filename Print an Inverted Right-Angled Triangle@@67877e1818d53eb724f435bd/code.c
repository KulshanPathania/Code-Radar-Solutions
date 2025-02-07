#include <stdio.h>

int main() {
    int i, j, n;
    printf("");
    scanf("%d", &n);
    for (i = n; i >= 1; i--){
        for (j = 1; j <= n - 1; j++){
            printf(" ");
        }

        for (j = 1; j <= (2*i - 1); j){
            printf("*");
        }
        printf("");
    }
    return 0;
}