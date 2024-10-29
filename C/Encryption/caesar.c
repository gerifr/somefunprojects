#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int i,p;
    char plaintext[100], ciphertext[100];
    if (argc == 2){

        int key = atoi(argv[1]);
        printf("Plain text: ");
        fgets(plaintext, sizeof(plaintext),stdin);
        for (i = 0; plaintext[i] != '\0'; i++){
        if(isalpha(plaintext[i])){
            if(isupper(plaintext[i])){
                p = ((plaintext[i] - 'A' + key) % 26) + 'A';
                ciphertext[i]=p;
            }
            else{
                p = ((plaintext[i] - 'a' + key) % 26) + 'a';
                ciphertext[i]=p;
            }

        }else{
            ciphertext[i]=plaintext[i];
        }
        }
        printf("Cipher text: %s", ciphertext);
        return 0;


    }else{
        printf("Usage: ./caesar key\n");
        return 1;
    }
}
