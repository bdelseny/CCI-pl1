#include <stdio.h>

/*Somme des éléments d'un tableau*/

#define N 10 //taille du tableau

int main () {
	
	/*Initialisation du tableau*/
	int T[N];	// tableau d'entiers de taille N
	int i, Somme; //entier qui permet de calculer la somme des entiers du tableau


	/*Remplissage du tableau du tableau*/
	for (i=0; i<N; i++)
	{
		printf("Saisir un entier\n");
		scanf("%d", &T[i]);
	}
	
	Somme=0; //Initialisation Somme

	/*Calcul de la somme du tableau*/
	for(i=0; i<N; i++)
	{
		Somme = Somme + T[i]; //Somme de T[0] à T[i]
	}

	/*Résultat*/
	printf("La somme de ces chiffres est %d \n", Somme);

	return(0);


}
