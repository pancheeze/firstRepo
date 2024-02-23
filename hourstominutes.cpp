//number 1. program that convert hours to minutes
#include <stdio.h>
int main(void){
	
float hours, minutes; 
printf("Enter hours:"); 
scanf("%f", &hours);

minutes=hours * 60;
printf("%.2f hours is equal to %.2f minutes", hours, minutes);

return 0;
}


