#include <stdio.h>

int main() {
    char a;
    int b;
    char c;
    printf("");
    scanf("%c %d %c", &a,&b,&c);
    printf("Name: %c", a);
    printf("Age: %d", b);
    printf("Hobby: %c", c);
    return 0;
}