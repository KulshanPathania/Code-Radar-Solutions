#include <stdio.h>

int main() {
    char a, b[100];

    printf("");
    scanf("%s %s", &a,&b);
    printf("You entered: %s", a + "and" + b);
    return 0;
}