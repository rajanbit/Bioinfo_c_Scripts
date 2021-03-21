/* If/Else Statement Use */

#include<stdio.h>\

main(){

	float A, T, G, C, len, AT_per, GC_per;
	
	printf("Enter No. of Adenine[A], Thymine[T], Guanine[G], Cytosine[C]: ");
	scanf("%f %f %f %f", &A, &T, &G, &C);
	
	len = A + T + G + C;
	AT_per = (A+T)/len*100;
	GC_per = (G+C)/len*100;

	printf("AT Percent: %f\n", AT_per);
	printf("GC Percent: %f\n", GC_per);

	if (AT_per > 60.00){
		printf("\nThe sequence is [AT] rich.\n");
	}

	else if (GC_per > 60.00){
		printf("\nThe sequence is [GC] rich.\n");
	}
	else {
		printf("\nThe nucleobases are evenly distributed.\n");
	}
}

/* Usage:
	$ gcc if_else.c -o if_else
	$ ./if_else
*/
