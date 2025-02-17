#include <stdio.h>

int main() {
    int a;
    printf("");
    scanf("%d", &a);
    int isprime = 1;
    for(int i = 2; i < a; i++){
        if(a%i == 0){
            int isprime = 0;
            break;
        }
    }

    if(isprime)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}