#include <stdio.h>

int main() {
    int units;
    float bill;

    // Input electricity units
    printf("Enter electricity units consumed: ");
    scanf("%d", &units);
	if(units<=200){
		bill=units*0;
	}
   else if(units>=200){
   	bill=units*7.5;
   }
    // Display bill
    printf("Electricity Bill = Rs. %.2f", bill);

    return 0;
}
