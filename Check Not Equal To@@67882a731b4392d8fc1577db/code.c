#include <stdio.h>

int main() {
    int a, b;
    printf("");
    scanf("%d %d", &a,&b);
    if(a != b)
        printf("True");
    else
        printf("False");
    return 0;
}