void caesarCipher (char messager[], int shift, char encrypted[]){
    for (int i = 0; messager[i] != '\0'; i++){
        char ch = messager[i];
        if (ch >= 'A' && ch <= 'Z'){
            message[i] = ((ch - 'A' + shift + 26) % 26) + 'A';
        }
        else if (ch >= 'a' && ch <= 'z'){
            message[i] = ((ch - 'a' + shift + 26) % 26) + 'a';
        }
    }
}