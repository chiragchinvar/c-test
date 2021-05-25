#include <stdio.h>
long long int add(long long c,long long int d){
    return c+d;
}
int main(){
long long int a,b;
printf("Enter first number : ");
scanf("%lld",a);
printf("Enter second number : ");
scanf("%lld",b);
long long int c=add(a,b);
printf("Sum = ",c);
}