//number 2. programs that tell the age if Child, Teen, and Adult.
#include <stdio.h>

int main()
{
	int age;
    printf("Enter age:");
    scanf("%i", &age);

    if(age>0){
    if(age<=12){
        printf("C\n");
    }
    }
	else if(age>=13 && age<=19) {
         printf ("T\n");
    }
      else if(age>=20){
      	
           printf ("A\n");
    }
    
    else{
        printf("you've entered invalid character'");
     }

return 0;
}


