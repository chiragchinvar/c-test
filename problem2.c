#include <stdio.h>

int main(){

    int start=100,end=999,prime=0,total_prime;
    for(int j =start;j<=end ;j=j+1){
        prime=0;
        for(int i=2;i<=j/2;i++){
            if((j%i)==0){
            prime=1;
            break;
            }
        }
        if(!prime)total_prime+=1;
    }
printf("Total number of prime numbers = %d ",total_prime);


}