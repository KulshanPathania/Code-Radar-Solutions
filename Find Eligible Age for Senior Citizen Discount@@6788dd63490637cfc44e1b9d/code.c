#include <stdio.h>

int main() {
    int a;
    printf("");
    scanf("%d", &a);
    if(a >= 60)
        printf("Eligible");
    else
        printf("Not Eligible");
}