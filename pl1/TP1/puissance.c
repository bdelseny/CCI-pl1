#include <stdio.h>

int main(){

int x;
int y;
int p=1; /*la valeur courante de x^y*/
int compteur;

/* lecture de x et y*/
printf("entrer un entier\n");
scanf("%d", &x);
printf("entrer un entier\n");
scanf("%d", &y);

/*calcul de la puissance*/

for (compteur=1 ; compteur<=y; compteur++)
{
	p=p*x;
}
printf("x^y=%d \n", p);

}
