#include<stdio.h>
int main(){
    int num,g,reverse=0;

    printf("Enter any number: ");
    scanf("%d",&num);

    while(num){
         g=num%10;
         reverse=reverse*10+g;
         num=num/10;
    }

    printf("Reversed of number: %d",reverse);
    return 0;
}
