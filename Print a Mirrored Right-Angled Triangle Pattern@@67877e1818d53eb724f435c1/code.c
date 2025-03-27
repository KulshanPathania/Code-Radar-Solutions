#include <stdio.h>

int main() {
    int n;
    printf("");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        for (int j = 1; j < n-i; j++){
            printf(" ");
        }
        for (int k = n-i ; k >= n; k--){
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}