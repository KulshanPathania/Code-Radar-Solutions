int isPrime (int num){
    for (int i = 2; i < num; i++){
        if (num%i == 0){
            return 0;
        }
    }
    return 2;
}