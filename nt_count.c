#include <stdio.h>

int main(){
	int A, T, G, C;
	char ch;
	A = T = G = C = 0;

	while ((ch = getchar()) != EOF ){
		if (ch == 'A'){
			++A;}
			
		else if (ch == 'T'){
			++T;}

		else if (ch == 'G'){
			++G;}

		else if (ch == 'C'){
			++C;}

		else if (ch == '\n'){
			printf("A: %d | T: %d | G: %d | C: %d\n", A, T, G, C);}
	}
}

