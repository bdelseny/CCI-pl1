#include<stdio.h>
#include<stdlib.h>
#include"sequence.h"

/*
* Inserer en tête un nouvel élément
* @resultat{SeqInt} sla sequence à modifier
* @donnée{int} x l'entier à ajouter à la séquence
*/

void Inserer(SeqInt *s, int x) {
	SeqInt nouv;
	nouv = (SeqInt)malloc(sizeof(struct cellule));
	nouv->nombre=x;
	nouv->suc=*s;
	*s=nouv;
}

/**
* LireSeq lit n entier au clavier et les mémorise dans s
* @résultat{SeqInt} *s pointeur sur la séquence s à remplir
*/

void LireSeq (SeqInt *s) {
	int x;
	int end;
	scanf("%d", &end);
	*s=NULL;

	for(int i = 0; i < end; i++) {
		scanf("%d", &x);
		Inserer(s, x);
	}
}


/**
* EcrireSeq affiche la sequence s à l'écran
* @donnée{SeqInt} s la séquence à afficher
*/

void EcrireSeq (SeqInt s) {
	SeqInt AC;
	AC=s;
	while(AC!=NULL) {
		printf("%d\n", AC->nombre);
		AC=AC->suc;
	}
}


/**
* int EstPresent test si x appartient à s
* @param{SeqInt} s la séquence
* @param{int} x l'entier à chercher
* @retour{booléen} vrai si x dans la séquence
*/

int EstPresent (SeqInt s, int x) {
	SeqInt AC;
	AC=s;
	int i=0;

	while(AC!=NULL && AC->nombre!=x){
		i++;
		AC=AC->suc;
	}
	if(AC==NULL){ 
		i=0; 
	}
	return i;
}


/**
* Supprimer 1 x de s
* @resultat{SeqInt} *s la séquence à modifier
* @donnée{int} x à supprimer
*/

void Supprimer (SeqInt *s, int x) {
	int a=EstPresent(*s, x);
	if(a) {
		SeqInt AC, AP;
		
		AP=*s; 
		if(AP->nombre==x) {
			AC=*s;
			*s=AP->suc;
		}else{
			AC=AP->suc;
			while(AC->nombre!=x) {
				AP=AC;
				AC=AC->suc;
			}
			AP->suc=AC->suc;
		}
		free(AC);
	}
}
		

