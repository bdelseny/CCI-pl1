
#include <stdio.h>

int main() {

  int x ;
  int y ;

  /* lecture au clavier des entiers x et y */

  printf("entrez un entier relatif au clavier\n") ;
  scanf ("%d", &x) ;
  printf("entrez un deuxieme entier relatif au clavier\n") ;
  scanf ("%d", &y) ;

  /* calcul du signe du produit x*y sans calculer ce produit */

  if ( (x>0 && y>0) || (x<0 && x<0) ) 
{
     printf("le produit de %d et %d est strictement positif\n", x, y) ;
  } else if ( x==0 || y==0 ) {
   printf("le produit de %d et %d est nul\n", x, y);
  } else {
	printf("le produit de %d et %d est strictement negatif\n", x, y);
  }; 
	

  return 0 ;
}
