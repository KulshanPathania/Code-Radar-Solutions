#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = n-1; i >= 0; i--){
        for (int j = i; j <= i+1; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}