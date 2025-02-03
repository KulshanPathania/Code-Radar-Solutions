#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("");
    scanf("%c", &ch);
    if(ch == a || ch == e || ch == i|| ch == o || ch == u)
        printf("Vowel");
    else if(isdigit(ch))
        printf("Digit");
    else if(isalnum(ch))
        printf("Special Character");
    else
        printf("Consonant");
}