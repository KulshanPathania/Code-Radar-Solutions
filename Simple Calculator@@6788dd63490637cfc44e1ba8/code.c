#include <stdio.h>
#include <ctype.h>

int main() {
    int a, b;
    char c;
    printf("");
    scanf("%d %d %c", &a,&b,&c);
    if(c == '+')
        printf("%d\n", a + b);
    else if(c == '-')
        printf("%d\n", a - b);
    else if(c == '*')
        printf("%d\n", a * b);
    else if(c == '/')
        if(b != 0)
            printf("%.0f\n", (float)a / b);
        else
            printf("error")
    else
        printf("error");
}