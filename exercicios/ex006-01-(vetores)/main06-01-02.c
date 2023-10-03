#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int v[5] = {10,20,30,40,50};
	int i;
	float s=0;
	
	for (i=0; i<5; i++){
		s += v[i];
	}
	
	printf ("Resultado: %.2f\n", s/5);
	
	return 0;
}
