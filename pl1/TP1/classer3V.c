#include <stdio.h>

int main(){

int x;
int y;
int z;

/* lecture au clavier de x y et z */

printf("entrer un premier entier\n");
scanf("%d", &x);
printf("entrer un deuxième entier\n");
scanf("%d", &y);
printf("entrer un dernier entier\n");
scanf("%d", &z);

/* classement des trois entiers par ordre croissant */
if (x>=y && x>=z)
{
	if (y>=z){
		printf("Ordre croissant : %d, %d ,%d \n", x, y, z);
	} else{
		printf("Ordre croissant : %d, %d, %d \n", x, z, y);
	}
}else{
	if (x>=y && x<z){
		printf("Ordre croissant : %d, %d, %d \n", z, x, y);
	} else{
		if (x<y && x>=z){
			printf("Ordre croissant : %d, %d, %d \n", y, x, z);
		} else{
			if (y>=z){
				printf("Ordre croissant : %d, %d, %d \n", y, z, x);
			} else{
				printf("Ordre croissant : %d, %d, %d \n", z, y, x);
			}
		}
	}
}
		

}

