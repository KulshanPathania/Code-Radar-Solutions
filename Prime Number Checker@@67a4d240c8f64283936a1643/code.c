int isPrime (int num){
    int isPrime = 1;
    for (int i = 2; i < num; i++){
        if (num%i == 0){
            isPrime = 0;
            break;
        }
    }
    if (isPrime){
        printf("prime");
    }
    else {
        printf("%d", 0);
    }
    return 0;
}