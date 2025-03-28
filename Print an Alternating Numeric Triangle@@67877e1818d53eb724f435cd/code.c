#include <stdio.h>

int main(){

    int n, k = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
                switch(k){
                    case 1:{
                        printf("%d", 1);
                        break;
                    }
                    case 2:{
                        printf("%d", 0);
                        break;
                    }
                    case 3:{
                        printf("%d", 1);
                        break;
                    }
                    case 4:{
                        printf("%d", 0);
                        break;
                    }
                    case 5:{
                        printf("%d", 1);
                        break;
                    }
                    case 6:{
                        printf("%d", 0);
                        break;
                    }
                    case 7:{
                        printf("%d", 1);
                        break;
                    }
                    case 8:{
                        printf("%d", 0);
                        break;
                    }
                    case 9:{
                        printf("%d", 1);
                        break;
                    }
                    case 10:{
                        printf("%d", 0);
                        break;
                    }
                    case 11:{
                        printf("%d", 1);
                        break;
                    }
                    case 12:{
                        printf("%d", 0);
                        break;
                    }
                    case 13:{
                        printf("%d", 1);
                        break;
                    }
                    case 14:{
                        printf("%d", 0);
                        break;
                    }
                    case 15:{
                        printf("%d", 1);
                        break;
                    }
                    case 16:{
                        printf("%d", 0);
                        break;
                    }
                    case 17:{
                        printf("%d", 1);
                        break;
                    }
                    case 18:{
                        printf("%d", 0);
                        break;
                    }
                    case 19:{
                        printf("%d", 1);
                        break;
                    }
                    case 20:{
                        printf("%d", 0);
                        break;
                    }
                printf("%d", k);
                k++;
                }
            }
            printf("\n");
        }
        return 0;
}