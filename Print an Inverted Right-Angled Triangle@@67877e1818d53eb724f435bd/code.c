# include <stdio.h>

int main(){
    int n;
    printf("");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for (int j = n; i >= 1; j--){
            printf("* ");
        }
    }
    return 0;
}