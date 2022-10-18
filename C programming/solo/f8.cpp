#include <stdio.h> 
int main () 
{

float a,b ; 

printf("\n ecrire deux reels a et b");
scanf("%f%f",&a,&b);

	if (a==0 and b==0){
	 
		printf("la solution de lequation est R");
}
	else if (b==0){
	
		printf("x n'as pas de solution");
}
	else 
		printf("la solution de x est %d",-b/a); 

}
