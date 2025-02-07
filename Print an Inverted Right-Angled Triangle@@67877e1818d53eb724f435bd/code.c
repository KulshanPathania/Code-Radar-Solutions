#include <stdio.h>

int main() {
    int i, j, n;
    printf("");
    scanf("%d", &n);
    for (int i = 1; i >= n; i++){
        for (int j = 1; j <= (2*i-1); j++){
            printf("*");
        printf("");
        }
    }
    return 0;
}