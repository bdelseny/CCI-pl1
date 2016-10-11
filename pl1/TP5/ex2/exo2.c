#include <stdio.h>
#include "lire.h"
#include "ecrireEnt.h"

int main() {
   int i, x ;
   for (i=1 ; i<=10 ; i++) {
       x = lire_entier() ;
       ecrire_entier( x) ;
                        }
   return 0 ;
}

