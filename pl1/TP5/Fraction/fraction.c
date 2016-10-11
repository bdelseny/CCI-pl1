#include <stdio.h>
#include "type_fraction.h"
#include "op_fraction.h"
#include "es_fraction.h"

int main () {
	Fraction f1, f2 ;

	LireFraction (&f1) ;
	EcrireFraction (f1) ;
	LireFraction (&f2) ;
	EcrireFraction (f2) ;

	printf("Addition :\n") ;
	EcrireFraction (AddFraction (f1, f2)) ;

	printf("Multiplication :\n") ;
	EcrireFraction (MultiFraction (f1, f2)) ;
	
	EgalFraction (f1, f2) ;

	return 0 ;
}
