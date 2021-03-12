/* scanf() and printf() function use */
#include <stdio.h>
main(){
	int seq_len;
	float mol_wt;
	char prot_name[20];
	
	printf("Enter the protein name and its molecular weight(in daltons): ");
	scanf("%s %f",&prot_name, &mol_wt);
	printf("Enter amino acid length: ");
	scanf("%d",&seq_len);
	printf("\nProtein details:-\n");
	printf("Protein: %s \n", prot_name);
	printf("Amino acid length: %d\n", seq_len);
	printf("Molecular weight: %.2fDa\n", mol_wt);
}
