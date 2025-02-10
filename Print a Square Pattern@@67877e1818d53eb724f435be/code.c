#include <stdio.h>

int main() {
    int n;
    printf("");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for (int j = n - i ; j < n - i + 1; j++){
            printf("* ");}
            for (int k = 0; k <= n; k++){
                printf("");}
    }
        printf("\n");
    return 0;
}