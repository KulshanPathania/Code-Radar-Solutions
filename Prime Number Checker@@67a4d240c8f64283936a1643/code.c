void isPrime (int num){
    int a = 1;
    for (int i = 2; i < num; i++){
        if (num%i == 0){
            printf("%d", 0);
            break;
        }
    }
   printf("%d", 1);
    
}