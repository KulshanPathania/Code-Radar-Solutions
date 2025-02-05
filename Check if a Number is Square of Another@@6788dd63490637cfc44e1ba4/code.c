#include <stdio.h>

int main() {
    int a, b;
    printf("");
    scanf("%d %d", &a,&b);
    if(b*b == a)
        printf("Yes");
    else
        printf("No");
}