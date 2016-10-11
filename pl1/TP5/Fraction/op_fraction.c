#include "type_fraction.h"
#include <stdio.h>

Fraction AddFraction (Fraction f1, Fraction f2) {
	Fraction f ;
	f.num = ( f1.num * f2.den ) + ( f2.num * f1.den ) ;
	f.den = f1.den * f2.den ;
	return f ;
}

Fraction MultiFraction (Fraction f1, Fraction f2) {
	Fraction f ;
	f.num = f1.num * f2.num ;
	f.den = f1.den * f2.den ;
	return f ;
}

void EgalFraction (Fraction f1, Fraction f2) {
	if (f1.num == f2.num && f1.den == f2.den) {
		printf("vrai\n") ;
	} else {
		printf("faux\n") ;
	}
}
