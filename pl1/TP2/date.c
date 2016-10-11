#include <stdio.h>

 /* definition d'un type pour representer une date */

typedef unsigned int Jour ; 

typedef enum {jan, fev, mar, avr, mai, jun, jui, aou, sep, oct, nov, dec} Mois ;
  /* attention : jan vaut 0, fev vaut 1, mar vaut 3, etc. */

typedef unsigned int Annee ; 


 typedef struct {
	Jour jour ;
	Mois mois ; 
	Annee annee ; } Date ;

/* affichage d'une date a l'ecran */

void afficheDate (Date d) {
   printf("%u/%u/%u\n", d.jour, d.mois, d.annee) ;
}


int main() {
	

	/*Initialisation*/
	Date d;
	int bissextiles;

	printf("Annee ?\n");
	scanf("%u", &d.annee);
	printf("Mois ? \n");
	scanf("%u", &d.mois);
	printf("Jour ?\n");
	scanf("%u", &d.jour);
	
	/*Afficher la date*/
	afficheDate(d);

	bissextiles=1;
	switch(d.jour)
	{
		case 1 ... 28:
			if(d.mois>=1 && d.mois<=12){printf("correcte");}else{printf("incorrecte");}
			break;
		case 29:
			if(d.mois==1 || (d.mois>=3 && d.mois<=12) || (d.mois==2 && bissextiles)){printf("correcte");}else{printf("incorrecte");}
			break;
		case 30:
			if(d.mois==1 || (d.mois>=3 && d.mois<=12)){printf("correcte");}else{printf("incorrecte");}
			break;
		case 31:
			if(d.mois==2 || d.mois==3 || d.mois==5 || d.mois==7 || d.mois==8 || d.mois==10 || d.mois==12){printf("correcte");}else{printf("incorrecte");}
			break;
		default:
			printf("incorrecte");
			break;
	}



 return 0 ;
}
