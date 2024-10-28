#include <stdio.h>
#include <ctype.h>
#include <string.h>

int Points[26]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
int points(char x[50]);
void main(){
    int p1score,p2score;
    char p1[50],p2[50];
    printf("Player 1: ");
    scanf("%s", p1);
    printf("\n Player 2: ");
    scanf("%s", p2);
    p1score = points(p1);
    p2score = points(p2);

    if (p1score > p2score)
    {
        printf("Player 1 wins!\n");
    }
    else if (p1score < p2score)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}
int points(char x[50]){
    int i,score=0;
    for(i=0;i<strlen(x);i++){
    if(isalpha(x[i]))
    {
        x[i]=tolower(x[i]);
        score+=Points[x[i]-'a'];
    }else{
        score+=1;
    }
    }
    return score;
}