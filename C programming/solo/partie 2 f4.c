//exercice 4 	

#include <stdio.h>
#include<math.h>

int main(){
int n,a,b,c,s,i,r ;

	do
 		{
		printf("\necrire n=");
			scanf("%d",&n);
		}
	while (n<1 || n>9999) ;
	r=n;
	
	for (i=0;i<3;i++) 
		{
			b=n%10;
			n=(n-b)/10;	
			printf("\n s= %d ",b*b*b);
			c=c+(b*b*b);
		}
		printf("\n %d",c);
		
		if (r==c) {
			printf("ce nombre est cubique  ");
				}
			else
		{	
			printf("ce nombre n'est cubique  ");
		} 
}
	
