#include <stdio.h>

int main() {
    int n;
    printf("");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        for (int j = i; j <= n; j++){
            printf("%d",n-(j+i));
        }
        printf("\n");
    }
    return 0;
}