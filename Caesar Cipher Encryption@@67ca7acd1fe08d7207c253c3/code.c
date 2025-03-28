# include <stdio.h>
# include <string.h>
# include <ctype.h>

void caesarCipher (char message[], int shift, char *encrypted){

    int shiftDirection = (strcmp(encrypted, "e") == 0) ? shift : -shift;

    for (int i = 0; message[i] != '\0'; i++){
        char ch = message[i];

        if (ch >= 'A' && ch <= 'Z'){
            message[i] = ((ch - 'A' + shiftDirection + 26) % 26) + 'A';
        }
        else if (ch >= 'a' && ch <= 'z'){
            message[i] = ((ch - 'a' + shiftDirection + 26) % 26) + 'a';
        }
    }
}