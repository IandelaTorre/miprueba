#include<stdio.h>
int main(void){
  int n, numbol,precio, sum, acum, i;
  scanf("%d", &n);
  for(i=0; i<n; i++)
  {  
    scanf("%d", &numbol);
    scanf("%d", &precio);
    sum = numbol * precio;
    acum = sum + acum;
    numbol =0;
    precio = 0;
  }
  printf("%d", acum);
  
  return 0;
}
