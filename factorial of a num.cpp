#include <stdio.h>
int main (){
	int a,i,fact;
	printf("enter the number:");
	scanf("%d,&a");
	
	fact=1;
	for(i=a;i>=1;i--)
	{
	fact=fact*i;
	}
	printf("factorialof the number is %d",fact);
	return 0;
}
