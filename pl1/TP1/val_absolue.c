
#include <stdio.h>

int main() {

  int x ;
  int abs_x ;

  /* lecture au clavier de l'entier x */

  printf("entrez un entier relatif au clavier\n") ;
  scanf ("%d", &x) ;

  /* calcul de la valeur absolue de x */

  if ( x >= 0 ) {
	abs_x = x ;
  } else {
	abs_x = -x ;
  } ; 
	
  /* affichage du resultat */

  printf("la valeur absolue de %d est : %d\n", x, abs_x) ;

  return 0 ;
}
