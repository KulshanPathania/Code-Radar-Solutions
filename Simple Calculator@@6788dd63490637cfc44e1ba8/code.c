#include <stdio.h>
#include <ctype.h>

int main() {
    int a, b;
    char c;
    printf("");
    scanf("%d %d %s", &a,&b,&c);
    if(c == +)
        printf("%d", a + b);
    else if(c == -)
        printf("%d", a - b);
    else if(c == * )
        printf("%d", a * b);
    else if(c == /)
        printf("%d", a / b);
    else
        printf("error");
}