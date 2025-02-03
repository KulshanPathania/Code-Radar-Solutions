#include <stdio.h>

int main() {
    int a;
    printf("");
    scanf("%s", &a);
    if (a%4 == 0);
        if((a%400 == 0) || (a%100 != 0))
            printf("Leap Year");
        else:
            printf("Not a Leap Year");
}