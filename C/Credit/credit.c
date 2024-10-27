#include <stdio.h>
#include <string.h>
#include <math.h>
int credsumlast(long int creditnum, int *Length);
void cardtype(long int creditnum,int length, char * str);
int main() {
    long int creditnum;
    int Length=0;
    printf("Enter Credit Card number:");
    if(scanf("%li", &creditnum)!=1) {
    printf("\n Invalid input. Please enter a number.\n");
    while (getchar() != '\n');
    return 1;
    }
    if(credsumlast(creditnum, &Length)==0){
    char card[50];
    cardtype(creditnum, Length, card);
    printf("Card Type: %s\n",card);
    return 0;
    }
    else{
        printf("\n Invalid Credit Card Number\n");
        return 1;
    }
}
void cardtype(long int creditnum,int length, char * str){
    int firstdigit = (int)(creditnum / (long int)pow(10, length - 1));
    int firsttwoDigits = (int) (creditnum / (long int)pow(10, length - 2));
    if(length==15 && (firsttwoDigits==34 || firsttwoDigits==37)){
    strcpy(str," American Express");
    }
    else if(length==16 && (firsttwoDigits==51 || firsttwoDigits==52 || firsttwoDigits==53 || firsttwoDigits==54 || firsttwoDigits==55)){
    strcpy(str," Master Card");
    }
    else if((length==13 || length ==16) && firstdigit==4){
    strcpy(str," Visa");
    }
    else{
        strcpy(str,"INVALID");
    }
}
int credsumlast(long int creditnum, int *length){
    int sum1=0,sum2=0,sum=0,i=0,digit;
    for(i=0; creditnum!=0; i++){
    digit = creditnum % 10;
    creditnum= creditnum/10;
    if(i % 2 ==0){
        sum+= digit;
    }else {
        digit*=2;
        while(digit!=0){
            sum+= (digit%10);
            digit= digit/10;
        }
    }
    (*length)++;
    }
    return (sum%10);
}
