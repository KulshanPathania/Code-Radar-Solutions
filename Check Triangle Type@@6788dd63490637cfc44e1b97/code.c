#include <stdio.h>

int main() {
    int a, b, c;
    printf("");
    scanf("%d %d %d", &a,&b,&c);
    if((a == b) && (b == c) && (c == a))    
        printf("Equilateral");
    else if(((a == b) && (a != c) && (b != c)) || ((b == c) && (b != a) && (c != a)) || ((c == a) && (c != b) && (a != b)))
        printf("Isosceles");
    else
        printf("Scalene");
}