#include <stdio.h>
int main()
{
	int age;
	printf("enter age:");
	scanf("%i", &age);
	
	if(age<=12){
		printf("C\n");
	}	
	else if(age>=13 && age<=19){
		printf("T\n");
    }
	else if(age>=20){
		printf("A\n");
	}
	if(age>-0){
		printf("you've entered an invalid input'");
	}
	


	return 0;	
}
