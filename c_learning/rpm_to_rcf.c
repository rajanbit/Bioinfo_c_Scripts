/* Convert RPM (Revolutions Per Minute) to RCF (Relative Centrifugal Force) */

#include<stdio.h>
#include<math.h>

main(){

	float rcf, rpm, r;
	
	printf("Enter RPM(Revolutions Per Minute) and r(radius in cm): ");
	scanf("%f %f", &rpm, &r);
	
	rcf = 11.18*r*(rpm/1000.0)*(rpm/1000.0);

	printf("\nRCF (Relative Centrifugal Force) %.0f\n", rcf);

}

/* Usage:
	$ gcc rpm_to_rcf.c -o rpm_to_rcf -lm
	$ rpm_to_rcf
*/
