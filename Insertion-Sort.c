#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(){
int v[N];
int n,x,i = 0;

printf("Inserisci l'elemento %d: \n", i);
scanf("%d", &v[0]);

      
for(x = 1; x < N; x++) {
      printf("Inserisci il valore da mettere nell'array: \n");
      scanf("%d", &n);
      for(i = x; n < v[i - 1] && i > 0; i--) {
           v[i] = v[i - 1];
      }
      v[i] = n;
}

printf("\n\n");

for(i = 0; i < N; i++) {
      printf("Elemento %d dell'array ordinato %d\n",i,v[i]);
      }      

return (EXIT_SUCCESS);  
}
