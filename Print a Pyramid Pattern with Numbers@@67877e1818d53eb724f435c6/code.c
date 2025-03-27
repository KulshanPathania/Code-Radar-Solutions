#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= 1+n-i; j++){
            printf(" ");
        }
        for (int k = ; k <= (2*i - i); k++){
            printf(" %d", k);
        }
        printf("\n");
    }
    return 0;
}