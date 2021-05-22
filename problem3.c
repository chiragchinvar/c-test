
#include <stdio.h>

int main(){
    int start =10000000,end=99999999;
    int temp,largest;
    int prime=0;

    for(int i=end;i>=start;i--){
        for(int j=2;j<=i/2;j++){
            if((i%j)==0){
            prime=1;
            break;
                
            }
        }
        if(prime==0){
            printf("Largest prime number = %d",i);
        break;
        }
        prime=0;
    }

}
