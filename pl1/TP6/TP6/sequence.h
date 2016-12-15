
/* Type Sequence (representation contigue dans un tableau) */

#define LGMAX 30

/* definition du type SeqInt */

struct cellule{
	int nombre ;  /* element de la sequence */
	struct cellule *suc ;    /* successeur */
};

typedef struct cellule *SeqInt;

/* en-tetes des fonctions sur SeqInt */

void LireSeq (SeqInt *s) ;
void EcrireSeq (SeqInt s) ;
int EstPresent (SeqInt s, int x) ;
void Inserer (SeqInt *s, int x) ;
void Supprimer (SeqInt *s, int x) ;
