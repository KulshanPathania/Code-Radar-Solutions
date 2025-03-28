int isPrime (int num){
    for (int i = 2; i < num; i++){
        if (num%i == 0){
            int isPrime = 0;
            break;
        }
    }
    if (isPrime(num)){
        printf("%d", 1);
    }  
    else {
        printf("%d", 0);
    }
}