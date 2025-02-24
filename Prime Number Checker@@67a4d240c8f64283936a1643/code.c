void isPrime (int num){
    int a = 1;
    for (int i = 2; i < num; i++){
        if (a%i == 0){
            a = 0;
            break;
        }
    }
    if (a){
        printf("%d", 1);
    }
    else{
        printf("%d", 0);
    }
    
}