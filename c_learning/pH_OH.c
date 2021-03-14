/* Calculate pH from [OH] */

#include<stdio.h>
#include<math.h>

main(){

	float OH, pOH, pH;

	printf("Enter the OH- concentration: ");
	scanf("%f", &OH);

	pOH = -log10(OH);
	pH = 14.0 - pOH;

	printf("\npH: %.2f\n",pH);	
}

/* Usage
	$ gcc  pH_OH.c -o pH -lm
	$ ./pH
*/
