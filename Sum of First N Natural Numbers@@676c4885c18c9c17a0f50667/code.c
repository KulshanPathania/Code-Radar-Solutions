#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        sum = sum + n % 10;
        n = n/10;
        printf("%d ", sum);
    }
    return 0;
}