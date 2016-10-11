
#include <stdio.h>
#include <stdlib.h>

#define N 20

// definition du type Sequence (avec longueur explicite)
typedef struct {
	int T[N] ;    // les elements de la sequence
	unsigned int L ;  // longueur de la sequence
	} Sequence ; 



/* affichage d'une Sequence */

void affiche (Sequence S) {

  unsigned int i ;

  printf("[") ;
  for (i=0; i<S.L ; i++) {
	printf(" %d ", S.T[i]) ;
  } ;
  printf("]\n") ;
}



/* Generation aleatoire d'une sequence de 10 elements */

void genere (Sequence *S) {

  unsigned int i ;

  (*S).L = 10 ;
  for (i=0; i<(*S).L ; i++) {
	(*S).T[i] = (random() % 50) ;  /* genere un entier aleatoire entre 0 et 49 */
  } ;
}



/*Ajout d'un entier x en tête de la Séquence S*/

void ajout_tete(Sequence * pS, int a) {
	
	unsigned int i ;
	pS -> L++; //Taille séquence augmente de 1
	for(i=pS -> L; i>0; i--){
		pS -> T[i]=pS -> T[i-1]; //décalage vers la droite
	}
	pS -> T[0]=a; //ajout de a en tete de S
}

/* programme principal */

int main() {
	int x;
	printf("Valeur de x ? ");
	scanf("%d", &x);
  Sequence S ;

  genere(&S) ;
  affiche(S) ;
	ajout_tete(&S, x);
	affiche(S);
  return 0 ;

}
