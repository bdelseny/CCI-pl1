#include <stdio.h>


#define N 10
typedef struct{
	int T[N];
	unsigned int L;
} SeqLE;


int main () {
	SeqLE S; //initialisation séquence

	for(S.L=0; S.L<N; S.L++)
	{
		scanf("%d", &S.T[S.L]);
		printf("%d", S.T[S.L]);
	}

	for(S.L=N-1; S.L>=0; S.L--)
	{
		printf("%d", S.T[S.L]);
	}
		


	return 0;
}
