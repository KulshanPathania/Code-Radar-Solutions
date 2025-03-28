#include <stdio.h>

int main(){
    int a = 1;
    int b = 0;
    int n;
    scanf("%d", &n);
    for (int k = 1){
        switch(k){
            case 1:{
                printf("%d", a);
                break;
            }
            case 2:{
                printf("%d", b);
                break;
            }
            case 3:{
                printf("%d", a);
                break;
            }
            case 4:{
                printf("%d", a);
                break;
            }
            case 5:{
                printf("%d", b);
                break;
            }
            case 6:{
                printf("%d", a);
                break;
            }
            case 7:{
                printf("%d", b);
                break;
            }
            case 8:{
                printf("%d", a);
                break;
            }
            case 9:{
                printf("%d", b);
                break;
            }
            case 10:{
                printf("%d", a);
                break;
            }
            case 11:{
                printf("%d", a);
                break;
            }
            case 12:{
                printf("%d", b);
                break;
            }
            case 13:{
                printf("%d", a);
                break;
            }
            case 14:{
                printf("%d", b);
                break;
            }
            case 15:{
                printf("%d", a);
                break;
            }
            case 16:{
                printf("%d", b);
                break;
            }
            case 17:{
                printf("%d", a);
                break;
            }
            case 18:{
                printf("%d", b);
                break;
            }
            case 19:{
                printf("%d", a);
                break;
            }
            case 20:{
                printf("%d", b);
                break;
            }
            case 21:{
                printf("%d", a);
                break;
            }
        }
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            printf("%d", k);
            k++;
        }
        printf("\n");
    }
    return 0;
}