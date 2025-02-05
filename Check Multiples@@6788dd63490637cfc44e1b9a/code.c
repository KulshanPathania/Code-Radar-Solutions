#include <stdio.h>

int main() {
    int a, b;
    printf("");
    scanf("%d %d", &a,&b);
    if(a%b == 0)
        printf("Yes");
    else
        printf("No");
}