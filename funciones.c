#include<stdio.h>
#include<math.h>

int potencia(base, exponente)
{
	int mult=0, total=0, i;
		scanf("%d", &base);
	scanf("%d", &exponente);
	if(exponente <= 0){
	printf("Error tiene que ser mayor a cero");
	return;
}
	else 
	total = pow(base, exponente);
	printf("%d",total);
	return;
	
}

int main()
{

	potencia();
	return 0;
}
