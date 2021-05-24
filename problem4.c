/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main(){
int end=100000000;
int prime,m,n,sum,count;
for(int i=0;i<end;i++){
    for(int j=2;j<=i/2;j++){
        if(i%j==0){
            prime=1;
            break;
        }
    }
    if(!prime){
        sum=0;
        m=0;
        while(i>0){
            int temp=i;
        m=temp%10;    
        sum=sum+m;    
        temp=temp/10; 
        }
        if(sum==14)count++;
    }
}
printf("Count = %d",count);
}



