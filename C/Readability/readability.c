#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main(){
    int Index;
    float Letter = 0, Sentences = 0, Words = 1;
    char txt[1000];

    printf("Enter text: ");
    fgets(txt, sizeof(txt), stdin);

    for(int i = 0; txt[i] != '\0'; i++) {
        if (isalpha(txt[i])) {
            Letter++;
        } else if (txt[i] == '.' || txt[i] == '!' || txt[i] == '?') {
            Sentences++;
        } else if (txt[i] == ' ') {
            Words++;
        }
    }

    float L = 100 * Letter / Words;
    float S = 100 * Sentences / Words;
    Index = (int)round(0.0588 * L - 0.296 * S - 15.8);

    if (Index < 1) {
        printf("Before Grade 1\n");
    } else if (Index >= 16) {
        printf("Grade 16+\n");
    } else {
        printf("Grade %d\n", Index);
    }

    return 0;
}
