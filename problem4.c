#include <stdio.h>


int main(){
int end=100000000;
int prime,m,n,sum,count;
for(int i=0;i<end;i++){
    for(int j=2;j<=i/2;j++){
        if(i%j==1){
            prime=1;
            break;
        }
    }
    if(!prime){
        m=i%10;    
        sum=sum+m;    
        i=i/10; 
        if(sum==14)count++;
    }
}

}