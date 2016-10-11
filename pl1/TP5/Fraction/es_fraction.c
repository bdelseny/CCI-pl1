#include <stdio.h>
#include "type_fraction.h"

void LireFraction (Fraction *f) {
	printf("Numérateur ?\n") ;
	scanf("%d", &(f->num)) ; //Numérateur
	printf("Dénominateur ?\n") ;
	scanf("%d", &(f->den)) ; //Dénominateur
}

void EcrireFraction (Fraction f) {
	printf("Fraction : %d/%d \n", f.num, f.den) ; //Fraction num/den
}
