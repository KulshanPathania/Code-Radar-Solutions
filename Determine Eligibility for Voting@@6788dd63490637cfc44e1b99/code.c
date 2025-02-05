#include <stdio.h>

int main() {
    int a;
    printf("");
    scanf("%d", &a);
    if(a >= 18)
        printf("Eligible");
    else
        printf("Not Eligible");
}