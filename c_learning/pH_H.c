/* Calculate pH from [H] */

#include<stdio.h>
#include<math.h>

main(){
	float H, pH;
	printf("Enter [H+] value: ");
	scanf("%f",&H);
	pH = -log10(H);
	printf("pH: %.2f\n", pH);
}

/* Usage: 
	$ gcc pH_H.c -o pH -lm
*/
