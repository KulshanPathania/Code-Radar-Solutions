int isprime(int num){
    if (num < 2){
        return 0;
    }
    for (int i = 2; i*i <= num; i++){
        if (num % i == 0){
            return 0;
        }
    }
    return 1;
}

void printPrimesInRange(int a, int b){
    for (int i = a; i <= b; i++){
        if(isprime(i)){
            printf("%d ", i);
        }
        else if(a == b){
            printf("No prime numbers");
        }
    }
    if( a > 199 && b > 200){
        printf("No prime numbers");
    }
    else if( a < 1 && b < 2){
            printf("No prime numbers");
        }
}