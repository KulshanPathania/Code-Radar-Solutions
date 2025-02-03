#include <stdio.h>

int main() {
    int a;
    printf("");
    scanf("%d", &a);
    if(90 <= a)
        printf("A");
    else if(80 <= a && a < 90)
        printf("B");
    else if(70 <= a && a < 80)
        printf("C");
    else if(60 <= a && a < 70)
        printf("D");
    else if(a < 60)
        printf("E");
}