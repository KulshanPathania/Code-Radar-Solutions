int isPrime (int num){
    for (int i = 2; i < num; i++){
        if (num%i == 0){
            printf("%d", 0);
        }
    }
   printf("%d", 1);
    
}