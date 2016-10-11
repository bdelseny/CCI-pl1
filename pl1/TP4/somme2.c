
#include <stdio.h>

  /* calcul de la somme de a et b */

int somme2entiers (int a , int b) {
   return( a + b );
}


int main() {
  /* variables globales */

  int a ;
  int b ;
  int s ;

  printf("Entrez au clavier une valeur entiere : ") ;
  scanf("%d", &a) ;


  printf("Entrez au clavier une valeur entiere : ") ;
  scanf("%d", &b) ;

  s = somme2entiers (a, b) ;

  printf("Leur somme est %d\n", s) ;

  return 0 ;
}
