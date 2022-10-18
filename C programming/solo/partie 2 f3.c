#include <stdio.h>
char main() { 
char c,a;
	printf(" \n saisir un caractere : ");
		scanf("%c",&c);
 
 	printf("\n The ascii value of the ch variable is : %d", c); 
 
 	if (c>=65 && c<=90)
	 {
		a=c+32;
		printf("\n %c en miniscule est  %c    ",c,a);
	 }
		
		
	else if  (c>=97) {
		a=c-32;
		printf("\n %c en majuscule est %c",c,a);
 
}
	else 
	printf("erreur sil vous plait il faut saisir un char alphabetique !!!!");

}
