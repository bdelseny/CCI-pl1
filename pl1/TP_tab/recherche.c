#include <stdio.h>

/*Recherche d'un entier dans le tableau*/

#define N 10 //taille du tableau

int main () {

	/*Initialisation du tableau*/
    int T[N];       // tableau d'entiers de taille N
    int i, j, x; //entier qui permet de calculer la somme des entiers du tableau


    /*Remplissage du tableau du tableau*/
    for (i=0; i<N; i++)
    {
            printf("Saisir un entier\n");
            scanf("%d", &T[i]);
    }
	
	/*Valeur de x*/
	printf("Entier à chercher ?\n");
	scanf("%d", &x);
	
	/*Recherche x dans T*/
	j=0; //Initialise j

	while( j<N && T[j]!=x ) //Tant que dans T et x non trouvé
	{
		j++; //j+1
	}

	/*Retour écran*/
	if ( j<N )
	{
		printf("Trouvé\n"); //x dans T
	}else
	{
		printf("Non trouvé\n"); //x pas dans T
	}


    return(0);


}


