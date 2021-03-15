/* Calculate Body Mass Index (BMI) */

#include<stdio.h>

main(){

	float h, w, bmi;
	
	printf("Enter Weight(Kg) and Height(Metres): ");
	scanf("%f %f", &w, &h);
	
	bmi = w/(h*h);
	
	printf("\nThe Body Mass Index (BMI) = %.3f\n",bmi);
}

/* Usage:
	$ gcc bmi.c -o bmi
	$ ./bmi
 */
