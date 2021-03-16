/* Convert RCF (Relative Centrifugal Force) to RPM (Revolutions Per Minute) */

#include<stdio.h>
#include<math.h>

main(){

	float rcf, r, rpm;
	
	printf("Enter the RCF(Relative Centrifugal Force in g) value and r(radius in cm): ");
	scanf("%f %f", &rcf,&r);
	
	rpm = sqrt(rcf/(11.18*r))*1000.0;
	
	printf("RPM (Revolutions Per Minute): %.0f\n",rpm);
	
}

/* Usage:
	$ gcc rcf_to_rpm.c -o rcf_to_rpm -lm
	$ ./rcf_to_rpm
*/
