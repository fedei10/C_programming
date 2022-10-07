#include <stdio.h> 
void main () {
int a,b; 
printf(" donner deux entier a et b : ");
scanf("%d %d",&a,&b);
a=a-b;
b=a+b;
a=b-a;
printf(" permutation : :  a:%d ,  b:%d  \n",a,b);
}
