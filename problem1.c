#include <stdio.h>

int main(){
    int num,reverse,remainder;


    printf("Enter a number: ");
    scanf("%d",&num);
    
    while(num!=0){
        remainder = num%10;
        reverse=reverse*10+remainder;
        num/=10;



    }
    printf("Reversed number = %d ",reverse);
}