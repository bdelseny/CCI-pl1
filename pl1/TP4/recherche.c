
#include <stdio.h>
#include <stdlib.h>

#define N 10

void affiche (int T[], unsigned int l) {
/* affiche les l premiers elements du tableau T */

  unsigned int i ;
  printf("[") ;
  for (i=0; i<l ; i++) {
	printf(" %d ", T[i]) ;
  } ;
  printf("]\n") ;
}

void genere (int T[], unsigned int l) {
/* initialise les l premiers elements du tableau T */

  unsigned int i ;
  for (i=0; i<l ; i++) {
	T[i] = (random() % 50) ;  /* genere un entier aleatoire entre 0 et 49 */
  } ;
}

/*Recherche la valeur x dans le tableau T de l éléments*/
int recherche (int T[], unsigned int l, int x) {
	unsigned int i ;
	i=0;
	while (i<l && x!=T[i])
	{
		i++;
	}
	
	return i==l;
}

int main() {
	
	int a;
  int Tab[N] ;
	int s;

	printf("Quelle valeur de x ?");
	scanf("%d", &a);

  srandom (42)  ; /* germe pour la suite pseudo-aleatoire */
  genere(Tab, N) ;
  affiche(Tab, N) ;
	s=recherche(Tab, N, a);
	
	if(s==0){
		printf("Trouvé !\n");
	}else{
		printf("Non trouvé !\n");
	}

  return 0 ;

}
