// Substititution encryption algorithm in C
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[]) {   
    int i, j;
     if(argc== 2) {
        if(strlen(argv[1])!= 26) {
            printf("Key must be 26 characters long.\n");
            return 1;
        }
        for(i = 0; i < 26; i++) {
        if(!isalpha(argv[1][i])) {
                printf("Key must contain only alphabetic characters.\n");
                return 1;
            }
        }
        //encryption part
        char plaintext[300], ciphertext[300];
        printf("Enter plaintext: ");
        fgets(plaintext, sizeof(plaintext), stdin);
        for(i=0; i<strlen(plaintext);i++){
            if(isupper(plaintext[i])){
            ciphertext[i] = toupper(argv[1][plaintext[i] - 'A']);
            }
            else if(islower(plaintext[i])){
                        ciphertext[i] = tolower(argv[1][plaintext[i] - 'a']);
                        }
                        else{
                            ciphertext[i] = plaintext[i];
                        }
        }
        printf("Cipher text: %s", ciphertext);
        return 0;

        
     }
     else{
        printf("Usage: ./substitution key\n");
     }
}