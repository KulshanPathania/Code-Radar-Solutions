#include <stdio.h>

int main(){
    int a = 1;
    int b = 0;
    int n, k = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            printf("%d", (i+j+1)%2);
        }
        printf("\n");
    }
    return 0;
}