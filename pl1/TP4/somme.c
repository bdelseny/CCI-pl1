
#include <stdio.h>

  /* variables globales */

int a ;
int b ;
int s ;

  /* calcul de la somme de a et b */

void somme2entiers () {
   s = a + b ;
}


int main() {

  printf("Entrez au clavier une valeur entiere : ") ;
  scanf("%d", &a) ;


  printf("Entrez au clavier une valeur entiere : ") ;
  scanf("%d", &b) ;

  somme2entiers () ;

  printf("Leur somme est %d\n", s) ;

  return 0 ;
}
