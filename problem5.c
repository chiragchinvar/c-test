#include <stdio.h>

int main()
{
int temp,n,k;
char buffer[50],str[50];
printf("Enter an integer\n");
scanf("%d",n);
    do{
		temp = n % 10;
		buffer[k++] = temp + '0';
		n = n / 10;
	} while(n != 0);


int length=k;
int null_string_pos=k;
for(int i = length - 1; i >= 0; i--){
		str[k++] = buffer[i];
	}
	
	str[null_string_pos] = '\0';
    printf("Number=%s",str);
}
