#include <stdio.h>

void fun(int x){
	char sym;
	sym = '#';
	while (x > 0){
		putchar(sym);
		--x;}}

int main(){
	int a,c,d,e,f,g,h,i,k,l,m,n,p,q,r,s,t,w,y,v,o,u;
	char chr;
	a = c = d = e = f = g = h = i = k = l = m = n = p = q = r = s = t = w = y = v = o = u =0;
	printf("Enter the Amino Acids sequence\n");
	while ((chr = getchar()) != EOF){
		if (chr == 'A'){
			++a;}
		else if (chr == 'C'){
			++c;}
		else if (chr == 'D'){
			++d;}
		else if (chr == 'E'){
			++e;}
		else if (chr == 'F'){
			++f;}
		else if (chr == 'G'){
			++g;}
		else if (chr == 'H'){
			++h;}
		else if (chr == 'I'){
			++i;}
		else if (chr == 'K'){
			++k;}
		else if (chr == 'L'){
			++l;}
		else if (chr == 'M'){
			++m;}
		else if (chr == 'N'){
			++n;}
		else if (chr == 'P'){
			++p;}
		else if (chr == 'R'){
			++r;}
		else if (chr == 'Q'){
			++q;}
		else if (chr == 'S'){
			++s;}
		else if (chr == 'T'){
			++t;}
		else if (chr == 'W'){
			++w;}
		else if (chr == 'Y'){
			++y;}
		else if (chr == 'V'){
			++v;}
		else if (chr == 'O'){
			++o;}
		else if (chr == 'U'){
			++u;}
		else if (chr == '\n'){
			printf("\n");
			printf("---------------------------------------------------------------------------\n");
			printf("\n");
			printf("A | "); fun(a); printf("\n");
			printf("C | "); fun(c); printf("\n");
			printf("D | "); fun(d); printf("\n");
			printf("E | "); fun(e); printf("\n");
			printf("F | "); fun(f); printf("\n");
			printf("G | "); fun(g); printf("\n");
			printf("H | "); fun(h); printf("\n");
			printf("I | "); fun(i); printf("\n");
			printf("K | "); fun(k); printf("\n");
			printf("L | "); fun(l); printf("\n");
			printf("M | "); fun(m); printf("\n");
			printf("N | "); fun(n); printf("\n");
			printf("P | "); fun(p); printf("\n");
			printf("Q | "); fun(q); printf("\n");
			printf("R | "); fun(r); printf("\n");
			printf("S | "); fun(s); printf("\n");
			printf("T | "); fun(t); printf("\n");
			printf("W | "); fun(w); printf("\n");
			printf("Y | "); fun(y); printf("\n");
			printf("V | "); fun(v); printf("\n");
			printf("O | "); fun(o); printf("\n");
			printf("U | "); fun(u); printf("\n");
			printf("\n");
			printf("---------------------------------------------------------------------------\n");
			printf("\n");
			return 0;
		}
	}
}
