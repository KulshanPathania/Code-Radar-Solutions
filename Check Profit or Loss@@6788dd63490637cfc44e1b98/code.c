#include <stdio.h>

int main() {
    int a, b;
    printf("");
    scanf("%d %d", &a,&b);
    if(a < b)
        printf("Profit");
    else if(a == b)
        printf("No Profit No Loss");
    else
        printf("Loss");
}