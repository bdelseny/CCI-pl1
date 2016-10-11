
#include <stdio.h>

  /* calcul de la somme de a et b */

void somme2entiers (int a, int b, int * c) {
   *c = a + b ;
}


int main() {
	
	/*Initialisation variables*/

	int a;
	int b;
	int s;


  printf("Entrez au clavier une valeur entiere : ") ;
  scanf("%d", &a) ;


  printf("Entrez au clavier une valeur entiere : ") ;
  scanf("%d", &b) ;

  somme2entiers (a, b, &s) ;

  printf("Leur somme est %d\n", s) ;

  return 0 ;
}
