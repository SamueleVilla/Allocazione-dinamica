#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(void)
 {
  
  int *Array, dim, i;

  printf("Inseire dimensione array: ");
  scanf("%d",&dim);
  putchar('\n');

  Array = malloc(dim*sizeof(int));
  assert(Array != NULL);

  for(i = 0; i < dim; i++)
  {
    printf("Inserire numero: ");
    scanf("%d", &Array[i]);
  }

  printf("\nELEMENTI ALLOCATI\n\n");
  printf("Indice \tIndirizzo \tValore\n");
  for(i = 0; i < dim; i++) 
    printf("%d\t\t%p\t%d\n",i, &Array[i], Array[i]);

  return 0;
}