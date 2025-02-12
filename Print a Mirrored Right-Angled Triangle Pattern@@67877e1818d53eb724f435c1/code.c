#include <stdio.h>

int main() {
    int n;
    printf("");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        for (int j = n - i; j < n - i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}