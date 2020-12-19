#include <stdio.h>

void fun(int x){
	char sym;
	sym = '#';
	while (x > 0){
		putchar(sym);
		--x;}}

int main(){
	int a, t, g, c;
	char chr;
	a = t = g = c = 0;
	while ((chr = getchar()) != EOF){
		if (chr == 'A'){
			++a;}
		else if (chr == 'T'){
			++t;}
		else if (chr == 'G'){
			++g;}
		else if (chr == 'C'){
			++c;}
		else if (chr == '\n'){
			printf("\n");
			printf("---------------------------------------------------------------------------\n");
			printf("\n");
			fun(a); printf(" [A: %d]", a); printf("\n");
			fun(t); printf(" [T: %d]", t); printf("\n");
			fun(g); printf(" [G: %d]", g); printf("\n");
			fun(c); printf(" [C: %d]", c); printf("\n");
			printf("\n");
			printf("---------------------------------------------------------------------------\n");
			printf("\n");
			return 0;
		}
	}
}
