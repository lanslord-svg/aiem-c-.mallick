#include<stdio.h>

int main(){
	int x=10;
	int *ptr;
	
	ptr=&x;
	
	printf("value=%d\n",*ptr);

	
	return 0;
}
