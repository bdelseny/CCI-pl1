#include<stdio.h>
#include"sequence.h"
/**
* LireSeq lit n entier au clavier et les mémorise dans s
* @résultat{SeqInt} *s pointeur sur la séquence s à remplir
*/

void LireSeq (SeqInt *s) {
	int x;
	int end;
	scanf("%d", &end);
	scanf("%d", &x);
	
	s->nbelem=end;

	for(int i = 0; i < s->nbelem; i++) {
	s->T[i]=x;
	scanf("%d", &x);
	}
}


/**
* EcrireSeq affiche la sequence s à l'écran
* @donnée{SeqInt} s la séquence à afficher
*/

void EcrireSeq (SeqInt s) {
	for(int i=0; i<s.nbelem; i++) {
		printf("%d\n", s.T[i]);
	}
}


/**
* int EstPresent test si x appartient à s
* @param{SeqInt} s la séquence
* @param{int} x l'entier à chercher
* @retour{booléen} vrai si x dans la séquence
*/

int EstPresent (SeqInt s, int x) {
	int i=0;

	while(i<s.nbelem && s.T[i]!=x){
		i++;
	}
	if(i==s.nbelem){ 
		i=-1; 
	}
	return i+1;
}


/**
* Inserer x dans s si possible
* @resultat{SeqInt} *s la séquence à modifier
* @donnée{int} x l'entier à ajouter à s
*/

void Inserer (SeqInt *s, int x) {
	if(LGMAX != s->nbelem) {
		s->T[s->nbelem]=x;
		s->nbelem = s->nbelem + 1;
	}
}

/**
* Supprimer 1 x de s
* @resultat{SeqInt} *s la séquence à modifier
* @donnée{int} x à supprimer
*/

void Supprimer (SeqInt *s, int x) {
	int a=EstPresent(*s, x);
	if(a) {
		a--;
		for(int i=a; i<s->nbelem; i++) {
			s->T[i]=s->T[i+1];
		}
		s->nbelem=s->nbelem - 1;
	}
}
		

