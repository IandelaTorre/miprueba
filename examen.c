#include<stdio.h>

int main(void){
	int mayor=0, menor=100, aux, i, n[150];
	for(i=0; i<10; i++){
	printf("dame los numeros: ");
	scanf("%d", &n[i]);
	if(n[i]<menor){
		menor = n[i];	
	}
	if(n[i]>mayor){

		mayor = n[i];	
	}
	}
	
	printf("el menor es: %d",menor);
	printf("el mayor es: %d",mayor);
return 0;
}
