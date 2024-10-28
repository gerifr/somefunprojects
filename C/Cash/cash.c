//just a simple implementation of greed algorithm in C
#include <stdio.h>

int main(){
    int amount, noofcoins=0,remainder,i,addition;
    do{
    printf("Change Owed: ");
    if(scanf("%d", &amount)!=1){
        printf("\nInvalid input. Please enter a number.\n");
        while (getchar() != '\n');
        amount = -1;
    }
    }while(amount <= 0);
    // For the greed part
    int coins[4] = {25, 10, 5, 1};    
    for(i=0; i<4; i++){
        addition= amount/coins[i];
        noofcoins+=addition;
        amount=amount%coins[i];
    }
    printf("Number of coins needed: %d\n", noofcoins);
    return 0;
}