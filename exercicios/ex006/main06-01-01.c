#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int v[5];
	float m;
	
	v[0] = 10;
	v[1] = 20;
	v[2] = 30;
	v[3] = 40;
	v[4] = 50;
	
	m = (v[0] + v[1] + v[2] + v[3] + v[4]) /5;
	
	printf ("Resultado: %f\n", m);
	
	return 0;
}
