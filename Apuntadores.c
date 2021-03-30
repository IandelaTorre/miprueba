#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

void main(){
int a=1,b=2,*p, **q;
p = &a;
printf("%i\t",*p);
printf("%i\t", p);
b = *p;
printf("%i\t",b);
*p = 0;
b = *p;
q = &p;
printf("%i\t", b);
printf("%i\t", **q);
printf("%i\t", q);
return 0;
}
