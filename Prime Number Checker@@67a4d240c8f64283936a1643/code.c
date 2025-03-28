int isPrime (int num){
    int isPrime = 1;
    for (int i = 2; i < num; i++){
        if (num%i == 0){
            printf("%d", 0);
        }
    }
    if (isPrime){
        printf("%d", 1);
    }
}