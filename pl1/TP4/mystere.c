
#include <stdio.h>

  /* variables globales */

int a ;
int b ;


void f1 () {
   int *p ;    // p est un pointeur sur un entier

   p = &a ;      // p pointe sur la variable a ;
   *p = *p + 1 ; // on incremente la valeur pointee par p ;
}

int f2(int x) {
    return x + b ; 
}

void f3(int *x) {
    *x = *x + 1 ;
}


int main() {

 int c ;    // variable locale a la fonction main

  a = 1 ;
  b = 2 ;
  c = 3 ;

  f1() ;   //  appel de f1
	printf("f1 : a=%d, b=%d, c=%d\n", a, b, c); //On test les valeurs de a, b et c
	// (1) valeurs courantes de a, b et c ? a=a+1=1+1=2

  c = f2(b) ; // appel de f2  
	printf("f2 : a=%d, b=%d, c=%d\n", a, b, c); //On test les valeurs de a, b et c
  // (2) valeurs courantes de a, b et c ? c= b+b = 2+2 = 4

  f3(&a) ; // appel de f3  
	printf("f3 : a=%d, b=%d, c=%d\n", a, b, c); //On test les valeurs de a, b et c
  // (3) valeurs courantes de a, b et c ? a= a+1 = 2+1 = 3

  return 0 ;
}

