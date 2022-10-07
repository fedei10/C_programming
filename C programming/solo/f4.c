#include <stdio.h> 
#define pi 3.14
// on peut declarer pi comme ca = const float pi=3.14 ; 
void main () {
float r,s; 
printf(" donner le rayon") ; 
scanf("%f",&r);
s=r*r*pi;
printf("la surface est egale a %2f\n",s);
}


