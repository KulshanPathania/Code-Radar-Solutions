#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=1; j<=n-i; j=j+1){
            printf(" ");
        }
        for(int j = 1;j<=(2*i - 1);j=j+1){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}