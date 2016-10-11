#include <stdio.h>

 /* definition d'un type pour representer un point du plan par ses coordonnees */

 typedef struct {
	int abscisse ;
	int ordonnee ; } Point ;


int main() {
	
	/*Initialisation */
	Point A, B, C;
	int y, m, x, p;
	int sont_alignes;
	int sont_orthogonaux;

	/*Récupération des points*/
	printf("Abscisse de A ?\n");
	scanf("%d", &A.abscisse);
	printf("Ordonnee de A ?\n");
	scanf("%d", &A.ordonnee);
		
	printf("Abscisse de B ?\n");
	scanf("%d", &B.abscisse);
	printf("Ordonnee de B ?\n");
	scanf("%d", &B.ordonnee);
	
	printf("Abscisse de C ?\n");
	scanf("%d", &C.abscisse);
	printf("Ordonnee de C ?\n");
	scanf("%d", &C.ordonnee);

	/*affichage de A, B et C*/	
	printf("\nA(%d, %d) B(%d, %d) C(%d, %d)\n", A.abscisse, A.ordonnee, B.abscisse, B.ordonnee, C.abscisse, C.ordonnee);
	
	/*Test alignement*/
	if (A.abscisse==B.abscisse) /*on évite a/b=0*/
	{
		if (A.abscisse==C.abscisse) /*si a=b et a=c alors a=b=c*/
		{
			printf("\nA, B et C sont alignes ! ;)\n");
		}
	}else
	{

		/*Initialisation pour calcul alignement*/
		x=C.abscisse;
		m=(B.ordonnee-A.ordonnee)/(B.abscisse-A.abscisse);
		p=A.ordonnee-m*A.abscisse;
		y=m*x+p;

		/*Alignement*/
		sont_alignes=(y==C.ordonnee);
		if (sont_alignes!=0)
		{
			printf("\nA, B et C sont alignes ! ;) \n");
		} else
		{
			printf("\nA, B et C ne sont pas alignes ! :( \n");
		}
	}

	/*Test ortogonaux*/
	sont_orthogonaux=(B.abscisse-A.abscisse)*(C.abscisse-A.abscisse)+(B.ordonnee-A.ordonnee)*(C.ordonnee-A.ordonnee);
	if(sont_orthogonaux==0)
	{
		printf("A, B et C sont orthogonaux \\o/ !\n");
	}else
	{
		printf("A, B et C ne sont pas orthogonaux :'( !\n");
	}


	return 0 ;
}
