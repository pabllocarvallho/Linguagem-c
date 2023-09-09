#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	int j;
	
	for (i=1; i<=10; i++){
		printf ("%d ", i);
		
		if (i == 5){
			break;
		}
	}
	//1 2 3 4 5
	
	for (j=10; j<=20; j++){
		printf ("%d ", j);
		
		if (j == 15){
			continue;
		}
	}
	//10 11 12 13 14 15 16 17 18 19 20
	
	
	return 0;
}
