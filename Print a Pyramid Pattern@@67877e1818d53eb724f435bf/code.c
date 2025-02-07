#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=i; j<n; j++){
            printf(" ");
        }
        for(int j =n-i;j<=n;j=j+2){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}