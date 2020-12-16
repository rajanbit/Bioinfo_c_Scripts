#include <stdio.h>
int main(){
	int A,T,G,C,n;
	A = 0;
	T = 0;
	G = 0;
	C = 0;
	while ((n = getchar()) != EOF){
		if (n == 'A'){
			++A;
			}
		else if (n == 'T'){
			++T;
			}	
		else if (n == 'G'){
			++G;
			}
		else if (n == 'C'){
			++C;
			}
printf("A;%d\n",A);
printf("T;%d\n",T);
printf("G;%d\n",G);
printf("C;%d\n",C);	
	}
}

