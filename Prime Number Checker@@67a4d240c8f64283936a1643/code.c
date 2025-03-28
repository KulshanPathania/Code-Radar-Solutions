int isPrime (int num){
    int isPrime = 0;
    for (int i = 2; i < num; i++){
        if (num%i == 0){
            isPrime = 0;
            break;
        }
    }
    if (isPrime){
        printf("%d", 1);
    }
}