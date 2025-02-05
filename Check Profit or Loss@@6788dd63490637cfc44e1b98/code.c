#include <stdio.h>

int main() {
    int a, b;
    printf("");
    scanf("%d %d", &a,&b);
    if(a < b)
        printf("Profit");
    else
        printf("Loss");
}