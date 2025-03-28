#include <stdio.h>

int main (){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++){
        for (int j = 1; j <= i; j++){
            printf("%d x %d = %d\n", n, j, n*j);
        }
        printf("\n");
    }
    return 0;
}