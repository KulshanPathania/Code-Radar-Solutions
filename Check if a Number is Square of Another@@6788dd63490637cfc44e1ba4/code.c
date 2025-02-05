#include <stdio.h>

int main() {
    int a, b;
    printf("");
    scanf("%d %d", &a,&b);
    if(a*a == b)
        printf("Yes");
    else
        printf("No");
}