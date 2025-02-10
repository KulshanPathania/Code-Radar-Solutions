#include <stdio.h>

int main() {
    int n;
    printf("");
    scanf("%d", &n);
    for (int i = n; i <= n; i++){
        for (int j = n - i; j < n-i+1; j++){
            printf("* ");}
        
    }
        printf("\n");
    return 0;
}