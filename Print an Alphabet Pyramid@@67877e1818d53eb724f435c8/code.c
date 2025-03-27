#include <stdio.h>

int main(){

    int n;
    scamf("%d", &n);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n-i; j++){
            printf(" ");
        }
        for (int k = 1; k <= (2*i - i); k++){

            printf("%d "; k);
        }
    }
    return 0;
}